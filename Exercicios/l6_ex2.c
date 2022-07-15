#include <stdio.h>

/*
    2) Faça um programa que leia dois vetores de 10 posições e calcule outro vetor
    contendo, nas posições pares os valores do primeiro e nas posições impares os 
    valores do segundo.
*/

#define TAM_VETOR 10

int main() {
    int vetor1[TAM_VETOR], vetor2[TAM_VETOR], vetor3[TAM_VETOR*2];
    int j = 0, k = 0;

    printf("VETOR 1\n");
    for(int i = 0; i < TAM_VETOR; i++){
        printf("Digite o elemento %d: ", i);
        scanf("%d", &vetor1[i]);
    }
    printf("VETOR 2\n");
    for(int i = 0; i < TAM_VETOR; i++){
        printf("Digite o elemento %d: ", i);
        scanf("%d", &vetor2[i]);
    }
    printf("\nVETOR 3\n");
    for(int i = 0; i < (TAM_VETOR*2); i++){
        if(i % 2 == 0){
            vetor3[i] = vetor1[j];
            j++;
        } else {
            vetor3[i] = vetor2[k];
            k++;
        }
        printf("vetor3[%d]: %d\n", i, vetor3[i]);
    }

    return 0;
}