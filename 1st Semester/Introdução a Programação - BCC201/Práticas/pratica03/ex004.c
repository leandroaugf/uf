#include <stdio.h> 
int main() {
    float graus, radianos, celsius, fahrenheit, kelvin;
    int opcao, opcaoc1, opcao2;
    printf("### CONVERSOR DE UNIDADES ###\n\n1) Angulo\n2) Temperatura\n\nDigite uma opçao: ");
    scanf("%d", &opcao);
    printf("\nQual a unidade de origem?");

    switch(opcao) {
        case 1: // ÂNGULO
            printf("\n1) Graus\n2) Radianos\n\nSelecione uma opçao: ");
            scanf("%d", &opcaoc1);
            switch(opcaoc1) {
                case 1: 
                    printf("\nDigite o valor em Graus: ");
                    scanf("%f", &graus);
                    printf("Valor em Radianos: %.2f", (graus / 57.2958));
                    return 0;
                case 2: 
                    printf("Digite o valor em Radianos: ");
                    scanf("%f", &radianos);
                    printf("Valor em Graus: %.2f", (radianos * 57.2958));
                    return 0;
                default:
                    printf("Opção inválida.\nReinicie o programa.");
            }
            
        case 2: // TEMPERATURA
            printf("\n1) Celsius\n2) Fahrenheit\n3) Kelvin\n\nDigite uma opção: ");
            scanf("%d", &opcao2);
            switch(opcao2) {
                case 1: // base celsius
                    printf("Digite o valor em Celsius: ");
                    scanf("%f", &celsius);
                    printf("Valor em Fahrenheit: %.2f", (celsius * 1.8) + 32);
                    printf("\nValor em Kelvin: %.2f", celsius + 273.15);
                    return 0;
                case 2: // base fahrenheit
                    printf("Digite o valor em Fahrenheit: ");
                    scanf("%f", &fahrenheit);
                    printf("Valor em Celsius: %.2f", (fahrenheit - 32) / 1.8);
                    printf("\nValor em Kelvin: %.2f", (fahrenheit - 32) * (5/9.0) + 273.15);
                    return 0;
                case 3: // base kelvin
                    printf("Digite o valor em Kelvin: ");
                    scanf("%f", &kelvin);
                    printf("Valor em Celsius: %.2f", kelvin - 273.15);
                    printf("\nValor em Fahrenheit: %.2f", (kelvin - 273.15) * 9/5.0 + 32);
                    return 0;
                default: // caso inválido
                    printf("\n\nA opção digitada é inválida.\nReinicie o programa.");
            }
    }
    return 0;
}