#include <stdio.h>

/*
    4) Peça ao usuário cinco valores inteiros e ordene por ordem crescente esses 
    valores, guardando-os num vetor. Ordene o valor assim que ele for digitado. 
    Mostre ao final na tela os valores em ordem.
*/

#define TAM_ARRAY 5

int main() {
    int numeros[TAM_ARRAY], valor;

    for(int i = 0; i < TAM_ARRAY; i++){
        printf("Digite um numero inteiro (%d): ", i);
        scanf("%d", &valor);

        if(i == 0){
            numeros[i] = valor;
        } else {
            for(int j = 0; j < i; j++){
                if(valor < numeros[j]){
                    for(int k = i; k > j; k--){
                        numeros[k] = numeros[k-1];
                    }
                    numeros[j] = valor;
                    break;
                } else if (j == i - 1){
                    numeros[i] = valor;
                }
            }
        }
    }

    for(int i = 0; i < TAM_ARRAY; i++){
        printf("numeros[%d]: %d\n", i, numeros[i]);
    }

    return 0;
}