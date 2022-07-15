#include <stdio.h>

/*
2) Faça um programa em C que leia dois valores reais do usuário e 
um caractere da operação que ele deseja executar (Operações: soma, 
subtração, divisão, multiplicação). Execute a operação desejada com 
os operandos passados e exiba o resultado na tela.
*/

int main(){
    int num1, num2, resultado;
    char operador;

    printf("Digite uma operacao: ");
    scanf("%d %c %d", &num1, &operador, &num2);

    switch(operador){
        case '+':{
            resultado = num1 + num2;
            break;
        }
        case '-':{
            resultado = num1 - num2;
            break;
        }
        case '*':{
            resultado = num1 * num2;
            break;
        }
        case '/':{
            resultado = num1 / num2;
            break;
        }
        default:{
            puts("Operador invalido.");
            break;
        }
    }

    printf("%d %c %d = %d", num1, operador, num2, resultado);

    return 0;
}