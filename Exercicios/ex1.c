#include <stdio.h>
#include<math.h>

/*
1) Faça um programa em C que pergunta um valor em metros e 
imprime o correspondente em decímetros, centímetros e milímetros.
*/

int main(){
    float valor;

    printf("Insira um valor em metros: ");
    scanf("%f", &valor);

    printf("%.1f metros corresponde a %.1f decimetros.\n", valor, (valor*pow(10,1)));
    printf("%.1f metros corresponde a %.1f centimetros.\n", valor, (valor*pow(10,2)));
    printf("%.1f metros corresponde a %.1f milimetros.\n", valor, (valor*pow(10,3)));

    return 0;
}