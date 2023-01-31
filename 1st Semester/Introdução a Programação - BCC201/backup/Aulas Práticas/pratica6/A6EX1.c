// FUNÇÃO RETORNA O FATORIAL DE UM NÚMERO DIGITADO
#include <stdio.h>

long long fat(int);
long long fat(int n) {
    int dep = 1;
    for(n; n > 0; n--) {
        dep *= n;
    }
    return dep;
}

int main() {
    int num, resultado;

    printf("Digite o valor de n: ");
    scanf("%d", &num);

    resultado = fat(num);
    printf("%d! = %d", num, resultado);

    return 0;
}