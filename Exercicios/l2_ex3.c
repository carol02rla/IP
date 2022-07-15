#include <stdio.h>
#include <time.h>

/*
3) Faca um programa em C que leia o dia, o mes e o ano de nascimento 
do usuario e o dia, o mes e o ano atual*. Exiba na tela a idade do 
usuario, e se eh maior de idade (idade maior ou igual a 18). Tente 
fazer o programa recuperando a data atual do sistema (automaticamente, 
sem solicitar ao usuario).
*/

int main(){
    int diaAtual, mesAtual, anoAtual;
    int diaNasc, mesNasc, anoNasc;
    int idade;
    time_t t;

    //printf("Informe o dia, o mes e o ano atual (dd mm aaaa): ");
    //scanf("%d %d %d", &diaAtual, &mesAtual, &anoAtual);

    //recuperando a data atual
    t = time(NULL);

    struct tm data_Atual = *localtime(&t);

    diaAtual = data_Atual.tm_mday;
    mesAtual = data_Atual.tm_mon + 1;
    anoAtual = data_Atual.tm_year + 1900;

    printf("Data atual: %d / %d / %d\n", diaAtual, mesAtual, anoAtual);

    printf("Informe o dia, o mes e o ano do seu nascimento (dd mm aaaa): ");
    scanf("%d %d %d", &diaNasc, &mesNasc, &anoNasc);

    if(mesAtual >= mesNasc){
        idade = anoAtual - anoNasc;
        if(mesAtual == mesNasc){
            if(diaAtual >= diaNasc){
                idade = anoAtual - anoNasc;
            } else idade = anoAtual - anoNasc - 1;
        }
    } else idade = anoAtual - anoNasc - 1;

    if(idade >= 18){
        printf("Voce eh maior de idade e tem %d anos.\n", idade);
    } else printf("Voce eh menor de idade e tem %d anos.\n", idade);

    return 0;
}