#include <stdio.h>
#include <math.h>

/*
3) Faça um programa em C que leia o ano de nascimento do usuário e o ano atual. 
Exiba na tela a idade do usuário.
*/

int main(){
    int anoNascimento, anoAtual;

    printf("Qual o ano do seu nascimento? ");
    scanf("%d", &anoNascimento);

    printf("Digite o ano atual: ");
    scanf("%d", &anoAtual);

    printf("Sua idade eh %d anos\n", anoAtual-anoNascimento);

    return 0;
}