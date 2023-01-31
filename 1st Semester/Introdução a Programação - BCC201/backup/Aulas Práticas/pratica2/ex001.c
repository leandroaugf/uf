/*

Elabore um programa em C que lê o valor das variáveis a, b, c, d do tipo int e, em seguida, calcula o resultado da expressão:

x=a³(b+c / d)

A saída a ser exibida na tela seguindo os exemplos de execução abaixo (o texto destacado em azul indica o que foi digitado pelo usuário).

Entre com os valores de a, b, c, d: 10 10 10 10

x = 2000

Entre com os valores de a, b, c, d: 2 10 5 3

x = 40

*/

#include <stdio.h>

int main() {

    int a, b, c, d, x;

    printf("Entre com os valores de a, b, c, d: "); scanf("%d %d %d %d", &a, &b, &c, &d);
    x = (a * a * a * ((b + c) / d));

    printf("x = %d", x);
    return 0;
}