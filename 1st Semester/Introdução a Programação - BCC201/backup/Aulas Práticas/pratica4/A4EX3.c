// HORA DE INÍCIO E TÉRMINO = MINUTOS JOGADOS

#include <stdio.h>

float calculaMinutos(float, float, float, float);         // he = horas de entrada // me = minutos de entrada;
float calculaMinutos(float he1, float me1, float hs1, float ms1) {  // mte = minutos totais de entrada // mts = minutos totais de saída;
    float duracao, mte, mts;

    mte = (he1 * 60) + me1;
    mts = (hs1 * 60) + ms1;
    if(mte > mts) {
        duracao = (mts + (24 * 60)) - mte;   
    }
    else {
        duracao = mts - mte;
    }
    return duracao;

}

int main() {
    float he, hs, me, ms, duraccion;

    printf("Digite as horas e os minutos da hora de entrada: "); 
    scanf("%f %f", &he, &me);
    printf("Digite as horas e os minutos da hora de saída: ");
    scanf("%f %f", &hs, &ms);

    duraccion = calculaMinutos(he, me, hs, ms);
    printf("\nA duração total do jogo foi de %.0f minutos.", duraccion);
    return 0;

}