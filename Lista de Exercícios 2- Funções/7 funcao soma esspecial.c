#include <stdio.h>

int soma_especial(int n, int k, int x);

int main() {
    int x, n, k, resultado;
    
    printf("digite x: ");
    scanf("%d", &x);
    
    printf("quantos termos? ");
    scanf("%d", &n);
    
    printf("digite k: ");
    scanf("%d", &k);
    
    resultado = soma_especial(n, k, x);
    
    printf("A soma dos %d termos que são múltiplos de %d a partir de %d é: %d\n", 
    n, k, x, resultado);

    return 0;
}

int soma_especial(int n, int k, int x) {
    int somatorio = 0, contador = 0;

    for (int i = x; contador < n; i++) {
        if (i % k == 0) {
            somatorio += i;
            contador++;
        }
    }

    return somatorio;
}
