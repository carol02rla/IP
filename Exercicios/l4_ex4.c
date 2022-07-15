#include <stdio.h>

/*
    4) Faça um programa em C que calcule e exiba  os valores das 
    tabuadas de 1 a 10.
*/

int main() {
    int i, num;

    /*printf("Digite a tabuada: ");
    scanf("%d", &num);

    for(i = 0; i <= 10; i++){
        printf("%d * %d = %d\n", i, num, num * i);
    }*/

    // impressao de todas as tabuadas
    for(i = 1; i <= 10; i++){
        printf("\n++ Tabuada de %d\n", i);
        for(num = 1; num <= 10; num++){
            printf("\t%d * %d = %d\n", i, num, (i*num));
        }
    }

    return 0;
}