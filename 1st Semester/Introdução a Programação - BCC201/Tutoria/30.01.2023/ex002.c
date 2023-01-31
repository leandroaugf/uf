#include <stdio.h>
int main() {
    
    int maior, menor, i, num[50];

    menor = 0;
    maior = 0;
    
    
    for(i = 0; i < 50; i++) {
        scanf("%d", &num[i]);
        if(num[i] > maior) {
            maior = num[i];
        }
        else if(num[i] < menor) {
            menor = num[i];
        }
    }
    
    
    printf("Menor = %d\nMaior = %d", menor, maior);

    return 0;
}