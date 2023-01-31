// PROGRAMA ARMAZENA O FLOAT DE 30 DIAS, CALCULA A MÉDIA E INFORMA OS ACIMA/ABAIXO

#include <stdio.h>

void temperatura(float temp[], int, int);
void temperatura(float temp[], int *acima, int *abaixo) {
    float dep, media;
    int j;

    for(j = 0; j < 30; j++) {
        dep += temp[j];
    }

    media = dep / 30;
    *acima = 0;
    *abaixo = 0;

    for(j = 0; j < 30; j++) {
        if(temp[j] > media) {
            *acima += 1;
        }
        else if(temp[j] < media) {
            *abaixo += 1;
        }
    }
}

int main() {
    float temp[30];
    int ac, ab, i;
    printf("Entre com as temperaturas: ");
    for(i = 0; i < 30; i++) {
        scanf("%d", &temp[i]);
    }

    temperatura(temp[], &ac, &ab);
    printf("\nAcima: %d\Abaixo: %d", ac, ab);
    return 0;
}