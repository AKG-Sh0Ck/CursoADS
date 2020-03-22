#include <stdio.h>

int hora0, hora1;

int main(void)
{
    printf("Digite a hora de início da partida:\n");
    scanf("%i", &hora0);
    printf("Digite a hora de término da partida:\n");
    scanf("%i", &hora1);

    if (hora0 <= hora1)
    {
        hora0 = (hora1 - hora0);
    }
    else
    {
        hora0 = ((24 - hora0) + (hora1));
    }
 
    printf("A partida levou %i hora(s).\n", hora0);
    return 0;
}
