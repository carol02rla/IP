#include <stdio.h>

/*
2) Durante uma crise hídrica em uma cidade fictícia, as pessoas 
começaram a construir reservatórios para armazenar água em suas 
propriedades. Faça um programa em C que auxilie os utilizadores 
do reservatório a controlarem seu consumo. Obtenha do usuário as 
dimensões de um reservatório (altura, largura e comprimento, em 
centímetros) e o consumo médio diário dos utilizadores do 
reservatório (em litros/dia). Assuma que o reservatório esteja 
cheio, tenha formato cúbico e informe: 

(a) A capacidade total do reservatório, em litros; 

(b) A autonomia do reservatório, em dias; 

(c) A classificação do consumo, de acordo com a quantidade de 
dias de autonomia:
    - Consumo elevado, se a autonomia for menor que 2 dias; 
    - Consumo moderado, se a autonomia estiver entre 2 e 7 dias; 
    - Consumo reduzido, se a autonomia maior que 7 dias. 

Obs.: Considere que cada litro equivale a 1000 cm3 ou 1 dm3 .
*/

int main(){
    float altura, largura, comprimento;
    float capacidade, consumo, autonomia;

    printf("Informe as dimensoes do reservatorio:\n");
    printf("- Altura: ");
    scanf("%f", &altura);
    printf("- Largura: ");
    scanf("%f", &largura);
    printf("- Comprimento: ");
    scanf("%f", &comprimento);

    printf("\nInforme o consumo medio diario em litros/dia: ");
    scanf("%f", &consumo);

    capacidade = (altura * largura * comprimento) / 1000; // em litros
    autonomia = capacidade / consumo;

    printf("\nCapacidade total do reservatorio: %.1f litros.\n", capacidade);
    printf("Autonomia do reservatorio: %.1f dias.\n", autonomia);

    if(autonomia < 2){
        puts("Classificacao do consumo: elevado.\n");
    } else if((autonomia > 2) && (autonomia < 7)){
        puts("Classificacao do consumo: moderado.\n");
    } else{
        puts("Classificacao do consumo: reduzido.\n");
    }

    return 0;
}