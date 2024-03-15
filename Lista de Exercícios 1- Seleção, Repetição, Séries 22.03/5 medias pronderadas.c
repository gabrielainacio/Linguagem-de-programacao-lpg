#include <stdio.h> 
int main (){
    float primeiro, segundo, terceiro,media;
    
    printf("\ndigite o primeiro valor (com uma casa decimal): "); 
    scanf("%f", &primeiro);
    
    printf("\ndigite o segundo valor (com uma casa decimal): "); 
    scanf("%f", &segundo);
    
    printf("\ndigite o terceiro valor (com uma casa decimal): "); 
    scanf("%f", &terceiro);
    
    media = ((primeiro*2.0)+(segundo*3)+(terceiro*5))/10; 
    printf("%.1f", media);    
    
    if (primeiro == 0 || segundo==0 || terceiro==0){
        media=0;
    }
    
    return 0;
}