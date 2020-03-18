//Nesse código, considerei a data mais recente como a maior.
//Terceira solução, utilizando comparação de valores, imperfeita mas aparentemente funcional
#include <stdio.h>

int main(void)
{
    int D1, M1, A1, D2, M2, A2, DATA1, DATA2;

    printf("Digite uma data (DD/MM/AAAA)...\n");
    scanf("%i%*C%i%*C%i", &D1, &M1, &A1); //Busca os três conjuntos de números ignorando os caracteres não-numéricos

//Verifica validade estrutural
    if (D1 > 31 || D1 < 1 || M1 > 12 || M1 < 1 || A1 == 0)
    {
        printf("Data inválida!\n");
        return 0;
    }
    printf("Digite outra data (DD/MM/AAAA)...\n");
    scanf("%i%*C%i%*C%i", &D2, &M2, &A2); //Busca os três conjuntos de números ignorando os caracteres não-numéricos

//Verifica validade estrutural     
    if (D2 > 31 || D2 < 1 || M2 > 12 || M2 < 1 || A1 == 0)
    {
        printf("Data inválida!\n");
        return 0;
    }

//Executa as multiplicações, somas e atribuições
    DATA1 = ((A1 * 1000) + (M1 * 100) + (D1));
    DATA2 = ((A2 * 1000) + (M2 * 100) + (D2));
    printf("\nDATA1: %i\nDATA2: %i\n\n", DATA1, DATA2);

//Verifica qual data é maior
    if (DATA1 > DATA2)
    {
        printf("%i/%i/%i é a data maior.\n", D1, M1, A1);
    }
    else if (DATA1 == DATA2)
    {
        printf("As datas são iguais!\n");
    }
    else
    {
        printf("%i/%i/%i é a data maior.\n", D2, M2, A2);
    }
}
