/******************************************************************************
Faça uma função que recebe um vetor e sua capacidade como parâmetros e retorna o
somatório dos números primos contidos no vetor. Recomenda-se utilizar a função de
verificação (se um número é primo ou não) já implemetada. Protótipo:
int soma_primos(int v[], int n);
*******************************************************************************/

#include <stdio.h>


int soma_primos(int v[], int n){
    int i, soma = 0; 
    for (i = 0; i < n; i++){
        if (eh_primo(v[i])){
            soma += v[i];
        }
    }
    return soma;
}

int eh_primo(int x) {
    int divisor, quantidade = 0;
    
    for (divisor = 1; divisor <= x; divisor++) {
        if (x % divisor == 0) {
            quantidade++;
        }
    }
    
    if (quantidade != 2) {
        return 0;
    } else {
        return 1; 
    }
}

