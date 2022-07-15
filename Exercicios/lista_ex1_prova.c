#include <stdio.h>
#include <math.h>

/*
1) Faça um programa em C que tendo como entrada dois pontos 
quaisquer do plano P(x1,y1) e Q(x2,y2), e exiba a distância 
entre eles. Use variáveis reais para representar as coordenadas 
dos dois pontos.
*/

int main(){
    int x1, y1, x2, y2;
    float distancia;

    printf("Digite as coordenadas do ponto P: ");
    scanf("%d %d", &x1, &y1);

    printf("Digite as coordenadas do ponto Q: ");
    scanf("%d %d", &x2, &y2);

    distancia = sqrt(pow(x2-x1,2) + pow(y2-y1,2));

    printf("Distancia entre P e Q: %.1f", distancia);

    return 0;
}