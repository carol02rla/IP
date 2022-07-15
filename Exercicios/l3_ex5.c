#include <stdio.h>

/*
5) Faça um programa em C que realize a conversão de base 
numérica. O programa deverá apresentar uma tela de entrada 
com as seguintes opções:

< Conversão de base >
1: decimal para hexadecimal
2: hexadecimal para decimal
3: decimal para octal
4: octal para decimal

De acordo com a opção escolhida, leia um valor do usuário e 
exiba o resultado da conversão.
*/

int main(){
    int opcao, numero;

    puts(" < Conversao de base >");
    puts("1: decimal para hexadecimal");
    puts("2: hexadecimal para decimal");
    puts("3: decimal para octal");
    puts("4: octal para decimal");

    printf("Insira a opcao: ");
    scanf("%d", &opcao);

    switch(opcao){
        case 1:{
            printf("Digite o numero decimal: ");
            scanf("%d", &numero);
            printf("Hexadecimal: %#4X\n", numero);
            break;
        }
        case 2:{
            printf("Digite o numero hexadecimal: ");
            scanf("%X", &numero);
            printf("Decimal: %d\n", numero);
            break;
        }
        case 3:{
            printf("Digite o numero decimal: ");
            scanf("%d", &numero);
            printf("Octal: %o\n", numero);
            break;
        }
        case 4:{
            printf("Digite o numero octal: ");
            scanf("%o", &numero);
            printf("Decimal: %d\n", numero);
            break;
        }
        default:{
            printf("Opcao invalida.\n");
            break;
        }
    }

    return 0;
}