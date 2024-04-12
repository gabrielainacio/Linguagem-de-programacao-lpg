#include <stdio.h> 
int maior_valor (int x, int y, int z);

int main (){
    int x,y,z;
    printf("Digite um valor: \n");
    scanf ("%d", &x);
    printf("Digite um valor: \n");
    scanf ("%d", &y);
    printf("Digite um valor: \n");
    scanf ("%d", &z);
    
    printf ("O maior valor é: %d\n", maior_valor(x,y,z));
    return 0;
}

int maior_valor (int x, int y, int z){
    
    int maior = x;

    if (maior<x){
        maior=x;
    }
    
    if (maior<y){
        maior=y;
    }
    
    if (maior<z){
        maior=z;
    }
    
    return maior;
}