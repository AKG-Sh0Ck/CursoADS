#include <stdio.h>

int pax, dest, iv, total;

int main(void)

{  
    printf("Digite o número de passagens:  ");
    scanf("%i", &pax);

    printf("Destinos disponíveis:\n");
    printf("1 - Região Norte\n");
    printf("2 - Região Nordeste\n");
    printf("3 - Região Centro-Oeste\n");
    printf("4 - Região Sul\n");

    printf("Digite agora o código do destino:  ");
    scanf("%i", &dest);
    if (dest < 1 || dest > 4)
    {
        printf("Destino inválido!\n");
        return 0;
    }

    printf("A viagem é de ida e volta? \n1 - Não\nou\n2 - Sim\n");
    scanf("%i", &iv);

    if (iv < 1 || iv > 2)
    {
        printf("Modalidade de passagem inválida.");
        return 0;
    }
   
    switch (dest)
    {
        case 1:
            if (iv == 1)
            {
                total = pax * 500;
            }
            else
            {
                total = pax * 900;
            }
            break;

        case 2:
            if (iv == 1)
            {
                total = pax * 350;
            }
            else
            {
                total = pax * 650;
            }
            break;
        
        case 3:
            if (iv == 1)
            {
                total = pax * 350;
            }
            else
            {
                total = pax * 600;
            }
            break;
        
        case 4:
            if (iv == 1)
            {
                total = pax * 300;
            }
            else
            {
                total = pax * 550;
            }
            break;
    }

    printf("O valor total das passagens é de R$%i,00\n", total);
    return 0;
    
}
