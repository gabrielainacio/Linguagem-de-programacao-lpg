/******************************************************************************
Escreva um programa que converta uma string que contém somente dígitos em um valor
inteiro (variável int)
*******************************************************************************/

#include <stdio.h>
int converte_inteiro (char str[]);
int strlen_n (char string[]);

int main(){
    char string[30];
    printf("digite uma string: ");
    scanf("%[^\n]", string);
    
    int resultado = converte_inteiro(string);
    printf("\n %s convertida para inteiro eh: %d", string, resultado);
   
    return 0;
}

int converte_inteiro (char str[]) {
    
    int i, soma = 0, multiplicador = 1;
    int n = strlen_n(str);
    
    for (i = n-1; str[i] >= 0; i--) {
        soma += (str[i]-'0')*multiplicador;
        multiplicador*=10;
    }
    return soma; 
}

int strlen_n(char string[]) {
    int cont;
    for (cont = 0; string[cont] != '\0'; cont++);
    return cont;
}