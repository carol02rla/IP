#include <stdio.h>

/*
    (Questão 2 - 2 pontos) Faça um programa em C que receba cinco números inteiros
    e exiba o resultado da soma dos números ímpares inseridos. Exiba também quantos
    números pares foram inseridos. Comente as principais etapas do código, 
    explicando o conceito de algoritmo.
*/

int main(void) {
    // Declaracao de variaveis
    int num1, num2, num3, num4, num5;
    int pares = 0, soma_impares = 0; // variaveis declaradas inicialmente com o valor 0, 
                                    // que sera incrementado posteriormente

    // Solicitacao dos valores de entrada ao usuario
    printf("Digite cinco numeros inteiros: ");
    scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);

    // Testes condicionais
    if((num1 % 2) == 0){ // se o numero for par
        pares += 1; // incremento do valor da variavel (adiciona-se 1 ao valor da contagem dos numeros pares)
    } else { // se o numero for impar
        soma_impares += num1; // incremento do valor da variavel com o valor do proprio numero
    }

    if((num2 % 2) == 0){
        pares += 1; // apenas os numeros pares incrementarao a variavel pares
    } else {
        soma_impares += num2; // apenas os numeros impares terao seu valor adicionados a soma_impares
    }

    if((num3 % 2) == 0){
        pares += 1;
    } else {
        soma_impares += num3;
    }

    if((num4 % 2) == 0){
        pares += 1;
    } else {
        soma_impares += num4;
    }

    if((num5 % 2) == 0){
        pares += 1;
    } else {
        soma_impares += num5;
    }

    // Saida dos valores calculados
    printf("Soma dos numeros impares inseridos: %d.\n", soma_impares);
    printf("Foram inseridos %d numeros pares.\n", pares);

    return 0;
}