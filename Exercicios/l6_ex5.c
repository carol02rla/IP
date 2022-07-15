#include <stdio.h>

/*
    5) Faça um programa que preenche uma matriz 4 x 4 com o produto do valor da
    linha e da coluna de cada elemento. Em seguida, imprima na tela a matriz.
*/

#define QTD_LIN_COL 4

int main() {
    int matriz[QTD_LIN_COL][QTD_LIN_COL];

    for(int i = 0; i < QTD_LIN_COL; i++){
        for(int j = 0; j < QTD_LIN_COL; j++){
            matriz[i][j] = i * j;
            printf("| %d ", matriz[i][j]);
        }
        printf("|\n");
    }

    return 0;
}