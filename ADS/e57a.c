#include <stdio.h>

int x, y;

int main(void) //Simples
{

    printf("Digite a coordenada X:\n");
    scanf("%i", &x);

    printf("Digite a coordenada Y:\n");
    scanf("%i", &y);
        
    if (x > 0 && y > 0)
    {
        printf("O ponto está no quadrante A.\n");
        return 0;
    }
        
    if (x > 0 && y < 0)
    {
        printf("O ponto está no quadrante B.\n");
        return 0;
    }
        
    if (x < 0 && y < 0)
    {
        printf("O ponto está no quadrante C.\n");
        return 0;
    }
        
    if (x < 0 && y > 0)
    {
        printf("O ponto está no quadrante D.\n");
        return 0;
    }

    if (x == 0)
    
    {
        printf("O ponto está sobre o eixo cartesiano Y.\n");
    }       
 
    if (y == 0)
    {
        printf("O ponto está sobre o eixo cartesiano X.\n");
    }
    return 0;
}
