/*                                  Questão 13
Crie uma função que recebe como parâmetro o ano (representado por um número inteiro) e retorne 1
se o ano for bissexto e 0 caso contrário. Um ano é bissexto se for divisível por 4, mas não por 100.
Um ano também é bissexto se for divisível por 400.   */

#include <stdio.h>
int confere(int);
int main() {
    int ano;
    printf("Entre com o ano: \n\n");
    scanf("%d", &ano);
    if(confere(ano) == 1) {
        printf("\nO ano %d é bissexto", ano);
    }
    else if(confere(ano) == 0) {
        printf("\nO ano %d não é bissexto", ano);
    }
    else {
        printf("ERRO");
    }
    return 0;
}


int confere(int year) {
    if(year % 400 == 0) {
        return 1;
    }

    else if(year % 4 == 0) {
        if(year % 100 == 0) {
            return 0;
        }
        else if(year % 100 != 0) {
            return 1;
        }
    }

    else {
        return 0;
    }
}