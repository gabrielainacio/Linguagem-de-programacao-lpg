/******************************************************************************
12) Escreva uma função que implementa o comportamento da função strcmp(), ou seja, dadas
duas strings str1 e str2, a função deve comparar os conteúdos considerando a ordem
alfabética. Protótipo:
int compara( char str1[], char str2[] );
*******************************************************************************/

#include <stdio.h>

int strcmp (char str1[], char str2[]){
    int i;
    for (i=0;str1[i] && str2[i]!=0; i++){
        if(str1[i]!=str2[i]){
            str1[i]-str2[i];
        }
    }
    return str1[i]-str2[i];
}



