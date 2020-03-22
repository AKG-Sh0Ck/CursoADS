#include <stdio.h>

int main(void)
{
    int num;
    printf("Digite um número inteiro...\n");
    scanf("%i", &num);

    if ((num % 2 == 0)) 
    {
        printf("%i é um número par!\n", num);
    }
    else 
    {
        printf("%i é um número ímpar!\n", num);
    }
    return 0;
}
