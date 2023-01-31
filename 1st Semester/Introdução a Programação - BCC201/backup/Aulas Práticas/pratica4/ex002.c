// CELSIUS P FAHRENHEIT EM DUAS FUNÇÕES

#include <stdio.h>

// FAHRENHEIT
float ctof(float);
float ctof(float c) {
    float tempF;
    tempF = (1.8 * c) + 32;
    return tempF;
}

// KELVIN
float ctok(float);
float ctok(float c) {
    float tempK;
    tempK = c + 273.15;
    return tempK;
}

int main(){
    float celsius, tempK, tempF;
    printf("Digite o valor em Celsius: "); 
    scanf("%f", &celsius);

    printf("\nCelsius: C = %.0f", celsius);
    
    tempK = ctok(celsius);
    printf("\nKelvin: K = %.2f", tempK);

    tempF = ctof(celsius);
    printf("\nFahrenheit: F = %.2f", tempF);
    
    return 0;
}