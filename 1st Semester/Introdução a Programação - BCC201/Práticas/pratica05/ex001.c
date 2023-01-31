#include <stdio.h>
void converterCelsius(float, float *, float *);
int main() {
    float celsius, fahrenheit = 0, kelvin = 0;
    printf("Digite o valor em Celsius: ");
    scanf("%f", &celsius);
    converterCelsius(celsius, &fahrenheit, &kelvin);

    printf("\nFahrenheit: %.2f", fahrenheit);
    printf("\nKelvin: %.2f", kelvin);

}
void converterCelsius(float celsius, float *fahrenheit, float *kelvin) {
    *fahrenheit = ((1.8) * celsius) + 32;
    *kelvin = celsius + 273.15;
}