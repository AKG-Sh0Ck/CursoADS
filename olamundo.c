//Programa que retorna Olá, Mundo

#include <stdio.h>

int main(void)                  
{

int n1;
int n2;

printf("Digite algum número:\n");
scanf("%i", &n1);

printf("Digite outro número:\n");
scanf("%i", &n2);

if(n1 != n2)
{
printf("n1 é diferente de n2.\n");
}

else
{
printf("n1 é igual n2.\n");
}

return 0;
}
