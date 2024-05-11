/******************************************************************************
Faça um programa que verifica se uma string contém somente dígitos decimais (0 a 9).
*******************************************************************************/

#include <stdio.h>
int eh_digito (char str[]);
int main(){
    int resultado;
    char string[30];
    printf("digite uma string: ");
    scanf("%[^\n]", string);
    resultado = eh_digito(string);
    if(resultado==0){
        printf("\n %s nao contem so digitos", string);
    }else{
        printf("\n %s contem so digitos", string);
    }    
    return 0;
}
int eh_digito (char str[]) {
    int i;
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] < '0' || str[i] > '9') {
            return 0; 
        }
    }
    return 1; 
}
