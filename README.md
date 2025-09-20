# PAA-Projeto1

#1 Descrição

Aplicações biológicas frequentemente precisam comparar o DNA de dois ou mais diferentes
organismos. Um filamento de DNA consiste de uma string de moléculas chamadas bases,
onde os possíveis bases são adenina, guanina, citosina e tiamina. Representando cada uma
destas bases pela letra inicial, podemos expressar um filamento de DNA como uma string sobre
um conjunto finito {A, C, G, T}. Uma razão para comparar dois filamentos de DNA é determinar
quão similares dois filamentos são, como uma medida do quão proximamente relacionados os
dois organismos estão. Nós podemos encontrar um terceiro filamento S3 no qual as bases
dentro de S3 aparecem em ambos S1 e S2. Estas bases devem aparecer na mesma ordem,
mas não necessariamente de forma consecutiva. Quanto maior o filamento S3, mais similares
são S1 e S2.
Formalmente, dada uma sequência X = < x1, x2, . . . , xm >, uma outra sequência Z =
< z1, z2, . . . , zk > é uma subsequência de X se existir um sequência estritamente crescente
< i1, i2, . . . , ik > de índices de X tal que para todo j = 1, 2, . . . , k, tivermos xij = zj .
Por exemplo, Z = < B, C, D, B > é uma subsequência de X = < A, B, C, B, D, A, B > com
a sequência correspondente de índices < 2, 3, 5, 7 >. Dada duas sequências X e Y , dizemos
que uma sequência Z é uma subsequência comum de X e Y se Z for uma subsequência para
ambos X e Y . Por exemplo, se X = < A, B, C, B, D, A, B > e Y = < B, D, C, A, B, A >, a
sequência < B, C, A > não é a mais longa subsequência comum para ambos X e Y , dado
que tem comprimento 3 e a sequência < B, C, B, A >, que também é comum a ambos X e Y ,
tem tamanho 4. A sequência < B, C, B, A > é uma LCS de X e Y , assim como a sequência
< B, D, A, B >, dado que não há subsequências de tamanho 5 ou maior para X e Y .
No problema da mais longa subsequência comum, são dadas duas sequências X = <
x1, x2, . . . , xm > e Y = < y1, y2, . . . , yn > e deseja-se encontrar subsequência comum de
tamanho máximo de X e Y .
EP Page 1

#2 Implementação

Escreva um programa em Linguagem C que lê duas strings de tamanho até 1000 e determina
a LCS entre elas.

#3 Observações

1. Este exercício programa pode ser feito em grupos de até 3 alunos.
2. Apenas um aluno do grupo deve submeter o programa e deve incluir o nome dos
outros membros do grupo no cabeçalho do programa.
3. A entrada se dará por meio de dois arquivos texto de nome: string1 e string2 com até 1000
caracteres cada um, dispostos um em seguida ao outro, sem saltos forçados de linha.
4. Idente e comente seu programa.
