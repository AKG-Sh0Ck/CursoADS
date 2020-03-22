#include <stdio.h>
#include <locale.h>

int main(void)
{
    int num;

    setlocale(LC_ALL, "");

    printf("Digite sua idade.\n");
    scanf("%d", &num);

    if (num >= 16)
    {
        printf("Você já pode votar!\n");

    }
    else
    {
        printf("Você não pode votar ainda!\n");
    }
}
