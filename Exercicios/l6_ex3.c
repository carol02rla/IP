#include <stdio.h>

/*
    3) Faça um programa que leia um vetor de 15 posições e o compacte, ou seja, 
    elimine as posições com valor zero. Para isso, todos os elementos a frente
    do valor zero, devem ser movidos uma posição para trás no vetor.
*/

#define TAM_VETOR 15

int main() {
    int posicoes_nulas = 0, vetor_compactado;
    int vetor[TAM_VETOR];

    for(int i = 0; i < TAM_VETOR; i++){
        printf("Digite o elemento %d: ", i);
        scanf("%d", &vetor[i]);
    }
    for(int i = 0; i < TAM_VETOR; i++){
        while(vetor[i] == 0){
            posicoes_nulas++;
            for(int j = i; j < TAM_VETOR; j++){
                vetor[j] = vetor[j+1];
            }
        }
    }

    /* 
    posicao   1, 2, 3, 4, 5
    elemento  6, 0, 7, 0, 8

    i = 2 | TAM_VETOR-i = 3
    array = 6, 7, 0, 8
    i = 3 | TAM_VETOR-i = 2
    array = 6, 7, 8
    */

    vetor_compactado = TAM_VETOR - posicoes_nulas;

    for(int i = 0; i < vetor_compactado; i++){
        printf("vetor[%d]: %d\n", i, vetor[i]);
    }

    return 0;
}