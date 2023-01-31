/* Questão 01
Crie um programa que leia 5 números inteiros e determine qual deles é o menor. Imprima o resultado
na tela. */
#include <stdio.h>
int main() {
    int i, n[5], menor = 0;
    printf("Digite cinco números para saber qual deles é o menor: ");
    scanf("%d", &n[0]);
    menor = n[0];
    for(i = 1; i < 5; i++) {
        scanf("%d", &n[i]);
        if(n[i] < n[i - 1]) {
            menor = n[i];
        }
        
    }
    printf("O menor número informado é %d", menor);
    return 0;
}