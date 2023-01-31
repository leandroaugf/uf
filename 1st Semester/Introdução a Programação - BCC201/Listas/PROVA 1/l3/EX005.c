#include <stdio.h>
#define PI 3.14
float comp(float);
float area(float);
float volume(float);
int main() {
    float r;
    printf("Digite o valor de r: ");
    scanf("%f", &r);
    printf("Comprimento(C) = %.2f", comp(r));
    printf("\nÁrea(A) = %.2f", area(r));
    printf("\nVolume(V) = %.2f", volume(r));
    return 0;
}

float comp(float raio) {
    float comprimento = 3.14 * 2 * raio;
    return comprimento;
}
float area(float raio) {
    float area = 3.14 * (raio * raio);
    return area;
}
float volume(float raio) {
    float quatro = 4/3.0;
    float vol = (quatro * PI * (raio * raio * raio));
    return vol;
}