#include <stdio.h> 
float calculaMinutos(float, float, float, float);
int main() {
    float horinic, horterm, mininic, minterm;
    int dur;
    printf("Entre com o horário de início: ");
    scanf("%f %f", &horinic, &mininic);
    printf("Entre com o horário de término: ");
    scanf("%f %f", &horterm, &minterm);
    
    if(horinic < 0 && horterm < 0) {
        printf("O valor informado para as horas foi digitado incorretamente.\nReinicie o programa.");
        return 0;
    }
    else if(mininic < 0 && minterm < 0) {
        printf("O valor informado para os minutos foi digitado incorretamente.\nReinicie o programa.");
        return 0;
    }
    else if(horinic > 23 && horterm > 23) {
        printf("O valor informado para as horas foi digitado incorretamente.\nReinicie o programa.");
        return 0;
    }
    else if(mininic > 60 && minterm > 60) {
        printf("O valor informado para os minutos foi digitado incorretamente.\nReinicie o programa.");
        return 0;
    }
    
    while(horinic > 23 || horinic < 0) {
        printf("Horário inválido.\nDigite um novo valor para as horas de entrada: ");
        scanf("%f %f", &horinic, &mininic);
    }
    while(horterm > 23 || horterm < 0) {
        printf("Horário inválido.\nDigite um novo valor para as horas de saída: ");
        scanf("%f %f", &horterm, &minterm);
    }
    while(mininic > 60 || mininic < 0) {
        printf("Horário inválido.\nDigite um novo valor para as horas de entrada: ");
        scanf("%f %f", &horinic, &mininic);
    }
    while(minterm > 60 || minterm < 0) {
        printf("Horário inválido.\nDigite um novo valor para as horas de saída: ");
        scanf("%f %f", &horterm, &minterm);
    }

    dur = calculaMinutos(horinic, mininic, horterm, minterm);
    printf("Duração: %d minutos", dur);
    return 0;
}

float calculaMinutos(float horinic, float mininic, float horterm, float minterm) {
// 23 52  - 00 10 
    float dur, minterm2, horterm2, horinic2, mininic2;
    mininic2 = mininic + (horinic * 60);
    minterm2 = minterm + (horterm * 60);

    if((minterm2) < (mininic2)) { // se o termino passou da meia noite
        minterm2 += 1440;
        dur = minterm2 - mininic2;
    }
    else if(minterm2 > mininic2) {  // se não passou da meia noite
        dur = minterm2 - mininic2;
    }
    return dur;
}