#include <stdio.h>

int main() {
    int opcao, oporigem;
    float graus, radianos, c, f, k;

    printf("## CONVERSOR DE UNIDADES ##\n\n(1)Ângulo\n(2)Temperatura\n\n");
    printf("Digite uma opção: "); scanf("%d", &opcao);
    switch(opcao) {

        case 1: // ângulo
            printf("Qual a unidade de origem?\n\n1)Graus\n2)Radianos\n\nDigite uma opção: ");
            scanf("%d", &oporigem);
            switch(oporigem) {
                case 1: // graus
                    printf("Digite o valor em graus: "); scanf("%f", &graus);
                    radianos = 0.0174 * graus;
                    printf("Valor em radianos: %.2f", radianos);
                    return 0;

                case 2: // radianos
                    printf("Digite o valor em radianos: "); scanf("%f", &radianos);
                    graus = radianos * 57,2958;
                    printf("Valor aproximado em graus: %.2f", graus);
                    return 0;
            }


        case 2: // temperatura
            printf("\n\nQual a unidade de origem?\n1) Celsius\n2) Fahrenheit\n3) Kelvin\n\nDigite uma opção: ");
            scanf("%d", &oporigem);
            switch(oporigem) {
                case 1: // escolheu Celsius

                    printf("Digite o valor em Celsius: ");
                    scanf("%f", &c);
                    f = ((1.8 * c) + 32);
                    k = c + 273.15;
                    printf("\nValor em Fahrenheit: F = %.2f\nValor em Kelvin: K = %.2f\n", f, k);
                    return 0;
                
                case 2: // escolheu Fahrenheit
                    printf("Digite o valor em Fahrenheit: ");
                    scanf("%f", &f);
                    c = ((f - 32) / 1.8);
                    k = c + 273.15;
                    printf("\nValor em Celsius: C = %.2f\nValor em Kelvin: K = %.2f", c, k);
                    return 0;
                
                case 3: // escolheu Kelvin
                    printf("Digite o valor em Kelvin: "); 
                    scanf("%f", &k);
                    c = k - 273.15;
                    f = ((c * 1.8) + 32);
                    printf("\nValor em Celsius: C = %.2f\nValor em Fahrenheit: F = %.2f", c, f);
                    return 0;
            }

        default:
            printf("A opção digitada é inválida.");
    }

    return 0;
}