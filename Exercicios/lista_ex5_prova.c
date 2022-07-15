#include <stdio.h>
#include <stdlib.h>

/*
    5) Faça um programa em C eia os valores inteiros para dia, 
    mês e ano de uma data e depois exiba a data como texto. 
    Verifique também se a data é válida. Use switch/case. 
    Ex. caso os valores 01 , 01 e 2021 sejam inseridos, será 
    exibido o texto "01 de Janeiro de 2021"; caso os valores 33, 
    20 e 2021 sejam inseridos, será exibido o texto "Data inválida".
*/

/*
    Para ser bissexto, o ano deve ser:
    Divisível por 4. Sendo assim, a divisão é exata com o resto 
    igual a zero;
    Não pode ser divisível por 100. Com isso, a divisão não é 
    exata, ou seja, deixa resto diferente de zero;
    Pode ser que seja divisível por 400.
*/

int main(){
    int dia, mes, ano;

    printf("Digite uma data (dd mm aaaa): ");
    scanf("%d %d %d", &dia, &mes, &ano);

    if(((ano % 4 == 0) && (ano % 100 != 0)) || (ano % 400 == 0)){
        printf("%d - ano bissexto.\n", ano);

        if(mes == 2){
            // ano bissexto
            if((dia <= 0) || (dia > 29)){
                printf("Dia %d invalido.\n", dia);
                exit(0);
            }
        } else {
            // ano nao bissexto
            if(mes == 2){
                if((dia <= 0) || (dia > 28)){
                printf("Dia %d invalido.\n", dia);
                exit(0);
                }
            }
        }
    }

    if(mes <= 0 || mes > 12){
        printf("Mes %d invalido!\n", mes);
        exit(0);
    }

    if(ano < 0){
        printf("Ano %d invalido!\n", ano);
        exit(0);
    }

    switch (mes) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12: {
            if(dia <= 0 || dia > 31){
                printf("Dia %d invalido!\n", dia);
                exit(0);
            }
            break;
        }
        case 4:
        case 6: 
        case 9:
        case 11: {
            if(dia <= 0 || dia > 30){
                printf("Dia %d invalido!\n", dia);
                exit(0);
            }
            break;
        }
    }

    switch (mes){
        case 1: {
            printf("%d de Janeiro de %d\n", dia, ano);
            break;
        }
        case 2: {
            printf("%d de Fevereiro de %d\n", dia, ano);
            break;
        }
        case 3: {
            printf("%d de Marco de %d\n", dia, ano);
            break;
        }
        case 4: {
            printf("%d de Abril de %d\n", dia, ano);
            break;
        }
        case 5: {
            printf("%d de Maio de %d\n", dia, ano);
            break;
        }
        case 6: {
            printf("%d de Junho de %d\n", dia, ano);
            break;
        }
        case 7: {
            printf("%d de Julho de %d\n", dia, ano);
            break;
        }
        case 8: {
            printf("%d de Agosto de %d\n", dia, ano);
            break;
        }
        case 9: {
            printf("%d de Setembro de %d\n", dia, ano);
            break;
        }
        case 10: {
            printf("%d de Outubro de %d\n", dia, ano);
            break;
        }
        case 11: {
            printf("%d de Novembro de %d\n", dia, ano);
            break;
        }
        case 12: {
            printf("%d de Dezembro de %d\n", dia, ano);
            break;
        }
    }

    return 0;
}