/* Questão 03
Crie um programa que leia dois números, imprima o quadrado do menor e a raiz quadrada do maior.
O programa deve também detectar se os números são iguais, e neste caso, as outras operações não
devem ser realizadas. */

#include <stdio.h>
#include <math.h>
int main() {
    float n1, n2, menor, maior, menor2, maior2;
    printf("Digite dois números: "); scanf("%f %f", &n1, &n2);
    if(n1 > n2) {
        menor = n2;
        maior = n1;
    }
    else if(n2 > n1) {
        menor = n1;
        maior = n2;
    }
    else if(n1 == n2) {
        printf("As operações não serão realizadas, uma vez que os números são iguais.");
    }
    
    printf("\n%.0f² = %.2f", menor, menor * menor);
    printf("\n%.2f = %.2f", maior, sqrt(maior));
    return 0;
}