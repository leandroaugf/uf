#include <stdio.h>
int main() {
   int x, y, j, n, i;      // x = topo; y = base
   printf("Digite os valores de x e y: ");
   scanf("%d %d", &x, &y);
   while(x % 2 == 1 || y % 2 == 1) {
      printf("\nApenas valores pares são aceitos.");
      printf("\nDigite os valores de x e y: ");
      scanf("%d %d", &x, &y);
   }
   while(x > y) {
      printf("\nx deve ser menor do que y.");
      printf("\nDigite os valores de x e y: ");
      scanf("%d %d", &x, &y);
   }
   while(x < 0 || y < 0) {
      printf("\nApenas números positivos são aceitos.");
      printf("\nDigite os valores de x e y: ");
      scanf("%d %d", &x, &y);
   }
   
   n = 0;
   for(i = x; i <= y; i += 2) {
      n++;
   }

   for(i = 1; i <= n; i++) {
      for(j = n - 1; j >= 1; j--) 
         printf(" ");
      for(j = 1; j <= i; j++) 
         printf("*");
      for(j = 1; j <= i; j++) 
         printf("*");
      printf("\n");
   }

   return 0;
}