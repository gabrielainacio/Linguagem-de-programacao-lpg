/******************************************************************************

escreva uma função que recebe um vetor v e um inteiro n. A função deve gerar o n termos 
de sequência de Fibonacci dentro de v. Protótipo da função:
void fibonacci(int v[], int n);


*******************************************************************************/
#include <stdio.h>

void fibonacci(int v[], int n) {
    int atual = 1, anterior = 0, termo;

    for (int i = 0; i < n; i++) {
        v[i] = atual;
        termo = atual + anterior;
        anterior = atual;
        atual = termo;
    }
}

