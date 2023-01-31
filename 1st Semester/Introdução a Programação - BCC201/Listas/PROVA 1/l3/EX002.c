/* Questão 02
Faça um programa em C++ que lê dois pontos P1 = (x1, y1) e P2 = (x2, y2) e, calcule e imprima a
distância entre esses dois pontos, cujo valor é dado pela seguinte fórmula: dist =

A função recebe como parâmetro as coordenadas dos dois pontos e retorna a distância.    */
#include <stdio.h>
#include <math.h>

int calcula(int, int, int, int);
int main() {
    int x1, y1, x2, y2, dist;
    printf("Entre com as coordenadas de p1: ");
    scanf("%d %d", &x1, &y1);
    printf("Entre com as coordenadas de p2: ");
    scanf("%d %d", &x2, &y2);
    //calcula(x1, x2, y1, y2);
    printf("d(P1,P2) = %d", calcula(x1, x2, y1, y2));
    return 0;
}
int calcula(int x1, int x2, int y1, int y2) {
    int dist;
    dist = sqrt((pow(x2 - x1, 2)) + (pow(y2 - y1, 2)));
    return dist;
}