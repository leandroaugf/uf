#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int *ponteiro; // Ponteiro para o vetor
    int i, quant_elementos;

    printf("Digite a quantidade de elementos do vetor: ");
    scanf("%d", &quant_elementos);

                            // FOCO
    // Alocando memória p/ o vetor de acordo c/ a quant. de elementos:
    ponteiro = (int *)(malloc(quant_elementos * sizeof(int)));
    
    if(ponteiro == NULL) {
        printf("Não foi possível alocar memória.");
        system("pause");
        exit(1);
    }
    for(i = 0; i < quant_elementos; i++) {
        printf("Digite o número do índice[%d]: ", i + 1);
        scanf("%d", &ponteiro[i]);
    }
    printf("\n");
    for(i = 0; i < quant_elementos; i++) 
        printf("Valor armazenado no elemento de índice[%d] = %d\n", i, ponteiro[i]);

    printf("\n");
    free(ponteiro);

    system("pause");
    return 0;
}