#include <stdio.h>

int main(void)
{
    int A = 10;
    int B = 20;
    int hold;
    printf("Valores Originais: A = %i, B = %i.\n", A, B);
    hold = A;
    A = B;
    B = hold;
    printf("Novos Valores: A = %i, B = %i.\n", A, B);
}
