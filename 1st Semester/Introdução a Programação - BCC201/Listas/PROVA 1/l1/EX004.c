/* Questão 04
Um comerciante comprou um produto e quer vendê-lo com um lucro de 45% se o seu valor for menor
que R$ 20,00; caso contrário, o lucro será de 30%.
Crie um programa para ler o valor de um único produto e imprimir o valor de venda, já com o lucro
embutido. */

#include <stdio.h>
int main() {
    float prod, lucro;
    printf("Digite o valor do produto: "); scanf("%f", &prod);

    if(prod < 20) {
        lucro = 145;
    }
    else if(prod >= 20) {
        lucro = 130;
    }
    printf("O valor de venda do produto eh R$%.2f.", (prod/100) * lucro);
    return 0;
}