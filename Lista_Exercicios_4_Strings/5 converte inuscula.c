/******************************************************************************
 Faça um programa que leia uma cadeia de caracteres e converta todos os caracteres que
forem letras minúsculas para letras maiúsculas. Dica: é preciso fazer uma subtração no
código do caractere. Verifique na tabela ASCII e veja qual valor deve ser usado.
*******************************************************************************/

#include <stdio.h>
void converte(char str[]) ;
int main(){
    char string[30];
    printf("digite uma string: ");
    scanf("%[^\n]", string);
    converte(string);
    printf ("\n a string convertida é: %s", string);
    return 0;
}
void converte(char str[]) {
    int i;
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32; 
        }
    }
}