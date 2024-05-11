/******************************************************************************
3) Escreva uma função que implementa o comportamento da função strcat(), ou seja, dadas
duas strings str1 e str2, a função deve concatenar as duas strings e o conteúdo deve ficar
em str1. Não utilize funções predefinidas. Protótipo:
void concatena( char str1[], char str2[] );
*******************************************************************************/
#include <stdio.h>
void concatena( char str1[], char str2[] ){
    int i, j;
    
    for (i = 0; str1[i] != '\0'; i++){
    }

    for (j = 0; str2[j] != '\0'; j++){
        str1[i] = str2[j];
        i++;
    }
    str1[i] = '\0';
}
