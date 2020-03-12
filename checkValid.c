#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int num;
    int num2;

    printf("Digite um número.\n");
    scanf("%d", &num);
    printf("Digite outro número.\n");
    scanf("%d", &num2);

    if (num != 0 && num2 != 0)
    {
        printf("Números válidos!\n");

    }
    else
    {
        printf("Números Inválidos!\n");
    }
}
