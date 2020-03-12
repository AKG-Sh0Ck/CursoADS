#include <stdio.h>

int main(void)
{
    double data1;
    double data2;

    printf("Digite uma data (DDMMAAAA)...\n");
    scanf("%lf", &data1);
    printf("Digite outra data (DDMMAAAA)...\n");
    scanf("%lf", &data2);
    
    if (data1 > data2)
    {
        printf("%.0f é a data maior.\n", data1);
    }
    else 
    {
        printf("%.0f é a data maior.\n", data2);
    }
    return 0;
}
