//Nesse código, considerei a data mais recente como a maior.
//Segunda solução, utilizando condições aninhadas, totalmente funcional
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
    if (D2 > 31 || D2 < 1 || M2 > 12 || M2 < 1 || A1 == 0)
    {
        printf("Data inválida!\n");
        return 0;
    }

//Verifica qual ano é maior
    if (A1 > A2)
    {
        printf("%i/%i/%i é a data maior.\n", D1, M1, A1);
        return 0;    
    }
    else 
        if (A2 > A1)
        {
            printf("%i/%i/%i é a data maior.\n", D2, M2, A2);
            return 0;    
        } 
        else   
            if (M1 > M2)
            {
                printf("%i/%i/%i é a data maior.\n", D1, M1, A1);
                return 0;    
            } 
            else
                if (M2 > M1)
                {
                    printf("%i/%i/%i é a data maior.\n", D2, M2, A2);
                    return 0;    
                } 
                else
                    if (D1 > D2)
                    {
                        printf("%i/%i/%i é a data maior.\n", D1, M1, A1);
                        return 0;    
                    }        
                    else
                        if (D2 > D1)
                        {
                            printf("%i/%i/%i é a data maior.\n", D2, M2, A2);
                            return 0;  
                        } 
                        else
                            printf("As datas são iguais!\n");
                            return 0;
}
