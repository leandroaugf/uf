#include <stdio.h>
int main() {
    int n1, n2, n3, maior, medio, menor;
    printf("Entre com os números:\n\n");
    scanf("%d %d %d", &n1, &n2, &n3);
    if(n1 > n2 && n1 > n3) {
        maior = n1;
        if(n2 > n3) {
            medio = n2;
            menor = n3;
        }
        else{
            medio = n3; 
            menor = n2;
        }
    }
    else if(n2 > n1 && n2 > n3) {
        maior = n2;
        if(n1 > n3) {
            medio = n1;
            menor = n3;
        }
        else{
            medio = n3;
            menor = n1;
        }
    }
    else{
        maior = n3;
        if(n1 > n2) {
            medio = n1;
            menor = n2;
        }
        else{
            medio = n2;
            menor = n1;
        }
    }
    printf("Menor: %d\nIntermediário: %d\nMaior: %d", menor, medio, maior);
    return 0;
    
    }