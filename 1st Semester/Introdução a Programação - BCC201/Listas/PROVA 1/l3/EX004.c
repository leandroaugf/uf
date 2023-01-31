/* Questão 04
Faça um algoritmo que, dados dois números e um caractere (+, –, *, /), indeterminadamente, e calcule
e imprima:
1. A soma desses números, caso seja digitado o caractere +
2. A subtração desses números, caso seja digitado o caractere –
3. A multiplicação desses números, caso seja digitado o caractere *
4. A divisão desses números, caso seja digitado o caractere /
As operações devem finalizar quando a operação digitada for diferente de uma das anteriores.
Obs.: Use uma função para cada operação */

#include <stdio.h>
void soma(int, int);
void sub(int, int);
void mult(int, int);
void divi(int, int);

int main() {
    int n1, n2;
    char op;
    printf("Digite o número 1: ");
    scanf("%d", &n1);
    printf("Digite o número 2: ");
    scanf("%d", &n2);
    printf("Digite a operação desejada(+, -, *, /): ");
    scanf("%c", &op);
    
    if(op == '+') {
        soma(n1, n2);
    }
    else if(op == '-') {
        sub(n1, n2);
    }
    else if(op == '*') {
        mult(n1, n2);
    }
    else if(op == '/') {
        divi(n1, n2);
    }
    return 0;
}
void soma(int num1, int num2) {
    float n1 = num1;
    float result = n1 + num2;
    printf("%d + %d = %.2f", num1, num2, result);
}

void sub(int n1, int n2) {
    float num1 = n1;
    float result = num1 - n2;
    printf("%d - %d = %.2f", n1, n2, result);
}
void mult(int num1, int num2) {
    float n1 = num1;
    float result = n1 * num2;
    printf("%d * %d = %.2f", num1, num2, result);
}
void divi(int n1, int n2) {
    float num1 = n1;
    float result = n1 / n2;
    printf("%d / %d = %.2f", n1, n2, result);
}