#include <stdio.h>

int main() {
    FILE *arqbin;
    char ch[15] = "Teste";
    int inteiro[15] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};

    arqbin = fopen("arquivobin.bin", "wb");
    if(arqbin != NULL) {
        printf("Arquivo criado com sucesso!\n");
        fwrite(inteiro, sizeof(int), 15, arqbin); // Como minha variável "inteiro" é de tipo int, dou um sizeof(int);
                                                  //                    Se fosse de tipo char, daria um sizeof(char);

        fclose(arqbin);
    }
    else {
        printf("Não foi possível criar o arquivo.");
        system("pause");
        exit(1);
    }
    return 0;
}