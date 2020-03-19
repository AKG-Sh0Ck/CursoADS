#include <stdio.h>

float SALARIO, HORAS, EXTRAS;
int main(void)
{
    printf("Digite seu salário mensal:\n");
    scanf("%f", &SALARIO);
    printf("Agora, digite seu total de horas trabalhadas:\n");
    scanf("%f", &HORAS);
    
    if (HORAS <= 160)
    {
        SALARIO = (SALARIO / 160) * HORAS;
    }
    else
    {
        EXTRAS = (HORAS - 160);
        EXTRAS = (EXTRAS * 1.5) * (SALARIO / 160);
        SALARIO = SALARIO + EXTRAS;
    }
    printf("Total de Extras: R$%.2f\n", EXTRAS);
    printf("Salário a receber: R$%.2f\n", SALARIO);
    return 0;
}
