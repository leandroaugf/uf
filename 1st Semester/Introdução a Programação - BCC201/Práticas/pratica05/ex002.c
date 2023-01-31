#include <stdio.h>
void converterDistancias(float metros, float *jardas, float *pes, float *polegadas);
int main() {
    float metros, j, pes, pol;
    printf("Digite o valor em metros: ");
    scanf("%f", &metros);

    converterDistancias(metros, &j, &pes, &pol);

    printf("\nJardas: %.3f", j);
    printf("\nPés: %.3f", pes);
    printf("\nPolegadas: %.3f", pol);

    return 0;
}
void converterDistancias(float metros, float *jardas, float *pes, float *polegadas) {
    *jardas = 1.094 * metros;
    *pes = 3.281 * metros;
    *polegadas = 39.3701 * metros;
}