#include <stdio.h>

int num;
int main(void)
{
    int t;

    for (t = 2; t >= 0; t--)
    {
        printf("Adivinhe um número de 0 a 9:\n");
       
        scanf("%i", &num);
        if (num < 7)
        {
            printf("Um pouco maior...\n");
            printf("Você tem mais %i tentativa(s).\n\n", t);
        }
        else if (num > 7)
        {
            printf("Um pouco menor...\n");
            printf("Você tem mais %i tentativa(s).\n\n", t);
        }
        else if (num == 7)
        {
            printf("Acertou!\n");
            t = 0;
        }
    }
    printf("O jogo terminou!\n");
    return 0; 
}
