#include <stdio.h>
int main() {
    int a, b, c, d, result;
    printf("Entre com os valores de a, b, c, d: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    result = a * a * a *((b + c) / d);
    printf("x = %d", result);
    return 0;
}