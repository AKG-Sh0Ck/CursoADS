#include <stdio.h>

int dia;

int main(void)
{
    printf("Dias da Semana:\n");
    printf("1 - Domingo\n");
    printf("2 - Segunda-feira\n");
    printf("3 - Terça-feira\n");
    printf("4 - Quarta-feira\n");
    printf("5 - Quinta-feira\n");
    printf("6 - Sexta-feira\n");
    printf("7 - Sábado\n");
    printf("Selecione um dia da semana: ");
    scanf("%i", &dia);

    if (dia > 0 && dia < 7)
    {
        switch (dia)
        {
            case 2 ... 6:
                printf("Este dia é dia de semana.\n");
                break;

            default:
                printf("Este dia é final de semana.\n");
                break;
        }
    }
    else
    {
        printf("Código inválido.\n"); 
        return 0;
    }
    return 0;
}
