#include <stdio.h>
#include <stdlib.h>

#ifdef __linux__ 
    #include <unistd.h>
    #define LIMPA "clear"
#elif _WIN32
    #include <windows.h>
    #define LIMPA "cls"
#else
    #error "OS not supported!"
#endif

/*
    6) Faça um programa em C que utilize um array bi-dimensional para dar suporte
    a um jogo da velha. Solicite do usuário a posição da jogada e exiba o estado
    corrente do tabuleiro até que a partida tenha um vencedor.
*/

#define LINHAS 3
#define COLUNAS 3

void exibeJogoDaVelha(char matriz[LINHAS][COLUNAS]){
    printf("_______JOGO DA VELHA_______\n");
    printf("\t 0   1   2 \n");
    for(int i = 0; i < LINHAS; i++){
        //printf(" %d | %d | %d \n", jogo[i][0], jogo[i][1], jogo[i][2]);
        printf("%d\t", i);
        for(int j = 0; j < COLUNAS; j++){
            if(j == 1){
                printf("| %c |", matriz[i][j]);
            } else {
                printf(" %c ", matriz[i][j]);
            }
        }
        if(i == 2){
            printf("\n");
        } else {
            printf("\n\t-----------\n");
        }
    }
}

int main() {
    char jogo[LINHAS][COLUNAS] = { { ' ', ' ', ' ' }, { ' ', ' ', ' ' }, { ' ', ' ', ' ' } };
    char OX;
    int posLin, posCol, jog;
    int contRodadas = 1, vencedor = 0;

    // Enquanto o numero de jogadas for menor que 9 e nao houver vencedor
    while(contRodadas <= 9 && vencedor == 0){ 
        exibeJogoDaVelha(jogo);

        printf("\n_%dA JOGADA\n", contRodadas);

        if(contRodadas % 2 != 0){
            jog = 1;
            OX = 'O';
        } else {
            jog = 2;
            OX = 'X';
        }

        printf("[%c] Jogador %d \n", OX, jog);
        printf("    Digite a posicao da sua jogada: ");
        scanf("%d %d", &posLin, &posCol);

        if (jogo[posLin][posCol] == ' ') {  // Se a posição estiver vazia
            jogo[posLin][posCol] = OX;
            contRodadas++;
        } else {
            printf("Posicao ocupada!\n\n");
            system("pause");
        }

        for (int i = 0; i < LINHAS; i++) { //procura por vencedor na horizontal
            if (jogo[i][0] != ' ' && jogo[i][0] == jogo[i][1] && jogo[i][1] == jogo[i][2]) {
                if(jogo[i][0] == 'O'){
                    vencedor = 1;
                } else if (jogo[i][0] == 'X') {
                    vencedor = 2;
                }
                break;
            }
        }

        for (int j = 0; j < COLUNAS; j++) { //procura por vencedor na vertical
            if (jogo[0][j] != ' ' && jogo[0][j] == jogo[1][j] && jogo[1][j] == jogo[2][j]) {
                if(jogo[0][j] == 'O'){
                    vencedor = 1;
                } else if (jogo[0][j] == 'X') {
                    vencedor = 2;
                }
                break;
            }
        }

        if (jogo[0][0] != ' ' && jogo[0][0] == jogo[1][1] && jogo[1][1] == jogo[2][2] || //procura por vencedor na diagonal principal
            jogo[0][2] != ' ' && jogo[0][2] == jogo[1][1] && jogo[0][2] == jogo[2][0]) { //procura por vencedor na diagonal secundaria
            if(jogo[0][0] == 'O' || jogo[0][2] == 'O'){
                vencedor = 1;
            } else if (jogo[0][0] == 'X' || jogo[0][2] == 'X') {
                vencedor = 2;
            }
            break;
        }

        system(LIMPA);
    }

    system(LIMPA);
    exibeJogoDaVelha(jogo);

    if(vencedor == 0){
        printf("\n\nFIM DO JOGO\n");
        printf("Empate!\n");
        return 0;
    } else if (vencedor == 1) {
        printf("\n\nFIM DO JOGO\n");
        printf("Vitoria do Jogador 1 [O]\n");
        return 0;
    } else if (vencedor == 2) {
        printf("\n\nFIM DO JOGO\n");
        printf("Vitoria do Jogador 2 [X]\n");
        return 0;
    }

    return 0;
}