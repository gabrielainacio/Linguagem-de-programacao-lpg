/******************************************************************************
2) Modifique o código da questão anterior fazendo com que o programa determine quantas
vezes o caractere ocorre na string.
*******************************************************************************/
#include <stdio.h>
int contem_c (char s[], char c);
int main(){
    char string [30], caractere;
    int vezes;
    
    printf("Digite uma string: ");
    scanf ("%[^\n]", string);
    printf("\n Digite um caractere: ");
    scanf(" %c", &caractere);
    
    vezes = contem_c(string, caractere); 
    
    if(vezes>0){
        printf("\n A string %s contem o caractere %c %d vezes", string, caractere, vezes);
    }else{
        printf("\n A string %s nao contem o caractere %c", string, caractere);
    }
    return 0;
}

int contem_c (char s[], char c){
    int i, cont=0;
    for (i=0; s[i] !=0;i++){
        if (s[i]==c)
        cont++;
    }
    return cont++;
}
