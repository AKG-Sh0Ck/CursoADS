#include <stdio.h>

//Calcula o tempo entre início e término de uma partida
//levando em conta o overnight.

int hora0, min0, hora1, min1;

int main(void)
{
    printf("Digite a hora e os minutos de início da partida (XX:XX):\n");
    scanf("%i%*C%i", &hora0, &min0);
    if (hora0 < 0 || min0 < 0 || hora0 > 24 || min0 > 59)   //Verifica a validade dos horários digitados.
    {
        printf("Horário inválido.\n");
        return 0;    
    }
    
    printf("Digite a hora os minutos de término da partida (XX:XX):\n");
    scanf("%i%*C%i", &hora1, &min1);
    if (hora1 < 0 || min1 < 0 || hora1 > 24 || min1 > 59)   //Idem.
    {
        printf("Horário inválido.\n");
        return 0;    
    }
    
    min0 = (hora0 * 60) + min0;     //Converte horas em minutos e soma com os minutos.
    min1 = (hora1 * 60) + min1;     //Idem.
    
    if (min1 > min0)                //Verifica qual valor é maior e subtrai o menor do maior
    {                               //obtendo assim o total de minutos de diferença.
        min1 = min1 - min0;
    }
    
    else if (min0 > min1)           //Caso o segundo valor seja menor, subtrai o primeiro
    {                               //do valor 1440 (minutos em um dia) e soma com
        min0 = 1440 - min0;         //o valor menor.    
        min1 = min0 + min1 ;      
    }
    
    else    //Caso os valores sejam iguais.
    {
        printf("A partida não começou ainda.\n");
        return 0;
    }
    
    hora1 = min1 / 60; //Divide por 60 para obter o total de horas.
    min1 = min1 % 60;  //Busca o módulo do total divido por 60 para obter os minutos.
    
    printf("A partida levou %i:%i.\n", hora1, min1); //Finalmente, apresenta o total.
    return 0;
}
