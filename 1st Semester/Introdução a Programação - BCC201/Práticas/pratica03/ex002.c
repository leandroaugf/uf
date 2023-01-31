// SEPARAR BEM OS ELEMENTOS NA HORA DOS CÁLCULOS. QUANTO MAIS DISTANTE, MELHOR;

#include <stdio.h>
#include <math.h>
float calculaRaizes(float, float, float);
int main() {
    float a, b, c, result, x1 = 0, x2 = 0, delta, newb;
    printf("Digite os valores de a, b , c:\n\n");
    scanf("%f %f %f", &a, &b, &c);
    result = calculaRaizes(a, b, c);
    if(result == 0) {
        printf("\nNão foi possível calcular as raízes!");
    }
    else if(result == 1) {
        delta = (b * b) - 4 * a * c;
        x1 = ( (-b) + (sqrt(delta)) ) / (2*a);
        x2 = ( (-b) - (sqrt(delta)) ) / (2*a);
        printf("\nx1 = %.2f", x1);
        printf("\n\nx2 = %.2f", x2);
        return 0;
    }
    return 0;
}

float calculaRaizes(float a, float b, float c) {
    float delta;
    delta = ((b * b) - 4 * a * c);
    if(delta >= 0) {
        return 1;
    }
    else if(delta < 0) {
        return 0;
    }
}