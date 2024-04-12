#include <stdio.h> 

int tipo_triangulo(float x, float y, float z);

int main (){
    int tipo;
    float x, y, z; 
    
    printf("Digite o valor do lado do trinângulo:\n");
    scanf("%f", &x);
    printf("Digite o valor do lado do trinângulo:\n");
    scanf("%f", &y);
    printf("Digite o valor do lado do trinângulo:\n");
    scanf("%f", &z);

    tipo = tipo_triangulo (x,y,z);

    if (tipo==0){
        printf("Os lados não formam um triângulo\n");
    }

    if (tipo==1){
        printf("Triângulo equilátero\n");
    }
    if (tipo==2){
        printf("Triângulo isóceles\n");
    }
     if (tipo==3){
        printf("Triângulo escaleno\n");
    }
    
    return 0;
}


int tipo_triangulo(float x, float y, float z){
    if (x+y<z){
        return 0;
    }
    if (x==y && y==z){
        return 1;
    }
    if (x==y && y!=z ||x==z && y!=x ){
        return 2;
    }
    if (x!=y && y!=z){
        return 3;
    }
    
}