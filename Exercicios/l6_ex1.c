#include <stdio.h>

/*
    1) Elabore três programas em C que ao ler dois vetores A e B 
    com N e M elementos respectivamente:
    a) gere um novo vetor C que corresponde à intersecção dos vetores A e B.
    b) gere um novo vetor D que corresponde à união dos vetores A e B.
    c) imprima os vetores A, B, C e D.

    Considere que não existem elementos repetidos em cada um dos vetores A e B. 
*/

#define N 5
#define M 7

int main() {
    int contC = 0, contD = 0;
    int vetorA[N], vetorB[M], vetorC[M], vetorD[N+M];

    for(int i = 0; i < N; i++){
        printf("Digite o elemento %d do vetor A: ", i);
        scanf("%d", &vetorA[i]);
    }
    for(int i = 0; i < M; i++){
        printf("Digite o elemento %d do vetor B: ", i);
        scanf("%d", &vetorB[i]);
    }

    // letra a - gerando vetor c (interseccao)
    for(int i = 0; i < M; i++) {
        for(int j = 0; j < N; j++) {
            if(vetorA[j] == vetorB[i]){
                vetorC[contC++] = vetorB[i];
            }
        }
    }

    // letra b - gerando vetor d (uniao)
    for(int i = 0; i < N; i++){
        vetorD[i] = vetorA[i];
    }

    contD = N;
    int l = 0;
    for(int i = 0; i < M; i++){
        l = 0;
        for(int j = 0; j < N; j++){
            if(vetorD[j] == vetorB[i]){
                l++;
            }
        }
        if(l == 0){
            vetorD[contD] = vetorB[i];
            contD++;
        }
    }

    // letra c - exibindo todos os vetores
    printf("\nVETOR A\n");
    for(int i = 0; i < N; i++){
        printf("vetorA[%d]: %d\n", i, vetorA[i]);
    }
    printf("\nVETOR B\n");
    for(int i = 0; i < M; i++){
        printf("vetorB[%d]: %d\n", i, vetorB[i]);
    }

    printf("\nVETOR C - interseccao dos vetores A e B\n");
    for(int i = 0; i < contC; i++){
        printf("vetorC[%d]: %d\n", i, vetorC[i]);
    }

    printf("\nVETOR D - uniao dos vetores A e B\n");
    for(int i = 0; i < contD; i++){
        printf("vetorD[%d]: %d\n", i, vetorD[i]);
    }

    return 0;
}