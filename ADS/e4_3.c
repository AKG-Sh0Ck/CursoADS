#include <stdio.h>

int main(void)
{
    int num;
    float valor;
    printf("Digite a quantidade de maçãs...\n");
    scanf("%i", &num);
    
    if (num >= 12) 
    {
        valor = num * 1.00;
    }
    else 
    {
        valor = num * 1.30;
    }
    printf("O total é R$%.2f.\n", valor);
    return 0;
}
