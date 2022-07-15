#include <stdio.h>
#include <stdlib.h>

/*
1) Faca um programa em C que leia um valor para um percurso em quilometros, 
um valor (caractere) que defina o tipo de carro a ser usado e calcule o consumo 
de combustivel para este percurso, sabendo-se que o carro do tipo A faz 12 Km com 
um litro de gasolina, o tipo B faz 9 Km e o tipo C faz 8 Km por litro.
*/

#define CONSUMO_A 12
#define CONSUMO_B 9
#define CONSUMO_C 8

int main(){
    char tipo;
    float consumo, percurso;

    printf("Digite o valor do percurso em quilometros: ");
    scanf("%f", &percurso);

    printf("Informe o tipo do carro (A, B ou C): ");
    scanf(" %c", &tipo);

    if(tipo == 'A' || tipo == 'a'){
        consumo = percurso / CONSUMO_A;
    } else{
        if(tipo == 'B' || tipo == 'b'){
            consumo = percurso / CONSUMO_B;
        } else {
            if(tipo == 'C' || tipo == 'c'){
                consumo = percurso / CONSUMO_C;
            } else {
                printf("Tipo de carro %c invalido.\n", tipo);
                exit(0);
            }
        }
    }

    printf("O consumo de gasolina para o carro tipo %c no percurso de %.1f km eh de %.1f litros.\n", tipo, percurso, consumo);

    return 0;
}