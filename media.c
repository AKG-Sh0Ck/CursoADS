#include <stdio.h>

int main(void)
{
    float num;
    float num2;
    float media;
    printf("Digite o primeiro número: \n");
    scanf("%f", &num);
    printf("Digite o segundo número: \n");
    scanf("%f", &num2);
    media = (num + num2)/2;
    printf("Média:%.2f\n", media);
}
