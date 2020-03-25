#include <stdio.h>

int idade;

int main(void)
{
    printf("Escreva sua idade:\n");
    scanf("%i", &idade);
    
    if (idade >= 0)
    {
        switch (idade)
        {
            case 0 ... 15:
                printf("Não vota ainda.\n");
                break;

            case 16 ... 17:
                printf("Voto facultativo.\n");
                break;

            case 18 ... 69:
                printf("Voto obrigatório.\n");
                break;

            default:
                printf("Voto facultativo.\n");
                break;
        }
    }
    return 0;
}
