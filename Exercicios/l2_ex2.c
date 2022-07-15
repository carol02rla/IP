#include <stdio.h>

/*
2) Faca um programa em C que leia 4 numeros inteiros e que diga qual deles eh o maior e qual eh o menor.
*/

int main(){
    int numero, maior, menor;

    printf("Digite o primeiro numero: ");
    scanf("%d", &numero);

    maior = numero;
    menor = numero;

    printf("Digite o segundo numero: ");
    scanf("%d", &numero);

    if(numero > maior){
        maior = numero;
    }
    else if(numero < menor){
        menor = numero;
    }

    printf("Digite o terceiro numero: ");
    scanf("%d", &numero);

    if(numero > maior){
        maior = numero;
    }
    else if(numero < menor){
        menor = numero;
    }

    printf("Digite o quarto numero: ");
    scanf("%d", &numero);

    if(numero > maior){
        maior = numero;
    }
    else if(numero < menor){
        menor = numero;
    }

    printf("O maior numero digitado foi %d e o menor foi %d.\n", maior, menor);

    return 0;
}