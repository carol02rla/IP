#include <stdio.h>

/*
    3) A sequência de Fibonacci tem papel importante na explicação de fenômenos 
    naturais e é muito usada como guia estética na arquitetura, nas artes visuais, 
    na música etc.
    A sequência inicia-se por dois números 1, e partir do terceiro elemento usa-se
    a expressão: elemento[n] = elemento[n-1] + elemento[n-2]. 

    Exemplo de sequência: 1, 1, 2, 3, 5, 8. 

    Construa um programa em C que imprima na tela os n primeiros elementos da
    sequência de Fibonacci, onde n é informado pelo usuário.
*/

int main() {
    int n;

    printf("___SEQUENCIA DE FIBONACCI___\n");
    printf("Digite o valor de n: ");
    scanf("%d", &n);

    /*int seqFibonacci[n];

    seqFibonacci[0] = 1;
    seqFibonacci[1] = 1;

    printf("%d %d ", seqFibonacci[0], seqFibonacci[1]);

    for(int i = 2; i < n; i++){
        seqFibonacci[i] = seqFibonacci[i-1] + seqFibonacci[i-2];
        printf("%d ", seqFibonacci[i]);
    }*/

    // sem usar array
    int ele_n, ele_n1, ele_n2;

    ele_n1 = 1;
    ele_n2 = 1;

    printf("\n%d\t%d\t", ele_n1, ele_n2);

    for(int i = 1; i <= (n-2); i++){
        ele_n = ele_n1 + ele_n2;
        // prepara valores para a proxima iteracao
        ele_n2 = ele_n1;
        ele_n1 = ele_n;
        printf("%d\t", ele_n);
    }

    return 0;
}