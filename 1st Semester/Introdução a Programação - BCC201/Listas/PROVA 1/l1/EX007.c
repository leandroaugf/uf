/* Crie um programa que leia a idade de uma pessoa e informe a sua classe eleitoral, de acordo com a
tabela abaixo:
Classe Idade
N˜ao-eleitor Abaixo de 16 anos
Eleitor facultativo Entre 16 e 18 anos e maior que 65 anos
Eleitor obrigat´orio Entre 18 e 65 anos */ 
#include <stdio.h>
int main() {
    int idade;
    printf("Digite sua idade para saber sua classe eleitoral: ");
    scanf("%d", &idade);
    if(idade < 16) {
        printf("Você está classificado como \"Não Eleitor\".");
    }
    else if(idade > 65 || idade == 16 || idade == 17 || idade == 18) {
        printf("Você está classificado como \"Eleitor Facultativo\".");
    }
    else if(65 > idade || idade> 18) {
        printf("Você está classificado como \"Eleitor Obrigatório\".");
    }
    return 0;
}