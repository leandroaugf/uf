#include <stdio.h>
int soma(int, int, int);
int main() {
   int i, j, n, x, y, aux = 0;               // n = qtos pares vao ser digitados;   x = partida. y = qtos impares a partir de x
  
   scanf("%d", &n);  // soma de y ímpares a partir de x inc x se for impar
   while(n < 1) {
      printf("\nValor inválido. Digite um novo valor para n: ");
      scanf("%d", &n);
   }

   for(i = 1; i <= n; i++) {

      scanf("%d %d", &x, &y);
      
      while(y < 0) {
         printf("\nValores inválidos. Digite novos valores para X e Y: ");
         scanf("%d %d", &x, &y);
      }
      
      for(j = 1; j <= y; j++) { // lógica da soma
        if(x % 2 == 0) {
            x++;
        }
        aux += x;
        x += 2;
        if(j == y) {
            printf("%d\n", aux);
            aux = 0;
        }
      }
   }

   return 0;
}