#include <stdio.h>

/*
1) Faça um programa em C, utilizando switch, que exiba na tela o nome do mês de acordo 
com o número digitado pelo usuário.
*/

int main(){
    int mes;

    printf("Digite o numero correspondente ao mes atual: ");
    scanf("%d", &mes);

    switch (mes){
        case 1:{
            puts("Janeiro");
            break;
        }
        case 2:{
            puts("Fevereiro");
            break;
        }
        case 3:{
            puts("Marco");
            break;
        }
        case 4:{
            puts("Abril");
            break;
        }
        case 5:{
            puts("Maio");
            break;
        }
        case 6:{
            puts("Junho");
            break;
        }
        case 7:{
            puts("Julho");
            break;
        }
        case 8:{
            puts("Agosto");
            break;
        }
        case 9:{
            puts("Setembro");
            break;
        }
        case 10:{
            puts("Outubro");
            break;
        }
        case 11:{
            puts("Novembro");
            break;
        }
        case 12:{
            puts("Dezembro");
            break;
        }
        default:{
            puts("Numero nao associado a mes.");
            break;
        }
    }

    return 0;
}