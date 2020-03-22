#include <stdio.h>

int idade;
int main(void)
{
    printf("Escreva sua idade:\n");
    scanf("%i", &idade);
    if (idade <= 15)
    {
        printf("Não vota ainda.\n");
        return 0;
    }
    else if (idade <= 17 || idade > 70)
    {
        printf("Voto facultativo.\n");
        return 0;
    }
    else
    {
        printf("Voto obrigatório.\n");
        return 0;
    }
    return 0;
}
