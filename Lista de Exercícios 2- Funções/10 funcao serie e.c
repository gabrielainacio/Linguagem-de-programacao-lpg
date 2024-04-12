#include <stdio.h>

double fatorial(int x);
double constante_e(int n);
double constante_e_rec(int n, int k);

int main() {
    int n;
    double resultado, resultador;
    
    printf("Digite a quantidade de termos: ");
    scanf("%d", &n);
    
    resultado = constante_e(n);
    resultador = constante_e_rec(n, 0);
    
    printf("S: %.6f \nS recursivo: %.6f\n", resultado, resultador);

    return 0;
}

double constante_e(int n) {
    double soma = 0.0;
    for (int i = 0; i < n; i++) {
        soma += 1 / fatorial(i);
    }
    return soma;
}

double constante_e_rec(int n, int k) {
    if (k == n) {
        return 0.0;
    } else {
        return 1 / fatorial(k) + constante_e_rec(n, k + 1);
    }
}

double fatorial(int x) {
    if (x == 0)
        return 1;
    else
        return x * fatorial(x - 1);
}
