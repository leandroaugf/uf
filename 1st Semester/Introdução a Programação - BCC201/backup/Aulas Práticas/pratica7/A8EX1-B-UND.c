// MÉDIA DE 30 TEMPERATURAS

#include <stdio.h>

void temp(float deposito, float *media){

    *media = deposito / 30;
}
int main (){ 

    // DECLARANDO VETORES E VARIÁVEIS:
    float temperaturas [30];
    int acima, abaixo, i;
    float media, deposito;
    acima = 0;
    abaixo = 0;
    
    media = 0; // VALORES DA TEMP. (FLOAT)
    acima = 0; // CONTADOR (1 A 1)
    abaixo = 0; // CONTADOR (1 A 1)
    i = 0; // ROUND

//ENTRADA DE VALORES:
    printf("Entre com as temperaturas: "); scanf("%f", &temperaturas[i]);
//INICIALIZAÇÃO DA FUNÇÃO:

    temp(deposito, &media);

    for(temperaturas[i]; abaixo + acima < 30; i++){
        deposito =+ temperaturas[i];
        if(temperaturas[i] < media){
            abaixo++;
        }
        if(temperaturas[i] > media){
            acima++;
        }
    }
    
    printf("\nAcima: %d", acima); printf("\nAbaixo: %d", abaixo);
    return 0;
}
