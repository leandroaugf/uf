/* Questão 02
Crie um programa que leia 3 números reais e os imprima em ordem crescente. Suponha que números
iguais não serão digitados. */
#include <stdio.h>
int main() {
    float n1, n2, n3, maior, medio, menor;
    printf("Digite três números e tenha-os impressos em ordem crescente: ");
    scanf("%f %f %f", &n1, &n2, &n3);
    if(n1 > n2 && n1 > n3) {
        maior = n1;
        if(n2 > n3) {
            medio = n2;
            menor = n3;
        }
        else {
            medio = n3;
            menor = n2;
        }
    }
    else if(n2 > n1 && n2 > n3) {
        maior = n2;
        if(n1 > n3){
            medio = n1;
            menor = n3;
        }
        else {
            medio = n3;
            menor = n1;
        }
    }
    else if(n3 > n1 && n3 > n2) {
        maior = n3;
        if(n1 > n2) {
            medio = n1;
            menor = n2;
        }
        else {
            medio = n2;
            menor = n1;
        }
    }
    printf("A ordem crescente dos números digitados é %.0f - %.0f - %.0f", menor, medio, maior);
    return 0;
}