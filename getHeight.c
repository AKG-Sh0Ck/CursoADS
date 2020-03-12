#include <stdio.h>
#include <cs50.h>

int main(void)
{
    float altura;
    int pesoUser;
    int peso1;
    int peso2;

    printf("Digite sua altura: ");
    scanf("%f",&altura);
    printf("A sua altura é %.2fm\n",altura);
    printf("Digite seu peso: ");
    scanf("%d",&pesoUser);
    printf("Digite o peso de uma pessoa: ");
    scanf("%d",&peso1);
    printf("Digite o peso de outra pessoa: ");
    scanf("%d",&peso2);
    printf("Seu peso é %dkg.\nO peso da primeira pessoa é %dkg.\nO peso da segunda pessoa é %dkg.", pesoUser, peso1, peso2);
    return 0;
}
