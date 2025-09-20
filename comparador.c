#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Tamanho máximo das strings
#define MAX 1000

// Função para calcular a LCS e também reconstruí-la
void lcs(char *X, char *Y) {
    int m = strlen(X);
    int n = strlen(Y);

    // Matriz de programação dinâmica
    int matrizValores[MAX+1][MAX+1];

    // Construção da tabela matrizValores
    for (int i = 0; i <= m; i++) {
        for (int j = 0; j <= n; j++) {
            if (i == 0 || j == 0)
                matrizValores[i][j] = 0;
            else if (X[i-1] == Y[j-1])
                matrizValores[i][j] = matrizValores[i-1][j-1] + 1;
            else
                matrizValores[i][j] = (matrizValores[i-1][j] > matrizValores[i][j-1]) ? matrizValores[i-1][j] : matrizValores[i][j-1];
        }
    }

    // Comprimento da LCS
    int len = matrizValores[m][n];
    printf("Tamanho da LCS: %d\n", len);

    // Reconstruir a subsequência
    char lcs_seq[MAX+1];
    lcs_seq[len] = '\0'; // final da string

    int i = m, j = n;
    while (i > 0 && j > 0) {
        if (X[i-1] == Y[j-1]) {
            lcs_seq[len-1] = X[i-1];
            i--; j--; len--;
        } else if (matrizValores[i-1][j] > matrizValores[i][j-1]) {
            i--;
        } else {
            j--;
        }
    }

    printf("LCS: %s\n", lcs_seq);
}

int main() {
    char X[MAX+1], Y[MAX+1];

    // Abrir arquivos
    FILE *arquivo1 = fopen("string1.txt", "r");
    FILE *arquivo2 = fopen("string2.txt", "r");

    if (!arquivo1 || !arquivo2) {
        printf("Erro ao abrir os arquivos.\n");
        return 1;
    }

    // Ler strings
    fscanf(arquivo1, "%1000s", X);
    fscanf(arquivo2, "%1000s", Y);

    fclose(arquivo1);
    fclose(arquivo2);

    // Executar LCS
    lcs(X, Y);

    return 0;
}
