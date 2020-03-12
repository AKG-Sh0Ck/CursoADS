#include <stdio.h>

int main(void)
{
    int A = 20;
    int B = 10;
    printf("Valores Originais: A = %i, B = %i.\n", A, B);
    A = B+A;
    B = A-B;
    A = A-B;
    printf("Novos Valores: A = %i, B = %i.\n", A, B);
}
