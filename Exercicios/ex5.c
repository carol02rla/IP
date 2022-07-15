#include <stdio.h>
#include <math.h>

/*
5) Faça um programa em C que pergunte um valor em graus Fahrenheit 
e exibe na tela o correspondente em graus Celsius.
*/

int main(){
    float celsius, fahrenheit;

    printf("Digite a temperatura em graus Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = ((5 * fahrenheit) - 160) / 9;

    printf("%.1f graus Fahrenheit corresponde a %.1f graus Celsius.\n", fahrenheit, celsius);

    return 0;
}