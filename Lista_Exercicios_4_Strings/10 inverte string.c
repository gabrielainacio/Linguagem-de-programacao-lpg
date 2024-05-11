/******************************************************************************
10) Escreva uma função que inverte a ordem dos caracteres de uma string
*******************************************************************************/

#include <stdio.h>
#include <string.h>

void inverte(char str[]) {
    int i, j, tamanho = strlen(str);
    for (i = tamanho - 1, j = 0; i >= 0; i--, j++) {
        str[j] = str[i]; 
    }
    str[j] = '\0'; 
}