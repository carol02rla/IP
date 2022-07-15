#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
    7) Faça um programa para gerar automaticamente uma cartela de bingo. A cartela 
    conterá numeros entre 0 e 99 e deverá conter 4 linhas de 5 números. Gere estes
    valores de modo a não ter números repetidos dentro da cartela. O programa deve
    exibir na tela a cartela gerada.
*/

#define QTD_LIN 4
#define QTD_COL 5

int main() {
    int cartela[QTD_LIN][QTD_COL];

    time_t t;

    srand((unsigned) time(&t));

    for(int i = 0; i < QTD_LIN; i++){
        for(int j = 0; j < QTD_COL; j++){
            int numero;
            gera_numero:
            numero = rand() % 100;
            //procura se o numero ja existe na cartela
            for(int ii = 0; ii < QTD_LIN; ii++){
                for(int jj = 0; jj < QTD_COL; jj++){
                    if(cartela[ii][jj] == numero){
                        // se o numero ja existir, gera outro
                        goto gera_numero;
                    }
                } // for jj
            } // for ii
            cartela[i][j] = numero;
        } // for j
    } // for i

    printf("_____CARTELA DE BINGO_____\n");
    for(int i = 0; i < QTD_LIN; i++){
        for(int j = 0; j < QTD_COL; j++){
            printf("| %d ", cartela[i][j]);
        }
        printf("|\n");
    }

    return 0;
}