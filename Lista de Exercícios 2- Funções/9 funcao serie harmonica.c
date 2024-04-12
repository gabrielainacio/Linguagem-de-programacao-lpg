#include <stdio.h>

double serie_harmonica(int n);
double serie_harmonica_recursiva(int n);

int main() {
    int n;
    double resultado, resultador;
    
    printf("Digite a quantidade de termos: ");
    scanf("%d", &n);
    
    resultado = serie_harmonica(n);
    resultador = serie_harmonica_recursiva(n);
    
    printf("S: %.6f \nS recursivo: %.6f\n", resultado, resultador);

    return 0;
}

double serie_harmonica(int n){
    double soma = 0.0;
    for (int i = 1; i <= n; i++) {
        soma += 1.0 / i; 
    }
    return soma;
}

double serie_harmonica_recursiva(int n){
    if (n == 1) {
        return 1.0; 
    } else {
        return 1.0 / n + serie_harmonica_recursiva(n - 1); 
    }
}
