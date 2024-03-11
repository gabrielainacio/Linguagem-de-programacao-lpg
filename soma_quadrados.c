/*Faça um algoritmo para calcular a somatória, a soma
dos quadrados e a média dos N primeiros números
naturais*/

#include <stdio.h>
int main (){
    int n, i, soma=0, somaq=0;
    float media=0;  
    printf("\n Digite um numero natural: "); 
    scanf("%d", &n);

    for (i = 1; i <= n; i++){
        soma+=i;
        somaq += i * i; 
    }
    media = (float)soma / (float)n;

    printf("\n soma: %d, soma quadrados: %d, media: %f ", soma, somaq, media); 
    return 0; 
}