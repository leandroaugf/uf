#include <stdio.h>
int main() {
    float salario, sal, dif;
    int cod;
    printf("Entre com o salário: "); scanf("%f", &salario);
    printf("Entre com o código do cargo: "); scanf("%d", &cod);
    
    if(cod == 100) {
        sal = ((salario / 100) * 103);
    }
    else if(cod == 101) {
        sal = ((salario / 100) * 105);
    }
    else if(cod == 102) {
        sal = ((salario / 100) * 107.5);
    }
    else if(cod == 201) {
        sal = ((salario / 100) * 110);
    }
    else {
        sal = ((salario / 100) * 115);
    }

    dif = sal - salario;
    printf("Antigo: R$%.2f\nNovo: R$%.2f\nDiferença: R$%.2f", salario, sal, dif);
}