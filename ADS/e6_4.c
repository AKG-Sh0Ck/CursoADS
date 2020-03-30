#include <stdio.h>

int mes;

int main(void)

{  
    printf("Escolha um mês (1 a 12):\n");
    scanf("%i", &mes);

    switch (mes)
    {
        case 1:
            mes = mes - mes + 31;
            break;
        case 2:
            mes = mes - mes + 28;   
            break;     
        case 3:
            mes = mes - mes + 31;
            break;
        case 4:
            mes = mes - mes + 30;
            break;
        case 5:
            mes = mes - mes + 31;
            break;
        case 6:
            mes = mes - mes + 30;
            break;
        case 7 ... 8:
            mes = mes - mes + 31;
            break;
        case 9:
            mes = mes - mes + 30;
            break;
        case 10:
            mes = mes - mes + 31;
            break;
        case 11:
            mes = mes - mes + 30;
            break;
        case 12:
            mes = mes - mes + 31;
            break;
        default:
            printf("Mês inválido!\n");
            return 0;
            break;
    }
    
    printf("O mês selecionado tem %i dias.\n", mes);
    return 0;

}

