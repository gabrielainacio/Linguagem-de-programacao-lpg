#include <stdio.h>

int main() {
    int k;
    float somatorio = 0;

    printf("Digite o número de k termos: ");
    scanf("%d", &k);

    printf("Os %d termos da série harmônica são:\n", k);
    for (int i = 1; i <= k; i++) {
        printf("1/%d ", i);
        somatorio += 1.0 / i;
    }

    printf("\n\nSomatório: %.2f\n", somatorio);
    return 0;
}
