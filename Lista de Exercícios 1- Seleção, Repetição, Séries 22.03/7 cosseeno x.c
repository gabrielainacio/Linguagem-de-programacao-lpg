#include <stdio.h>

double potencia(double base, int expoente);
long long fatorial(int n);

int main() {
    int n;
    double x, resultado = 0.0;

    printf("Digite o valor de x: ");
    scanf("%lf", &x);

    printf("Digite o numero de termos: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) { // Termos pares
            resultado += potencia(x, 2 * i) / fatorial(2 * i);
        } else { // Termos ímpares
            resultado -= potencia(x, 2 * i) / fatorial(2 * i);
        }
    }
    printf("Cosseno de %.2lf é %.6lf\n", x, resultado);

    return 0;
}

double potencia(double base, int expoente) {
    double resultado = 1.0;

    for (int i = 0; i < expoente; i++) {
        resultado *= base;
    }
    
    return resultado;
}

long long fatorial(int n) {
    long long fat = 1;
    for (int i = 1; i <= n; i++) {
        fat *= i;
    }
    return fat;
}
