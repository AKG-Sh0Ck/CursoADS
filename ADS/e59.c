#include <stdio.h>

int num0, num1;

int main(void)
{
        printf("Digite um número inteiro:\n");
        scanf("%i", &num0);

        printf("Digite outro número inteiro:\n");
        scanf("%i", &num1);
        
        //Define o tamanho dos números e organiza
        if (num0 > num1) 
        {
            num0 = num1+num0;
            num1 = num0-num1;
            num0 = num0-num1;
        }
        //Verifica se há módulo
        if (num1 % num0 == 0)
        {
            printf("O número %i é múltiplo de %i.\n", num1, num0);
        }
        else
        {
            printf("Os números não são múltiplos um do outro.\n");
        }
    return 0; 
}
