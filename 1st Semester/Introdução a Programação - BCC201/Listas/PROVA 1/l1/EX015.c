/*                                      Questão 15
Crie e teste uma função void troca3(int a, int b, int c) que retorna a = b, b = c e c = a, ou
seja, troca o conteúdo de 3 variáveis. E possível? Caso não seja, aponte as alterações necessárias no 
protótipo da função.         */

#include <stdio.h>
void troca3(int *, int *, int *);
int main() {
    int a, b, c;
    printf("Entre com os valores de a, b e c: ");
    scanf("%d %d %d", &a, &b, &c);
    troca3(&a, &b, &c);
    printf("Os valores foram atualizados!\na = %d\nb = %d\nc = %d", a, b, c);
    return 0;
}
void troca3(int *n1, int *n2, int *n3) { // a = b;  b = c;   c = a;
    int aux;
    aux = *n1;
    *n1 = *n2;
    *n2 = *n3;
    *n3 = aux;
}

// AS ALTERAÇÕES NECESSÁRIAS NO PROTÓTIPO DA FUNÇÃO SÃO OS PONTEIROS EM FALTA. EM C, NÃO É POSSÍVEL RETORNAR MAIS DE UM VALOR, OU PASSAR POR REFERÊNCIA
// DIVERSOS VALORES SEM O AUXÍLIO DE PONTEIROS.