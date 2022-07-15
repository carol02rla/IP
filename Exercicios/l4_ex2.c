#include <stdio.h>

/*
    2) Faça um programa em C que efetue a soma de todos os números ímpares que são 
    múltiplos de três e que se encontram no conjunto dos números de 1 até 5000.
*/

int main() {
    int soma = 0, multiplo_de_3;
    int i = 0;

    soma_multiplos_de_3:
    multiplo_de_3 = 3 * i;
    if(multiplo_de_3 >= 0 && multiplo_de_3 < 5000){
        if((multiplo_de_3 % 2) != 0){
            soma += multiplo_de_3;
        }
        i++;
        goto soma_multiplos_de_3;
    }

    printf("Soma dos multiplos de 3 impares: %d\n", soma);

    return 0;
}