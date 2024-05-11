/******************************************************************************
13) Escreva uma função que, a partir de uma string str, copia para o parâmetro sub a substring
a partir do índice inicial ini e que contém a quantidade de caracteres n. Alguns casos
particulares devem ser considerados, conforme os exemplos a seguir. Protótipo:
void substring( char str[], int ini, int n, char sub[] );
*******************************************************************************/

#include <stdio.h>

void substring(char str[], int ini, int n, char sub[]) {
    int i, j;
    if (ini < 0 || ini >= strlen(str)) {
        return;
    }
    for (i = ini, j = 0; str[i] != 0 && j < n; i++, j++) {
        sub[j] = str[i];
    }
    sub[j] = '\0'; 
}



