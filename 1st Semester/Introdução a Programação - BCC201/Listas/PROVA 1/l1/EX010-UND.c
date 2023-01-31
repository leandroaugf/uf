/* Questão 10
Implemente seis funções em C para, dados dois números reais, calcular:
a) A soma dos números;
b) O produto do primeiro número pelo quadrado do segundo;
c) O quadrado do primeiro número;
d) A raiz quadrada da soma dos quadrados;
e) O seno da diferença do primeiro número pelo segundo;
f) O módulo do primeiro número.
*/

#include <stdio.h>
#include <math.h>

int main() {
    int n1, n2, opcao, result, opcoesvalidas[6] = {1, 2, 3, 4, 5, 6};

    printf("Informe dois números e digite uma opção para realizar a operação correspondente.\nNúmero 1: ");
    scanf("%d", &n1); 
    printf("Número 2: "); 
    scanf("%d", &n2);

    printf("\nEscolha uma opção abaixo:\n[1] Soma.\n[2] Produto do primeiro pelo quadrado do segundo.\n[3] Número 1 ao quadrado.\n[4] Raiz quadrada da soma dos quadrados."
    "\n[5] Seno da diferença do primeiro pelo segundo número.\n[6] Módulo do primeiro número.");
    scanf("%d", &opcao);
    printf("Digite uma opção: ");
    while(opcao != opcoesvalidas) {
        printf("A opção digitada não é válida. Digite outra opção: ");
        scanf("%d", &opcao);
    
    }
    if(opcao == 1) {
        printf("%d + %d = %d", n1, n2, n1 + n2);
        return 0;
    }
    else if(opcao == 2) {
        printf("%d + %d² = %d", n1, n2, n1 * pow(n2, 2));
        return 0;
    }
    else if(opcao == 3) {
        printf("Raiz de %d = %d", n1, sqrt(n1));
        return 0;
    }
    else if(opcao == 4) {
        printf("%d² + %d² = %d", n1, n2, sqrt((pow(n1, 2) + pow(n2, 2))));
        return 0;
    }
    else if(opcao == 5) {
        printf("SEN de %d - %d = %.2f", n1, n2, sin(n1 - n2));
        return 0;
    }
    else if(opcao == 6) {
        printf("Módulo de %d = %d", n1, abs(n1));
        return 0;
    }
    return 0;
}