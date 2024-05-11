/******************************************************************************
Crie uma função que recebe uma string s e um caractere c, e apague todas as ocorrências
de c em s. Exemplo:
Entrada: s = "ManhattanConnection" e c= 'n'
Saída: s = "MahattaCoectio"
*******************************************************************************/

#include <stdio.h>

void apaga_char(char s[], char c) {
    int i, j; 
    for (i=0; s[i] !=0; i++) {
        if (s[i] == c) {
            for (j=i; s[j] !=0; j++) {
                s[j] = s[j + 1];
            }
            i--; 
        }
    }
}



