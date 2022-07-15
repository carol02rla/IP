#include <stdio.h>

/*
4) Escreva um programa em C que leia o número de lados de um polígono 
e exiba o nome do polígono correspondente (até 6 lados). Use switch/case.
*/

int main(){
    int lados;

    printf("Insira o numero de lados do poligono: ");
    scanf("%d", &lados);

    if(lados <= 0){
        printf("[%d] Valor invalido!\n", lados);
        return 0;
    }

    switch (lados){
        case 1:
        case 2: {
            printf("%d lados nao formam um poligono!\n", lados);
            break;
        }
        case 3: {
            printf("%d lados formam um triangulo.\n", lados);
            break;
        }
        case 4: {
            printf("%d lados formam um quadrado.\n", lados);
            break;
        }
        case 5: {
            printf("%d lados formam um pentagono.\n", lados);
            break;
        }
        case 6: {
            printf("%d lados formam um hexagono.\n", lados);
            break;
        }
        default: {
            printf("%d lados - quantidade nao suportada!\n", lados);
            break;
        }
    }

    return 0;
}