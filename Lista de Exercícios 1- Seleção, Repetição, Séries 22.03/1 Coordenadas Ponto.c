#include <stdio.h>
int main(){
    float x, y;
    
    printf("\ndigite a coordenada x (contem apenas uma casa decimal):");
    scanf("%f", &x);
    
    printf("\ndigite a coordenada y (contem apenas uma casa decimal):");
    scanf("%f", &y);

    if (x>0 && y>0){
        printf("\nO ponto (%.1f,%.1f) pertence ao primeiro quadrante ", x, y);
    }else{
        if (x<0 && y>0)
        {
            printf("\nO ponto (%.1f,%.1f) pertence ao segundo quadrante ", x, y);
        } else{
            if (x>0 && y<0)
            {
                printf("\nO ponto (%.1f,%.1f) pertence ao quarto quadrante ", x, y);
            }else{
                if (x<0 && y<0)
                {
                    printf("\nO ponto (%.1f,%.1f) pertence ao terceiro quadrante ", x, y);
                }else
                {
                    if (x==0 && y==0){
                        printf("\nO ponto (%.1f,%.1f) esta na origem ", x, y);
                    }else
                    {
                        if (y==0){
                            printf("\nO ponto (%.1f,%.1f) esta no eixo x ", x, y);
                        }else
                        {
                            if (x==0){
                                printf("\nO ponto (%.1f,%.1f) esta no eixo y ", x, y);
                            }
                        }                        
                        
                    }
                }
            }
        }
    }
    return 0;
}
