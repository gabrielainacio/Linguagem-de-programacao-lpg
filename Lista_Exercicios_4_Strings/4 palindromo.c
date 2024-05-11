/******************************************************************************
4) Escreva um programa que leia uma string e determina se a mesma é palíndrome, ou seja,
se forma a mesma sequência de caracteres quando lida de trás para frente. Ex.: ARARA.
*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main() {
    int tamanho, i, j, iguais;
    char string[30], stringinvertida[30];
    
    printf("Digite a palavra: ");
    scanf("%29s", string); 

    tamanho = strlen(string);

    for (i = tamanho - 1, j = 0; i >= 0; i--, j++) {
        stringinvertida[j] = string[i];
    }

    iguais = strcmp(string, stringinvertida);

    if (iguais == 0) {
        printf("A palavra %s eh um palindromo\n", string);
    } else {
        printf("A palavra %s nao eh um palindromo\n", string);
    }

    return 0; 
}



   
