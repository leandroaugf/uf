/* Questão 05
Crie um programa que leia o peso de uma pessoa no planeta Terra. Além disso, o usuário deve
selecionar um dos planetas da lista abaixo, para que seu peso naquele planeta seja calculado. A
fórmula para cálculo do peso é:
PesoN aT erra
10
× GravidadeRelativa
Calcule o peso e imprima uma mensagem dizendo qual é o planeta selecionado e qual é o peso calculado.
Caso seja escolhido um planeta que não consta da lista, uma mensagem de erro deve ser apresentada.
Use a instrução switch. */

#include <stdio.h>
int main() {
    float peso, pesorelat;
    int planeta;

    printf("Digite seu peso e selecione um planeta para que seu peso no planeta seja calculado.");
    printf("\n\nDigite o seu peso: ");
    scanf("%f", &peso);
    printf("Escolha um dos planetas listados abaixo:\n[1] Mercúrio\n[2] Vênus\n[3] Marte\n[4] Júpiter\n[5] Saturno\n[6] Urano\n[7] Netuno\n\nDigite uma opção: ");
    scanf("%d", &planeta);

    switch(planeta){
        case 1:
            pesorelat = (peso / 10) * 3.7;
            break;
        case 2:
            pesorelat = (peso / 10) * 8.87;
            break;
        case 3:
            pesorelat = (peso / 10) * 3.721;
            break;
        case 4:
            pesorelat = (peso / 10) * 24.79;
            break;
        case 5:
            pesorelat = (peso / 10) * 10.44;
            break;
        case 6:
            pesorelat = (peso / 10) * 8.87;
            break;
        case 7:
            pesorelat = (peso / 10) * 11.15;
            break;
        default:
            printf("O valor digitado para os planetas não é válido.");
            return 0;
    }

    printf("O seu peso no planeta escolhido é de %.2fKG.", pesorelat);

    return 0;
}