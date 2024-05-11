/******************************************************************************
9) Escreva uma função remove todos os espaços no início e no final de uma string (processo
é chamado de trimming). Protótipo:
void trim( char srt[] );
*******************************************************************************/

#include <stdio.h>

void trim(char str[]) {
    int i, k = 0;

    while (str[k] == ' ')
        k++;

    for (i = k; str[i] != 0; i++)
        str[i - k] = str[i];
    str[i-k] = '\0';

    for (k = 0; str[k] != 0; k++);
    while (str[k-1] == ' ' && k >= 0)
        k--;

    str[k] = '\0';
}