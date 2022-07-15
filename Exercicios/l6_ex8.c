#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
    8) Altere o programa anterior para que este gere 3 cartelas de bingo, as 
    armazene em um array tri-dimensional e depois as exiba na tela. 
*/

#define QTD_LIN 4
#define QTD_COL 5
#define QTD_CARTELAS 3

int main() {
    //int array[QTD_CARTELAS][QTD_LIN][QTD_COL];
    int cartela[QTD_CARTELAS][QTD_LIN][QTD_COL];
    int refLin = 0, refCol = 0;

    time_t t;

    srand((unsigned) time(&t));

    for(int a = 0; a < QTD_CARTELAS; a++){
        for(int i = 0; i < QTD_LIN; i++){
            for(int j = 0; j < QTD_COL; j++){
                int numero;
                gera_numero:
                numero = rand() % 100;
                //procura se o numero ja existe na cartela
                for(int ii = 0; ii < QTD_LIN; ii++){
                    for(int jj = 0; jj < QTD_COL; jj++){
                        if(cartela[a][ii][jj] == numero){
                            // se o numero ja existir, gera outro
                            goto gera_numero;
                        }
                    } // for jj
                } // for ii
                cartela[a][i][j] = numero;
            } // for j
        } // for i

        printf("_____CARTELA DE BINGO %d_____\n", a);
        for(int i = 0; i < QTD_LIN; i++){
            for(int j = 0; j < QTD_COL; j++){
                printf("| %d ", cartela[a][i][j]);
            }
            printf("|\n");
        }
        printf("\n");
    } // for a

    return 0;
}