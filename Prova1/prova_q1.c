#include <stdio.h>

/*
    (Questão 1 - 2,5 pontos) Faça um programa em C que receba um valor inteiro
    que represente uma quantia em reais e exiba em quantas notas o valor se divide,
    com a menor quantidade de notas possível, considerando as notas de 200, 100,
    50, 20, 10, 5 e 2 reais. Ex.: usuário insere 199 e o programa exibe: 1 nota de 
    100, 1 nota de 50, 2 notas de 20, 1 nota de 5 e 2 notas de 2. Comente o código
    relacionando os elementos da arquitetura de um computador com a realização das
    principais instruções do código.
*/

int main(void) {
    // Declaracao de variaveis
    int valor;
    /* A variavel declarada eh armazenada na memoria principal. */

    // Solicitacao do valor de entrada ao usuario
    printf("Insira uma quantia em reais: ");
    scanf("%d", &valor);
    /* 
        Atraves do dispositivo de entrada, o usuario insere o valor que sera associado 
        a posicao de memoria da variavel.
    */

    // Testes condicionais
    if(valor / 200 != 0){
        printf("%d notas de R$ 200,00\n", valor / 200);
    }
    valor = valor % 200;

    if(valor / 100 != 0){
        printf("%d notas de R$ 100,00\n", valor / 100);   
    }
    valor = valor % 100;

    if(valor / 50 != 0){
        printf("%d notas de R$ 50,00\n", valor / 50);
    }
    valor = valor % 50;

    if(valor / 20 != 0){
        printf("%d notas de R$ 20,00\n", valor / 20);
    }
    valor = valor % 20;

    if(valor / 10 != 0){
        printf("%d notas de R$ 10,00\n", valor / 10);
    }
    valor = valor % 10;

    if(valor / 5 != 0){
        printf("%d notas de R$ 5,00\n", valor / 5);
    }
    valor = valor % 5;

    if(valor / 2 != 0){
        printf("%d notas de R$ 2,00\n", valor / 2);
    }
    valor = valor % 2;

    /* Testes dos desvios condicionais e as expressoes matematicas sao realizados pelo processador. */
    /* A ULA (Unidade Logica Aritmetica) realiza as operacoes logicas. */
    /* Os valores calculados (processados) sao exibidos pelo dispositivo de saida padrao. */

    return 0;
}