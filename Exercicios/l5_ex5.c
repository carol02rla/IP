#include <stdio.h>

/*
    5) Escreva um programa em C que pergunta um número inteiro ao usuário. Decidir
    se esse é um número primo e apresentar o resultado na saída padrão. 
    * Exibindo também todos os divisores, caso o numero nao seja primo
*/

int main() {
    int num, i, nao_primo = 0;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    i = num;

    num /= 2; // diminui a quantidade de testes

    while(num > 1){
        if(i % num == 0){
            printf("%d divisivel por %d\n", i, num);
            nao_primo = 1;
        }
        num--;
    }

    if(nao_primo == 0){
        printf("Numero %d foi detectado como primo!\n", i);
    } else printf("Numero %d nao eh primo!", i);

    /*
    if(num % 2 != 0 && num % 3 != 0 && num % 5 != 0 && num % 7 != 0){
        if(num % num == 0 && num % 1 == 0){
            printf("O numero %d eh um numero primo\n", num);
        }
    } else printf("O numero %d nao eh um numero primo\n", num);
    */

    return 0;
}