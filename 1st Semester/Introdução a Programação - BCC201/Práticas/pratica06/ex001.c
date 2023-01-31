#include <stdio.h>
long long fat(int);
int main() {
   int num;
   printf("Digite o valor de n: ");
   scanf("%d", &num);
   printf("%d! = %lld", num, fat(num));
   return 0;
}
long long fat(int n) {
   int i;
   long long aux = 1;
   for(i = 1; i <= n; i++) {
      aux *= i;
   }
   return aux;
}