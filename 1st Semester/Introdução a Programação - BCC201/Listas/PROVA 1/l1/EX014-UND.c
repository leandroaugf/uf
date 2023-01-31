/*                                       Questão 14
Crie um jogo de dados simplificado. Considere dois dados cúbicos (6 lados). Inicialmente, leia a aposta
do usuário, ou seja, o valor que ele acha que sairá na soma dos dados. Depois, simule o lançamento
dos dados, faça a soma dos valores e verifique se o usuário acertou a aposta.
Dica: use a função rand() da biblioteca <stdlib.h>. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int aposta, d1, d2, soma;
    printf("Serão lançados dois dados cúbicos. Aposte no valor(2 a 12) no qual a soma deles resultará.");
    printf("\nDigite a sua aposta: ");
    scanf("%d", &aposta);

    d1 = rand() % 7;
    d2 = rand() % 7;

    soma = d1 + d2;
    if(soma == aposta) {
        printf("Parabéns! Você ganhou a aposta!!!\nOs dados caíram nos números %d e %d.", d1, d2);
    }
    else {
        printf("Você errou! Os dados caíram nos números %d e %d.", d1, d2);
    }
    return 0;
}