#include <stdio.h>

double potencia(double base, int expoente);
long long fatorial(int n);

int main() {
    int n;
    double x, resultado = 0.0, numerador;

    printf("Digite o valor de x: ");
    scanf("%lf", &x); 

    printf("Digite o numero de termos: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            numerador = potencia(x, 2 * i + 1);
        } else {
            numerador = -potencia(x, 2 * i + 1);
        }
        resultado += numerador / fatorial(2 * i + 1);
    }
    printf("seno de %.2lf é %.6lf\n", x, resultado); 

    return 0;
}

double potencia(double base, int expoente) {
    double resultado = 1.0; 

    if (expoente < 0) {
        base = 1 / base;
        expoente = -expoente;
    }

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
