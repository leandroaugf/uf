#include <stdio.h>
float quadrado(float, float);
float perimetro(float, float);
float area(float, float);
int main() {
   float l1, l2, auxquadrado, auxperimetro, auxarea;
   scanf("%f %f", &l1, &l2);
   if(l1 == 0 || l2 == 0){
      return 0;
   }
   auxquadrado = quadrado(l1, l2);
   auxperimetro = perimetro(l1, l2);
   auxarea = area(l1, l2);
   
   if(auxquadrado == 0) { 
      printf("\nÉ quadrado");
   }
   else if(auxquadrado == 1) {
      printf("\nNão é quadrado");
   }
   printf("\nPerímetro = %.2f", auxperimetro);
   printf("\nÁrea = %.2f", auxarea);

   return 0;
}
float quadrado(float l1, float l2){
   if(l1 != l2) {
      return 1;   // não é quadrado
   }
   else if(l1 == l2) {
      return 0; // é quadrado
   }
}
float perimetro(float l1, float l2) {
   return l1 + l1 + l2 + l2;
}
float area(float l1, float l2) {
   return l1 * l2;
}