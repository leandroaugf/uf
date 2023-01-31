#include <stdio.h>
int main() {
    float peso, altura, imc = 0;
    printf("Entre com o peso: "); scanf("%f", &peso);
    printf("Entre com a altura: "); scanf("%f", &altura);

    imc = peso / (altura * altura);
    
    if(imc < 18.5) {
        printf("\nAbaixo do peso");
    }
    
    else if(18.5 <= imc && imc < 25) {
        printf("\nPeso normal");
    }
    
    else if(25 <= imc && imc < 30) {
        printf("\nAcima do peso");
    }
    
    else if(imc > 30) {
        printf("\nObeso");
    }
    return 0;
}