#include <stdio.h>

float nota;
char conc;

int main(void)
{
    printf("Digite sua nota:\n");
    scanf("%f", &nota);
    
    if (nota > 10 || nota < 0)
    {
        printf("Nota inválida!\n");
        return 0;
    }
    
    else if (nota >= 9)
    {
        conc = 'A';
    }
    
    else if (nota >= 8)
    {
        conc = 'B';
    }
    
    else if (nota >= 7)
    {
        conc = 'C';
    }
    
    else if (nota >= 6)
    {
        conc = 'D';
    }
    
    else
    {
        conc = 'E';
    }
    
    printf("Nota: %.1f\nClassificação: %c\n", nota, conc);
    return 0;
}
