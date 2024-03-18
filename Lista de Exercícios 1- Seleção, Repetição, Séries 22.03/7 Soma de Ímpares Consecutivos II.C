#include <stdio.h>
int main (){
    int num, x, y, soma;
    printf("\ndigite a quanidade de casos: ");
    scanf("%d", &num); 

    for ( int caso = 1; caso <= num; caso++){
        soma=0;
        printf("\ndigite x: ");
        scanf("%d", &x);
        printf("\n digite y: ");
        scanf("%d", &y);

        if (x <= y) {
            for (int i = x; i <= y; i++) { 
                if (i % 2 != 0) {
                    soma += i; 
                }
            }
        }else{        
            for (int i = y; i <= x; i++) { 
                if (i % 2 != 0) {
                    soma += i; 
                }
            }     
        }

        printf("a soma do caso %d é: %d", caso, soma);    
    }
    return 0;
}