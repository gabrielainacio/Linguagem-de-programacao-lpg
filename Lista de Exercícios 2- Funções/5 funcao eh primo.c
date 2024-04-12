#include <stdio.h>

int eh_primo (int x);

int main() {
    int k, n, contador = 0;

    printf("digite k: ");
    scanf("%d", &k);
    printf ("digite quantos numeros acima de k: \n");
    scanf("%d", &n);

    for (int numero = k + 1; contador < n; numero++) {
        if (eh_primo(numero)) {
            printf("%d ", numero);
            contador++;
        }
    }

    return 0;
}

int eh_primo(int x) {
    int divisor, quantidade = 0;
    
    for (divisor = 1; divisor <= x; divisor++) {
        if (x % divisor == 0) {
            quantidade++;
        }
    }
    
    if (quantidade != 2) {
        return 0;
    } else {
        return 1; 
    }
}

