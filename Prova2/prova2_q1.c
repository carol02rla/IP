#include <stdio.h>
#include <math.h>

/*
    (1 - 2 pontos) Faça um programa em C que peça um número inteiro inicial ao usuário, 
    um valor inteiro de razão e calcule os 100 primeiros termos de uma P.G. (Progressão Geométrica), 
    armazenando-os em um array. Depois exiba os itens do array na ordem inversa e diga quantos dos 
    valores armazenados são ímpares e quantos são pares. Explique nos comentários *o que aconteceu*, 
    como funcionam os arrays e a estrutura de repetição usada.
*/

#define QTD_TERMOS_PG 100 // Diretiva que armazena a quantidade de termos da P.G.

int main(void) {
    // Declaracao das variaveis e do array
    int numInicial, razao;
    unsigned long PG[QTD_TERMOS_PG]; // armazena valores de 0 a 18446744073709551615
    int qtdImpares = 0, qtdPares = 0;

    /* 
        Como na questao foi pedido uma PG de 100 termos, seus termos serao muito grandes, 
        por isso, tornou-se necessario usar o tipo de variavel unsigned long para armazenar
        valores maiores. Mas, ainda assim, mesmo que a PG seja a menor possivel, com numero 
        inicial 1 e razao 2, so sera possivel imprimir valores ate 18446744073709551615, 
        nao chegando ate o fim da PG.
    */

    // Solicitacao do numero inicial e da razao da PG ao usuario
    printf("Digite um numero inteiro inicial: ");
    scanf("%d", &numInicial);
    printf("Digite a razao da PG: ");
    scanf("%d", &razao);

    // Utilizacao de um laco for para determinar os termos da P.G.
    for(int i = 1; i <= 100; i++){
        /* O array ira armazenar o resultado do calculo do termo geral
           na posicao do indice i, que eh incrementada a cada repeticao
           do laco, assim, percorrendo e preenchendo todo o array PG. */
        PG[i] = numInicial * pow(razao, i-1);
    }

    // Utilizacao de outro laco for para varrer o array e imprimir seus termos
    for(int i = 100; i >= 1; i--){
        printf("%lu ", PG[i]);

        // Utilizacao de uma estrutura condicional para verificar se os numeros sao pares ou impares
        if((PG[i] % 2) == 0){
            qtdPares++; // Se o termo for par, a variavel qtdPares sera incrementada 
        } else qtdImpares++; // Se o termo for impar, a variavel qtdImpares sera incrementada
    }

    // Impressao da quantidade de termos pares e impares na P.G. criada
    printf("\nQuantidade de numeros pares na P.G.: %d\n", qtdPares);
    printf("Quantidade de numeros impares na P.G.: %d\n", qtdImpares);

    return 0;
}