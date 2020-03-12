#include <stdio.h>

int main(void)
{
    int num;
    int num2;
    int resultado;
    printf("Digite o primeiro número: \n");
    scanf("%i", &num);
    printf("Digite o segundo número: \n");
    scanf("%i", &num2);
    resultado = num * num2;
    printf("Resultado:%i\n", resultado);
}
