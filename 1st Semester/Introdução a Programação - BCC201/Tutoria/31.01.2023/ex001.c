#include <stdio.h>
int main() {


    int en1[5], en2[5], i, cont = 0;

    for(i = 0; i < 5; i++) {
        scanf("%d", &en1[i]);
    }
    for(i = 0; i < 5; i++) {
        scanf("%d", &en2[i]);
    }
    for(i = 0; i < 5; i ++) {
        if((en1[i] == 0 && en2[i] == 1 ) || (en1[i] == 1 && en2[i] == 0)) {
            cont++;
        }
    }

    if(cont == 5) {
        printf("\nY");
    }
    else {
        printf("\nN");
    }


    return 0;
}