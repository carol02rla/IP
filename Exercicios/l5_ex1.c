#include <stdio.h>
#include <limits.h>

/*
    1) Faça um programa em C que leia tantos números quanto o usuário desejar,
    até que este digite um valor negativo. Exiba, então: a média dos números, 
    a quantidade de números pares, a quantidade de números ímpares, qual o menor 
    número par e qual o maior número ímpar. 
*/

int main() {
    int num = 0, soma = 0;
    int qtd_pares = 0, qtd_impares = 0;
    int menor_par = INT_MAX, maior_impar = INT_MIN;

    do {
        printf("Digite um numero inteiro (digite um numero negativo para sair): ");
        scanf("%d", &num);

        if(num >= 0){
            if(num % 2 == 0){ // numero par
                qtd_pares ++;
                if (num < menor_par){
                    menor_par = num;
                }
            } else { // numero impar
                qtd_impares ++;
                if (num > maior_impar){
                    maior_impar = num;
                }
            }
            soma += num;
        }
    } while (num >= 0);

    printf("Media dos numeros inseridos: %.2f\n", (soma*1.0)/(qtd_impares + qtd_pares));
    printf("Quantidade de numeros pares: %d\n", qtd_pares);
    printf("Quantidade de numeros impares: %d\n", qtd_impares);
    printf("Menor numero par: %d\n", menor_par);
    printf("Maior numero impar: %d\n", maior_impar);

    return 0;
}