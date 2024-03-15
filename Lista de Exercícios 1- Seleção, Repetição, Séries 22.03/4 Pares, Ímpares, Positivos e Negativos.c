#include <stdio.h>

int main() {
    int i = 0, n[100], countpar = 0, countimpar = 0, countposi = 0, countneg = 0;
    
    while (1) {
        printf("Digite um valor ou digite '111111' para parar:  ");
        scanf("%d", &n[i]);

        if (n[i] == 111111) {
            break;
        }
        i++;
    }

    for (int j = 0; j < i; j++) {
        if (n[j] % 2 == 0) {
            countpar++;
        } else {
            countimpar++;
        }
        if (n[j] > 0) {
            countposi++;
        } else if (n[j] < 0) { // Ajuste aqui
            countneg++;
        }
    }
    
    printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n", countpar, countimpar, countposi, countneg);    
    return 0;
}

