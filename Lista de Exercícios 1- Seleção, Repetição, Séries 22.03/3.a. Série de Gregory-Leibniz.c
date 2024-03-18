#include <stdio.h>
int main() {
    int n, i;
    float soma = 0.0, numerador,denominador;

    printf("Digite o número de termos: ");
    scanf("%d", &n);
    
    printf("os %d termos são: ", n);
    for (i = 0; i < n; i++) {
        if (i % 2 == 0) {
            numerador = 4.0;
        } else {
            numerador = -4.0;
        }

        denominador=(2 * i + 1);
        soma += numerador / denominador; 
        printf("%.0f/%.0f  ", numerador, denominador);
    }


    printf("\n\nSoma: %.10f\n", soma); 

    return 0;
}
