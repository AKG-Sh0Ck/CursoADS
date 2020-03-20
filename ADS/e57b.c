#include <stdio.h>

int x, y;
char quad;

int main(void)    //Aninhado
{

    printf("Digite a coordenada X:\n");
    scanf("%i", &x);

    printf("Digite a coordenada Y:\n");
    scanf("%i", &y);
        
    if (x > 0 && y > 0)
    {
        quad = 'A';
    }
        
    else if (x > 0 && y < 0)
    {
        quad = 'B';
    }
        
    else if (x < 0 && y < 0)
    {
        quad = 'C';
    }
        
    else if (x < 0 && y > 0)
    {
        quad = 'D';
    }
    
    else 
    {
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
    
    printf("O ponto está no quadrante %c\n.", quad);
    return 0;

}
