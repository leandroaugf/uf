#include <stdio.h>
void converteHora(long totalSegundos, int *hora, int *min, int *seg);
int main() {
    long totalSegundos;
    int seg = 0, min = 0, hora = 0;
    printf("Digite o total de segundos: ");
    scanf("%ld", &totalSegundos);
    if(totalSegundos < 0 || totalSegundos > 86400) {
        printf("Horário inválido. Reinicie o programa.");
    }

    converteHora(totalSegundos, &hora, &min, &seg);
    printf("\nHora convertida: %.2d:%.2d:%.2d\n", hora, min, seg);
    return 0;

}
void converteHora(long totalSegundos, int *hora, int *min, int *seg){
    // 4563       45639
    int aux;
    aux = totalSegundos % 3600;
    *hora = (totalSegundos / 3600);
    *min = (aux / 60); 
    *seg = (aux % 60);
}

