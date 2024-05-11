/******************************************************************************
1) Dados uma string s e um caractere c faça um programa que verifique se s contém c. Dica: a
implementação dentro de uma função facilita a definição da solução.

*******************************************************************************/
#include <stdio.h>
int contem_c (char s[], char c);
int main(){
    char string [30], caractere;
    
    printf("Digite uma string: ");
    scanf ("%[^\n]", string);
    printf("\n Digite um caractere: ");
    scanf(" %c", &caractere);
    
    if(contem_c(string, caractere)){
        printf("\n A string %s contem o caractere %c", string, caractere);
    }else{
        printf("\n A string %s nao contem o caractere %c", string, caractere);
    }
    return 0;
}

int contem_c (char s[], char c){
    int i;
    for (i=0; s[i] !=0;i++){
        if (s[i]==c)
        return 1;
    }
    return 0;
}
