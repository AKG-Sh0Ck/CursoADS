//Nesse código, considerei a data mais recente como a maior.
#include <stdio.h>

int main(void)
{
    int D1, M1, A1;
    int D2, M2, A2;

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
        if (D2 > 31 || D2 < 1 || M2 > 12 || M2 < 1 ||A1 == 0)
    {
        printf("Data inválida!\n");
        return 0;
    }
//Verifica se as datas são iguais
    if (A1 == A2 && M1 == M2 && D1 == D2)
    {
        printf("As datas são iguais!\n");
    }

//Verifica qual ano é maior
    if (A1 > A2)
    {
        printf("%i/%i/%i é a data maior.\n", D1, M1, A1);    
    }
    else 
    {
        printf("%i/%i/%i é a data maior.\n", D2, M2, A2);
    }    

//Caso os anos sejam iguais, compara os meses
    if (A1 == A2)
    {
        if (M1 > M2)
        {
            printf("%i/%i/%i é a data maior.\n", D1, M1, A1);    
        }
        else 
        {
            printf("%i/%i/%i é a data maior.\n", D2, M2, A2);
        }       
    }    

//Caso os meses também sejam iguais, compara os dias
    if (M1 == M2)
    {
        if (D1 > D2)
        {
            printf("%i/%i/%i é a data maior.\n", D1, M1, A1);    
        }
        else 
        {
            printf("%i/%i/%i é a data maior.\n", D2, M2, A2);
        }       
    }
}
