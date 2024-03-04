#include <stdio.h>

int main() {
    int a, b, c;

    printf("Digite um numero inteiro que corresponda a um lado do triangulo: ");
    scanf("%d", &a);
    printf("Digite um numero inteiro que corresponda a um lado do triangulo: ");
    scanf("%d", &b);
    printf("Digite um numero inteiro que corresponda a um lado do triangulo: ");
    scanf("%d", &c);

    if (a == b && b == c) {
        printf("eh um triangulo equilatero\n");
    } else if (a == b || b == c || c == a) {
        printf("eh um triangulo is0sceles\n");
    } else {
        printf("eh um triangulo escaleno\n");
    }

    return 0;
}
