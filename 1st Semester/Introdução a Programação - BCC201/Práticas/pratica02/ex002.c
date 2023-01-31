#include <stdio.h>
#include <math.h>
int main() {
    float x1, x2, x3, y;
    printf("Entre com os valores de x1, x2 e x3: ");
    scanf("%f %f %f", &x1, &x2, &x3);
    y = (x1 + (x2 * x2) + (x3 * x3));
    y *= y;
    y = y - pow((x1 * x2 * x3), 2);
    printf("y = %.2f", y);
    return 0;
}