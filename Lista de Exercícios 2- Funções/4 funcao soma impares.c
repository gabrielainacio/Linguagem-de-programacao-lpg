#include <stdio.h>

int soma_xy(int x, int y);

int main() {
    int x, y, resultado;

    printf("Digite o valor de x: ");
    scanf("%d", &x);
    printf("Digite o valor de y: ");
    scanf("%d", &y);

    resultado = soma_xy(x, y);

    printf("A soma dos números ímpares entre %d e %d é: %d\n", x, y, resultado);

    return 0;
}

int soma_xy(int x, int y) {
    int aux, soma = 0;
    if (x > y) {
        aux = x;
        x = y;
        y = aux;
    }
    for (int i = x + 1; i < y; i++) {
        if (i % 2 != 0) {
            soma += i;
        }
    }
    return soma;
}
