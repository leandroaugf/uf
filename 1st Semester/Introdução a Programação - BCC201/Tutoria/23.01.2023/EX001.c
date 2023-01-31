#include <stdio.h>
int calcula(int, int, int, int);
int main() {
   int he, me, hs, ms, i;
   scanf("%d %d %d %d", &he, &me, &hs, &ms);
   
   while(hs < 0 || he < 0 || me > 60 || ms > 60) {
      printf("Horário inválido. Digite novos horários: ");
      scanf("%d %d %d %d", &he, &me, &hs, &ms);
   }
   printf("O tempo total de sono será de %d minutos!", calcula(he, me, hs, ms));
   return 0;
}
int calcula(int he, int me, int hs, int ms) {
   int auxe = 0, auxs = 0;
   auxe = me + (he * 60);
   auxs = ms + (hs * 60);
   
   if(auxs < auxe) { // 23  -   1
      return auxs - (auxe - 1440);
   }
   else if(auxs > auxe) {
      return auxs - auxe;
   }
}