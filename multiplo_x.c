//Faça um algoritmo que leia dois valores, N e X. Mostre na tela os números de 1 a N e, a cada múltiplo de X,
//emita uma mensagem: “Múltiplo de X”.

#include <stdio.h>

int main() {
    int x, n;

    printf("Digite um N: ");
    scanf("%d", &n);

    printf("Digite X: ");
    scanf("%d", &x);

    for (int i = 1; i <= n; i++) {
        printf("%d\n", i);

        if (i % x == 0) {
            printf("%d eh Multiplo de %d\n", i, x);
        }
    }

    return 0;
}

