#include <math.h>
#include <stdio.h>

double calcPI(int);

int main(void) {

   int n;

   printf("Digite o número de termos: "); scanf("%d", &n);
   printf("pi = %.4lf", calcPI(n));

   return 0;

}

double calcPI(int n) {

   int sub = 1;
   double s = 1;
   double d = 3;

   for(int i = 1; i < n; i++) {
      if(sub) {   // true exp. 
         s -= 1/pow(d,3.);
         sub = 0;
      }  else {   // false exp.
         s += 1/pow(d,3.);
         sub = 1;
      }
      
      d += 2;
   
   }
   
   return cbrt(s * 32);
}