#include <stdio.h>
int main()
{
    char nome [50], sexo;
    printf("\nDigite seu nome:");
    fgets(nome, 50, stdin);
    printf("\nDigite seu sexo (F ou M):");
    scanf("%c", &sexo);
    if (sexo=='F'||sexo=='f')
    {
        printf("llma.Sra. %s", nome);
    }else
    {
        printf("llmo.Sr %s\n", nome);
    }    
    return 0;
}
