#include <stdio.h>

int main() {
    long long int fat = 1;
    int num, i;

    printf("Digite um numero: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++) {
        fat = i * fat;
    }

    printf("O fatorial de %d eh: %lld\n", num, fat); 

    return 0;
}



