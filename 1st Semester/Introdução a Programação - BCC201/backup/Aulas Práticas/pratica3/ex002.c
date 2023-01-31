// MAIOR NÚMERO, MENOR E INTERMEDIÁRIO

#include <stdio.h>

int main() {
    int n1, n2, n3, maior, menor, medio;
    
    printf("Entre com três números: "); scanf("%d %d %d", &n1, &n2, &n3);

    // N1 MAIOR
    if(n1 > n2 && n1 > n3){
        if(n2 > n3){
            maior = n1;
            medio = n2;
            menor = n3;
        }
        else if(n3 > n2){
            maior = n1;
            medio = n3;
            menor = n2;
        }
    }

    // N2 MAIOR
    if(n2 > n1 && n2 > n3){
        if(n1 > n3){
            maior = n2;
            medio = n1;
            menor = n3;
        }
        else if(n3 > n1){
            maior = n2;
            medio = n3;
            menor = n1;
        }
    }

    // N3 MAIOR
    if(n3 > n1 && n3 > n2){
        if(n1 > n2){
            maior = n3;
            medio = n1;
            menor = n2;
        }
        else if(n2 > n1){
            maior = n3;
            medio = n2;
            menor = n1;
        }
    }

    // EXIBIÇÃO

    printf("\n\nMenor: %d\nIntermediário: %d\nMaior: %d", menor, medio, maior);
    return 0;

}