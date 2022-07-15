#include <stdio.h>

/*
    1) Faça um programa em C para calcular e listar todos os 
    múltiplos positivos do número 7 menores ou iguais a 100. 
*/

int main() {
    int num;
    int i = 0; // iterador

    multiplos_de_7:
    num = 7 * i;
    if(num <= 100){
        printf("%d ", num);
        i++;
        goto multiplos_de_7;
    }

    return 0;
}