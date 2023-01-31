/*                                                    Questão 16
Crie e teste uma função/procedimento void ord3(int a, int b, int c) que devolve em ordem crescente os valores contidos em a, b e c.
Por exemplo, se a = 5, b = 4 e c = 3, após a chamada a função ord3 teremos: a = 3, b = 4 e c = 5.
E possível implementar esta função/procedimento com o protótipo apresentado? Caso não seja
possível, aponte as alterações necessárias. */

#include <stdio.h>
void ord3(int *, int *, int *);
// Não é possível passar por referência tantos valores. Esses valores devem ser passados por referência para que a função em questão funcione.
int main() {
    int a, b, c;
    printf("Digite os valores de a, b e c: ");
    scanf("%d %d %d", &a, &b, &c);
    ord3(&a, &b, &c);
    printf("Os novos valores, impressos em ordem crescente, correspondem a:\na = %d\nb = %d\nc = %d", a, b, c);
    
    return 0;
}

void ord3(int *a, int *b, int *c) {
    int maior, medio, menor;
    if(*a > *b && *a > *c) {
        maior = *a;
        if(*b > *c) {
            medio = *b;
            menor = *c;
        }
        else {
            medio = *c;
            menor = *b;
        }
    }
    else if(*b > *a && *b > *c) {
        maior = *b;
        if(*a > *c) {
            medio = *a;
            menor = *c;
        }
        else {
            medio = *c;
            menor = *a;
        }
    }
    else if(*c > *a && *c > *b) {
        maior = *c;
        if(*a > *b) {
            medio = *a;
            menor = *b;
        }
        else {
            medio = *b;
            menor = *a;
        }
    }
    *a = menor;
    *b = medio;
    *c = maior;
}