#include <stdio.h>
int descobre(int);
int main() {
   int rec, aux, n;

   printf("Digite um número: "); scanf("%d", &n);
   aux = n;

   rec = descobre(n);

   if(rec == 1) // caso em que não é primo
      printf("%d é um número primo!", aux);
   else // caso em que é primo
      printf("%d não é um número primo!", aux);
   return 0;
}

int descobre(int n) {
   int i, aux = 0;
   
   for(i = 2; i < n; i++) {
      if(n % i == 0)
        aux++;
   }

   if(aux == 0)   // Primo!
      return 1;
   else if(aux != 0) // Não é primo!
      return 0;
}