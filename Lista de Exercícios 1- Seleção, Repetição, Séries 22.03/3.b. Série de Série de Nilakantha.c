#include <stdio.h>

int main() {
    int n, i, primeiro = 2;
    float soma = 3.0, numerador, denominador = 1.0;

    printf("Digite o número de termos: ");
    scanf("%d", &n);

    printf("Os %d termos são: 3+ ", n);
    for (i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            numerador = 4.0;
        } else {
            numerador = -4.0;
        }

        denominador *= primeiro * (primeiro + 1) * (primeiro + 2);
        primeiro += 2;
        
        soma += numerador / denominador;
        
        printf("%.0f/%.0f  ", numerador, denominador);
    }

    printf("\n\nSoma: %.10f\n", soma);

    return 0;
}
