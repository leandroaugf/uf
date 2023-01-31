#include <stdio.h>

void temperaturas(float media, float dep, float *temp, int n, int *acima, int *abaixo);
void temperaturas(float media, float dep, float *temp, int n, int *acima, int *abaixo) {
    int i;
    for(i = 0; i < 30; i++) {
        dep += *temp[i];
    }
    media = dep / 30;

    for(i = 0; i < 30; i++) {
        if(*temp[i] > media) {
            *acima++;
        }
        else if(*temp[i] < media) {
            *abaixo++;
        }
    }
}

int main() {
    float temp[30];
    float media = 0, dep = 0;
    int i, acima = 0, abaixo = 0, n = 30;

    printf("Entre com as temperaturas: ");
    for(i = 0; i < 30; i++) {
        scanf("%f", &temp[i]);
    }
    temperaturas(media, dep, &temp, &acima, &abaixo);

    printf("Dias em que a temperatura esteve:\n\nAbaixo da média: %d\nAcima da média: %d", abaixo, acima);

    return 0;
}