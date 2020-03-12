#include <stdio.h>
#include <cs50.h>

int main(void)
{
   int num;
   int num2;
   float result;
   printf("Digite um número: ");
   scanf("%d",&num);
   printf("Digite outro número: ");
   scanf("%d",&num2);
   if (num == 0 || num2 == 0)
   {
        printf("Não se pode dividir por zero.\n");
        return 0;
   }
    else
        result = num / num2;
        printf("O resultado da divisão é %.f.\n", result);
    return 0;
}
