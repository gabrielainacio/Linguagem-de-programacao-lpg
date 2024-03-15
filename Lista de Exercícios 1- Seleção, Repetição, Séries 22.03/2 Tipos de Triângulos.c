#include <stdio.h>

int main() {
    float a, b, c;
    
    printf("\nDigite a: ");
    scanf("%f", &a); 
    
    printf("\nDigite b: ");
    scanf("%f", &b); 
    
    printf("\nDigite c: ");
    scanf("%f", &c);   
    
    if (a >= b + c || b >= a + c || c >= a + b) {
        printf("\nNAO FORMA TRIANGULO");
    } else {
        if (a*a == b*b + c*c || b*b == a*a + c*c || c*c == a*a + b*b) {
            printf("\nTRIANGULO RETANGULO");
        } else if (a*a > b*b + c*c || b*b > a*a + c*c || c*c > a*a + b*b) {
            printf("\nTRIANGULO OBTUSANGULO");
        } else if (a*a < b*b + c*c && b*b < a*a + c*c && c*c < a*a + b*b) {
            printf("\nTRIANGULO ACUTANGULO");
        }
        if (a == b && b == c) {
            printf("\nTRIANGULO EQUILATERO");
        } else if (a == b || b == c || a == c) {
            printf("\nTRIANGULO ISOSCELES");
        }
    }
    
    return 0;
}
