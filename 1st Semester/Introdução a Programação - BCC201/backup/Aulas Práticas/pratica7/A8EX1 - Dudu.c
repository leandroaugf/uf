#include <stdio.h>
//programa que armazena marcações de temperaturas diárias durante 30 dias, 
//calcula a média e retorna quantos valores estão abaixo e acima da média

float tempmedia(float *t,int *vac,int *vab,float *resultado){

    float soma=0;
    int cont,acm=0,abm=0;
    float media;
    float aux;
    
    for(cont=0;cont<30;cont++){

        soma = soma + t[cont];

    }
    
    media = soma/30;

    for(cont=0;cont<30;cont++){

        aux = t[cont];

        if(aux>media){

            acm++;

        }
        else if(aux<media){

            abm++;

        }
        if(aux=media){

            continue;
            
        }
            
            
    
    }
     *vac = acm;
     *vab = abm;
     *resultado = media;
}

int main(){

    float temp[30];        //declarando variáveis e vetores
    int cont=0;
    float temperatura;
    float m;
    int ac,ab;
    int *pac=&ac;
    int *pab=&ab;
    float *pm=&m;

    printf("Entre com as temperaturas:");

    for(cont=0;cont<30;cont++){
    scanf("%f", &temperatura);                         
    temp[cont]=temperatura;

    } 
      
    tempmedia(temp,pac,pab,pm);

    printf("Acima:%d\n Abaixo:%d", ac,ab);

    return 0;

}