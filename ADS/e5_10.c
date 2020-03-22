//Calculadora com 4 operações

#include <stdio.h>

float num0, num1;
char operador;

int main(void)
{
  
    printf("Selecione uma operação:\n(A)dição\n(S)ubtração\n(M)ultiplicação\n(D)ivisão\n");
    scanf("%c", &operador);
    
    printf("Digite o primeiro número:\n");
    scanf("%f", &num0);
    
    printf("Digite o segundo número:\n");
    scanf("%f", &num1);

    if (operador == 'A' || operador == 'a')
    {
        num0 = num0 + num1;
        printf("O resultado é %.0f\n", num0);
        return 0;
    }
   
    if (operador == 'S' || operador == 's')
    {
        num0 = num0 - num1;
        printf("O resultado é %.0f\n", num0);
        return 0;
    }
    
    if (operador == 'M' || operador == 'm')
    {
        num0 = num0 * num1;
        printf("O resultado é %.0f\n", num0);
        return 0;
    }
    
    if (operador == 'D' || operador == 'd')
    {
        num0 = num0 / num1;
        printf("O resultado é %.1f\n", num0);
        return 0;
    }
}
