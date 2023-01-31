/* Questão 17
Crie um programa com uma variável inteira chamada num e dois ponteiros para int, chamados ptr e
ptr2. Atribua um valor a num e faça com que ptr aponte para num. Atribua o endereço apontado por
ptr2 a ptr, de forma que os dois apontem para o mesmo endereço. Altere o conteúdo apontado por
cada um dos apontadores e analise o que acontece com a variável num. */

#include <stdio.h>
void funct(int *);
void funct(int *ptr) {
    int *ptr2;
    ptr = ptr2; 
}

int main() {
    int num;
    int *ptr, *ptr2;
    printf("Digite um valor qualquer: ");
    scanf("%d", &num);
    funct(&num);
    printf("%d", num);
    return 0;
}