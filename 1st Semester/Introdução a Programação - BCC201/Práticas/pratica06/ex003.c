#include <stdio.h>
int main(void){

    int ver = 0;
    int x, y;
    do {
        printf("Digite os valores de x e y: ");
        scanf("%d %d", &x, &y);
        if ( (x > 0)
             && (y > 0)
             && (x % 2 == 0)
             && (y % 2 == 0)
             && ( x < y)){

            ver = 1;
   
            } else if ((x % 2 != 0) || (y % 2 != 0)) {
                printf("Apenas número pares são aceitos.\n");
            } else if ((x <= 0) || (y <= 0)){
                printf("Apenas números positivos são aceitos.\n");
            } else {
                printf("x deve ser menor do que y.\n");
            }
    } while ( ver == 0);
    printf("\n");
    for ( int line = 0 ; line < (y - x) / 2; line ++){

        int sp, ast;
        
        sp = ((y - x) - 2 * line) / 2 - 1; 
        ast = x + 2 * line;

        for (int i = 0; i < sp; i++){
            printf(" ");
        }
        for (int i = 0 ; i < ast; i++){
            printf("*");
        }
        printf("\n");
    }


    return 0;
}