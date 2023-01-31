/* Questão 09
Desenvolva uma função que recebe o peso (kg) e a altura (m) de uma pessoa e imprime o seu índice
de Massa Corporal (IMC):
IMC =
peso
altura² */

#include <stdio.h>
#include <math.h>

int main() {
    float peso, altura, imc;
    printf("Digite o seu peso: "); scanf("%f", &peso);
    printf("Digite a sua altura em m: "); scanf("%f", &altura);

    imc = peso * (pow(peso, 2));
    printf("\nO IMC para as medidas informadas é igual a %.2f", imc);
    return 0;
}