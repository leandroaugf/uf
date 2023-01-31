//CELSIUS P/ FAHRENHEIT E KELVIN EM FUNÇÃO ÚNICA.

#include <stdio.h>

void converteCelsius(float celsius, float *fahrenheit, float *kelvin);
void converteCelsius(float celsius, float *fahrenheit, float *kelvin) {
    
    *fahrenheit = ((1.8) * celsius) + 32;
    *kelvin = celsius + 273.15;
}

int main() {
    float celsius, f = 0;
    float k = 0;
    printf("Digite o valor em Celsius: ");
    scanf("%f", &celsius);

    converteCelsius(celsius, &f, &k);
    printf("\nCelsius: C = %.0f", celsius);
    printf("\n\nFahrenheit: F = %.1f", f);
    printf("\nKelvin: K = %.2f", k);

    return 0;    
}
