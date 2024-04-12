#include <stdio.h>

int fibo(int n);

int main() {
    int n;

    printf("quantos termos da sequência?: ");
    scanf("%d", &n);

    printf("os %d termos da sequência são: ", n);
    
    for (int i = 0; i < n; i++) {
        printf("%d ", fibo(i));
    }
    printf("\n");

    return 0;
}

int fibo(int n) {
    int atual = 1, anterior = 1, termo;

    for (int i = 0; i < n; i++) {
        termo = atual + anterior;
        anterior = atual;
        atual = termo;
    }

    return anterior; 
}
