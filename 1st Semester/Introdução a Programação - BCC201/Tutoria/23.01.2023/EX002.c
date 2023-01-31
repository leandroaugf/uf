#include <stdio.h>   //       Qual o primeiro número primo contido no intervalo n1 - n2?
int descobre(int, int);
int main() {
   int n1, n2, ndivisores;
   scanf("%d %d", &n1, &n2);
   descobre(n1, n2);
   return 0;
}
int descobre(int n1, int n2){    //  Percorro a divisão de todos os números pelo menor, se não for primo, aumento um número(52->53).
   int i, j, ndivisores, aux1, aux2;
   ndivisores = 0; aux1 = n1; aux2 = n2; 

   for(n1; n1 <= n2; n1++) {   //    Operação de acrescer o número;
      ndivisores = 0;
      for(i = 2; i < n1; i++) {  //  Operação de acrescer os divisores;
         if(n1 % i == 0) {    //     Caso em que o número não é primo;
            ndivisores++;
         }
      }
      
      if(ndivisores == 0) {
         printf("O menor número primo no intervalo [%d,%d] é %d", aux1, aux2, n1);
         return 0;
      }
   }
   printf("\n%d\n", n1);
   // Caso em que não existem números primos no intervalo:
   printf("Não há números primos no intervalo [%d,%d]", aux1, aux2);
}