#include <stdio.h>

int valor = 0;
int nota1, nota5, nota10;

int main(void)

{  
    printf("Digite um valor:\n");
    scanf("%i", &valor);

    do 
    {
        valor = valor - 10;
        nota10++;  
    }
    while (valor >= 10);
    
    do 
    {
        valor = valor - 5;
        nota5++;
    }
    while (valor >= 5);
    
    do 
    {
        valor = valor - 1;
        nota1++;
    }
    while (valor >= 1);

    printf("Troco:\n");
    
    if (nota10 > 0)
    {
        printf("Notas de 10: %i\n", nota10);
    }
    
    if (nota5 > 0)
    {
        printf("Notas de 5: %i\n", nota5);
    }
    
    if (nota1 > 0)
    {
        printf("Notas de 1: %i\n", nota1);
    }

    return 0;
}

