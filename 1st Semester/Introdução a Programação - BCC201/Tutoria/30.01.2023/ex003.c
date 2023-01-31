#include <stdio.h>
int main() {

    int i, n, maior = 0;
    int cont = 1;
    
    scanf("%d", &n);

    int vet[1000];

    for(i = 0; i < n; i++) {
        scanf("%d", &vet[i]);
    }

    for(i = 1; i < n; i++) {
        
        if(vet[i] == vet[i - 1]) {
            
            cont++;
            
            if(cont > maior) {
                maior = cont;
            }
            

        }
        
        else if(vet[i] != vet[i - 1]) {
            
            cont = 1;
            
        }
        
    }
    printf("\n%d", maior);
    return 0;

}