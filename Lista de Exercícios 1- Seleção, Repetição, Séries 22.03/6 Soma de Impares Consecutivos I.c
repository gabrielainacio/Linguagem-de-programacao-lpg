#include <stdio.h>

int main() {
    int x, y, soma;
    soma = 0;
    printf("\nDigite x:");
    scanf("%d", &x);
    
    printf("\nDigite y:");
    scanf("%d", &y);

    if (x <= y) {
        for (int i = x; i <= y; i++) { 
            if (i % 2 != 0) {
                soma += i; 
            }
        }
    }
    
    if (x >= y) {
        for (int i = y; i <= x; i++) { 
            if (i % 2 != 0) {
                soma += i; 
            }
        }
    }
    
    printf("\nsoma: %d", soma);
    return 0;
}
