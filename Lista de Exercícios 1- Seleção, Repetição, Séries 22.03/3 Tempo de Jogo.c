#include <stdio.h>
int main (){
    int duracao, inicial, final;
    printf("\ndigite a hora inicial do jogo: ");
    scanf("%d", &inicial);
    printf("\ndigite a hora final do jogo: ");
    scanf("%d", &final);
    
    if (final>inicial){
        duracao = final - inicial; 
    }else if (final == inicial){
        duracao = 24;
        }else{
            duracao = inicial - final; 
        }
    printf("O JOGO DUROU %d HORA(S)", duracao);
    return 0; 
}