/* Questão 12
Crie uma função em C que recebe um número real como parâmetro (entre outros) e retorna sua parte
inteira em uma variável e sua parte decimal em outra. Utilize passagem por referência. */

#include <stdio.h>
#include <math.h>
float separa(float, int);
int main() {
    int inteiro;
    float num;
    printf("Digite um número qualquer: ");
    scanf("%f", &num);
    inteiro = num;
    printf("\nParte inteira do número digitado: %d", inteiro);
    //num = separa(num, inteiro);
    printf("\nParte fracionária do número digitado: %.2f", separa(num, inteiro));
    return 0;
}

float separa(float numero, int aux) {
    float dec;
    dec = numero - aux;
    return dec;
}