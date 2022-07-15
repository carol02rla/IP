#include <stdio.h>

/*
    2) Faça um programa em C que pergunte um número inteiro e realize a exibição da 
    letra de uma música no formato (onde n é o número inteiro):

    n patinhos foram passear
    Além das montanhas
    Para brincar
    A mamãe gritou: Quá, quá, quá, quá
    Mas só n-1 patinhos voltaram de lá.

    Trecho se repete até que o valor de patinhos a voltar seja igual a zero.

    Ao final, exiba o trecho onde todos os patinhos voltam:

    A mamãe patinha foi procurar
    Além das montanhas
    Na beira do mar
    A mamãe gritou: Quá, quá, quá, quá
    E os n patinhos voltaram de lá.
*/

int main() {
    int n, i;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    i = n;

    while(i > 0) {
        if(i == 1){
            printf("%d patinho foi passear\n", i);
            printf("Alem das montanhas\n");
            printf("Para brincar\n");
            printf("A mamae gritou: Qua, qua, qua, qua\n");
            i--;
            printf("Mas nenhum (%d) patinho voltou de la\n\n", i);
        } else{
            printf("%d patinhos foram passear\n", i);
            printf("Alem das montanhas\n");
            printf("Para brincar\n");
            printf("A mamae gritou: Qua, qua, qua, qua\n");
            i--;
            printf("Mas so %d patinhos voltaram de la\n\n", i);
        }
    }

    if(n > 0){
        printf("A mamae patinha foi procurar\n");
        printf("Alem das montanhas\n");
        printf("Na beira do mar\n");
        printf("A mamae gritou: Qua, qua, qua, qua\n");
        printf("E os %d patinhos voltaram de la\n", n);
    }

    return 0;
}