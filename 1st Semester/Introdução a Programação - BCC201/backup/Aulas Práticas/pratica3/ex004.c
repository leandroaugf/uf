// AUMENTO DE SALÁRIOS || 100 = 3% || 101 = 5% || 102 = 7.5% || 201 = 10% || outro = 15%;

#include <stdio.h>
int main() {
    float salario, aum;  
    int cod;

    printf("Digite o salário: "); scanf("%f", &salario);
    printf("Digite o código do seu cargo: "); scanf("%d", &cod);

    if(cod != 1237862){ 
        if(cod == 100) {
            aum = 3;
        }
        else if(cod == 101) {
            aum = 5;
        }
        else if(cod == 102) {
            aum = 7.5;
        }
        else if(cod == 201) {
            aum = 10;
        }
        else{
            aum = 15;
        }
    }

    salario = ((salario / 100) * (100 + aum));
    printf("\nO seu novo salário é de R$%.2f", salario);
    return 0;
}