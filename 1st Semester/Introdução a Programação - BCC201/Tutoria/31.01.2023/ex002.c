#include <stdio.h>

int main() {


    int i, j, k, n, v[10000], v2[10000], v3[20000];
    
    scanf("%d", &n);

    if(n > 10000){
        printf("O valor de n deve ser menor que 10000.\nDigite um valor menor para n: ");
        scanf("%d", &n);
    }

    for(i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }       
    
    for(i = 0; i < n; i++) {
        scanf("%d", &v2[i]);
    }
    
    j = n;
    j -= 1;
    k = 0;

    for(i = 0; i < n; i++) {
        
        v3[k] = v[i];
        v3[k + 1] = v2[j];
        
        j--;
        k += 2;

    }
    
    printf("\n");
    
    for(i = 0; i < n * 2; i++) {
        printf("%d ", v3[i]);
    }

    return 0;

}
