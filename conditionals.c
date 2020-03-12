#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int a, b, menor;
    printf("Digite dois números inteiros: ");
    scanf("%d %d", &a, &b);
    menor = a;
    if (a > b)
    {
        menor = b;
    }
    printf("O menor número digitado foi: %d\n", menor);
    return 0;
}
