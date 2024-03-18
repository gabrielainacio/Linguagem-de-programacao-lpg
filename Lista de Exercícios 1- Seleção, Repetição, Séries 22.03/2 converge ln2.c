#include <stdio.h> 
int main (){
    int n;
    float somatorio =0;
    
    printf("\nDigite o numero de termos: ");
    scanf("%d", &n);
    
    printf("os %d termos são: ", n);
    for(int i=1; i<=n;i++){
        printf("1/%d  ", i);
        if(i%2==0){
            somatorio-=(1.0/i);
        }else{
            somatorio+=(1.0/i);
        }
        
    }
    printf("\n\nsomatorio = %f", somatorio);
    
    return 0; 
}