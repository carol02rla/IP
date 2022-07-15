#include <stdio.h>
#include <math.h>

/*
4) Faça um programa em C que solicita um número decimal e imprime o correspondente em hexa e octal.
*/

int main(){
    int decimal;
    int b1, b2, b3, b4, b5, b6, b7, b8;

    printf("Digite um numero na base decimal: ");
    scanf("%d", &decimal);

    b1 = decimal % 2;    
    b2 = (decimal/2) % 2;    
    b3 = (decimal/4) % 2;    
    b4 = (decimal/8) % 2;    
    b5 = (decimal/16) % 2;    
    b6 = (decimal/32) % 2;
    b7 = (decimal/64) % 2;
    b8 = (decimal/128) % 2;

    printf("Em binario: %d%d%d%d%d%d%d%d\n", b8, b7, b6, b5, b4, b3, b2, b1);
    printf("Em octal: %o\n", decimal); // %o - comando que imprime o numero em octal
    printf("Em hexadecimal: %#4X\n", decimal); // %x ou %X - comando que imprime o numero em hexadecimal

    return 0;
}