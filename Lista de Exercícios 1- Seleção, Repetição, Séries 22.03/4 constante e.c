#include <stdio.h>
int fatorial (int n);

int main() {
    int n;
    float soma=0.0;
    
    printf("digite n: ");
    scanf("%d", &n);
    
    printf("os %d termos são:", n);
    for (int i=0; i<=n;i++){
        soma+= 1.0/fatorial(i);
        printf("1/%d!  ", i);
    }
    
    printf("\n\nsoma = %f", soma);
    return 0;
}


int fatorial (int n){
    int fat=1;
    
    for (int i=1; i<=n;i++){
        fat=i*fat;
    }
    return fat;
}

 

