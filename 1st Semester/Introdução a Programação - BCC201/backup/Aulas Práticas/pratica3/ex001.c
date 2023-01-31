// ANO BISSEXTO

#include <stdio.h>

int main () {

    int ano;
    int ano2;

    printf("Entre com o ano: "); scanf("%d", &ano);
    
    // PRIMEIRA ETAPA DE TESTES 
    if(ano % 4 == 0){
        if(ano < 400){
            // ENTRE 100 E 400:
            if(ano > 100){
                if(ano == 200 || ano == 300){
                    printf("O ano digitado não é bissexto.");
                    return 0;
                }
                if(ano % 100 == 0){
                    printf("O ano digitado não é bissexto."); // aqui
                }
                else if(ano % 100 != 0){
                    printf("O ano digitado é bissexto.");
                }
            }    
            
            // ENTRE 0 E 100:
            if(ano < 100){
                if(ano % 4 != 0){
                    printf("O ano digitado não é bissexto.");
                }
                else{
                    printf("O ano digitado é bissexto.");
                }
            }
        }
        
        // SEGUNDA ETAPA DE TESTES
        if(ano % 100 == 0){ 
            if(ano % 400 == 0){ 
                printf("\nO ano digitado é bissexto.");
            }
            else if(ano % 400 !=0){
                printf("\nO ano digitado não é bissexto."); // aqui
            }
        }
    }
    else{
        printf("\nO ano digitado não é bissexto.");
    }
    return 0;
}