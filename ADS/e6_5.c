#include <stdio.h>

int produto;

int main(void)

{  
    printf("Digite o código do produto (1 a 15):\n");
    scanf("%i", &produto);
    
    printf("A categoria do produto é: ");

    switch (produto)
    {
        case 1:
            printf("Alimento não perecível.\n");
            break;

        case 2 ... 4:
            printf("Alimento perecível.\n");
            break;

        case 5 ... 6:
            printf("Vestuário.\n");
            break;

        case 7:
            printf("Higiene pessoal.\n");
            break;

        case 8 ... 15:
            printf("Limpeza e utensílios domésticos.\n");
            break;

        default:
            printf("Inválida!\n");
            break;
    }

    return 0;
}
