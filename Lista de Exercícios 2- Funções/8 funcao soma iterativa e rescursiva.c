#include <stdio.h>

int soma(int n);
int soma_recursiva(int n);

int main() {
    int n, resultado, resultador;
    
    printf("Digite um numero");
    scanf("%d", &n);
    
    resultado= soma (n);
    resultador= soma_recursiva(n);
    
    printf (" S: %d \n S recursivo: %d", resultado, resultador);


    return 0;
}


int soma_recursiva(int n) {
    if (n == 0) {
        return 0; 
    } else {
        return n + soma_recursiva(n - 1); 
    }
}

int soma(int n){
    int i, soma = 0; 
    for (i = 1; i <= n; i++) {
        soma += i;
    }
    
    return soma;
}