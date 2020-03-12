//Nesse código, considerei a data mais recente como a maior.
#include <stdio.h>

int main(void)
{
    int DD1, MM1, AAAA1;
    int DD2, MM2, AAAA2;

    printf("Digite uma data (DD/MM/AAAA)...\n");
    scanf("%i%*C%i%*C%i", &DD1, &MM1, &AAAA1);
    
    printf("Digite outra data (DD/MM/AAAA)...\n");
    scanf("%i%*C%i%*C%i", &DD2, &MM2, &AAAA2);
    
    if (AAAA1 == AAAA2 && MM1 == MM2 && DD1 == DD2)
    {
        printf("As datas são iguais!\n");
    }

    if (AAAA1 > AAAA2)
    {
        printf("%i/%i/%i é a data maior.\n", DD2, MM2, AAAA2);    
    }
    else 
    {
        printf("%i/%i/%i é a data maior.\n", DD2, MM2, AAAA2);
    }    

    return 0;
}
