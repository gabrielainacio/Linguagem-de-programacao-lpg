#include <stdio.h>
int fatorial(int n);
float potencia(float base, int expoente);

int main() {
    int n, denominador;
    float x, numerador, soma = 0;

    printf("Digite o valor de x: ");
    scanf("%f", &x);

    printf("Digite a quantidade de termos da série: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        numerador = potencia(x, i);
        denominador = fatorial(i);
        soma += numerador / denominador;
    }

    printf("soma = %.2f\n", soma);

    return 0;
}

float potencia(float base, int expoente) {
    float resultado = 1;

    if (expoente < 0) {
        base = 1 / base;
        expoente = -expoente;
    }

    for (int i = 0; i < expoente; i++) {
        resultado *= base;
    }

    return resultado;
}

int fatorial(int n) {
    int fat = 1;

    for (int i = 1; i <= n; i++) {
        fat = i * fat;
    }
    return fat;
}
