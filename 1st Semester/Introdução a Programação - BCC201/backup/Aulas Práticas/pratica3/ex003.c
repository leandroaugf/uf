// CALCULA IMC

#include <stdio.h>
int main() {
    float imc, peso, altura, altura2;

    printf("Insira o seu peso: "); scanf("%f", &peso);
    printf("\nInsira a sua altura: "); scanf("%f", &altura);

    imc = peso / (altura * altura);

    if(18.5 > imc) {
        printf("\nVocê está abaixo do peso.");
    }
    else if(18.5 <= imc < 25) {
        printf("\nVocê está na faixa de peso considerada normal.");
    }
    else if(25 <= imc < 30) {
        printf("\nVocê está acima do peso.");
    }
    else if(30 < imc) {
        printf("\nVocê está na faixa de peso da obesidade.");
    }

    return 0;
}