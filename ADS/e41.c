#include <stdio.h>

int main(void){
int num;
printf("Digite um número inteiro...\n");
scanf("%i", &num);
if (num >=0){
    printf("%i é um número positivo!\n", num);
}
else {
    printf("%i é um número negativo!\n", num);
}
return 0;
}
