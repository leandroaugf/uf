/* Questão 01
Faça um programa que leia um número inteiro positivo n e imprima os n primeiros números pares. A
impressão será feita por uma função, que recebe como parâmetro o valor n.  */
#include <stdio.h>
int imprime(int);
int main() {
    int n;
    printf("Digite um número inteiro: ");
    scanf("%d", &n);
    imprime(n);
    return 0;
}
int imprime(int num) {
    int i, j = 0;
    for(i = 0; i <= num; i++) {
        printf("\n%d", 2 * j);
        j++;
    }
}