// NÚMERO PRIMO OU NÃO

#include <stdio.h>

int primo(int);
int primo(int n) {
    int num;
    // 0 = divisível | 1 = primo
    if(n % 2 == 0) {
        num = 0;
    }

    if(n % 2 == 1) {
        num = 1;
    }
    return num;
}

int main() {
    int n, rec;

    printf("Digite um número: ");
    scanf("%d", &n);

    rec = primo(n);
    if(rec == 0) {
        printf("%d não é um número primo.", n);
    }
    if(rec == 1) {
        printf("%d é um número primo.", n);
    }

    return 0;
}