#include <stdio.h>

int main() {
    FILE *arq;
    char palavra[100];

    arq = fopen("arquivo1.txt", "w");

    printf("Digite um valor para ser gravado no arquivo: ");
    scanf("%s", palavra);

    fprintf(arq, "%s", palavra);
    fclose(arq);
    return 0;
}