/*

Crie um programa em C que converte um valor em graus Celsius para graus Fahrenheit e Kelvin. Todas as variáveis devem ser do tipo float. Siga os exemplos de execução para formatar sua saída, utilizando 2 casas de precisão  (o texto destacado em azul indica o que foi digitado pelo usuário).
    
Dica: lembre-se que c graus Celsius equivale a f=9/5c+32 graus Fahrenheit e k=c+273.15 Kelvin.

Entre com o valor em graus Celsius: 32
Celsius: c = 32.00
Fahrenheit: f = 89.60
Kelvin: k = 305.15

*/

#include <stdio.h>

int main() {
    float c, f, k;

    printf("Entre com o valor em graus Celsius: "); scanf("%f", &c);

    f = ((1.8 * c) + 32);
    k = c + 273.15;

    printf("\n\nCelsius: c = %.2f", c);
    printf("\nFahrenheit: f = %.2f", f);
    printf("\nKelvin: k = %.2f", k);

    return 0;
}