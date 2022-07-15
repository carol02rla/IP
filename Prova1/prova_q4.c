#include <stdio.h>
#include <math.h>

#define PI 3.14159 // Diretiva que armazena um valor que nao pode ser alterado ao longo do programa

/*
    (Questão 4 - 2 pontos) Faça um programa em C que ofereça um menu com opções
    referentes ao cálculo da área de diferentes formas geométricas: retângulo,
    círculo, triângulo, losango e trapézio. Solicite do usuário um caractere 
    (variável char) associado às formas, e, na sequencia, solicite os parâmetros 
    adequados (variáveis float) à forma selecionada e exiba a área calculada. 
    Comente o código explicando as estruturas de desvio condicional utilizadas.
*/

int main(void) {
    // Declaracao de variaveis
    char forma;
    float base, altura, raio, diagonal1, diagonal2, base2;
    float area;

    // Menu
    printf("----CALCULO DA AREA DE FORMAS GEOMETRICAS----\n\n");
    printf("[1] Retangulo\n");
    printf("[2] Circulo\n");
    printf("[3] Triangulo\n");
    printf("[4] Losango\n");
    printf("[5] Trapezio\n");

    // Solicitacao da opcao ao usuario
    printf("\nDigite o codigo associado a forma que voce deseja calcular: ");
    scanf(" %c", &forma);

    // Estrutura de desvio condicional switch de acordo com a opcao selecionada pelo usuario
    switch (forma){
        case '1':{ // Opcao 1 selecionada - retangulo
            // Os valores necessarios para o calculo da area sao solicitados
            printf("Insira as dimensoes do retangulo:\n"); 
            printf(" - Base: ");
            scanf("%f", &base);
            printf(" - Altura: ");
            scanf("%f", &altura);

            area = base * altura; // Calculo da area do retangulo

            printf("\nArea do retangulo: %.1f\n", area); // Saida com o valor da area
            break; // Interrompe a execucao dos proximos cases
        }
        case '2':{ // Opcao 2 selecionada - circulo
            // O valor necessario para o calculo da area eh solicitado
            printf("Insira o raio do circulo: ");
            scanf("%f", &raio);

            area = PI * (pow(raio,2)); // Calculo da area do circulo
            // Uso do valor definido para PI
            // Uso da funcao pow da biblioteca math.h para executar a operacao de potenciacao

            printf("\nArea do circulo: %.1f\n", area); // Saida com o valor da area
            break; // Interrompe a execucao dos proximos cases
        }
        case '3':{ // Opcao 3 selecionada - triangulo
            // Os valores necessarios para o calculo da area sao solicitados
            printf("Insira as dimensoes do triangulo:\n");
            printf(" - Base: ");
            scanf("%f", &base);
            printf(" - Altura: ");
            scanf("%f", &altura);

            area = (base * altura) / 2.0; // Calculo da area do triangulo

            printf("\nArea do triangulo: %.1f\n", area); // Saida com o valor da area
            break; // Interrompe a execucao dos proximos cases
        }
        case '4':{ // Opcao 4 selecionada - losango
            // Os valores necessarios para o calculo da area sao solicitados
            printf("Insira as diagonais do losango: ");
            scanf("%f %f", &diagonal1, &diagonal2);

            area = (diagonal1 * diagonal2) / 2.0; // Calculo da area do losango

            printf("\nArea do losango: %.1f\n", area); // Saida com o valor da area
            break; // Interrompe a execucao dos proximos cases
        }
        case '5':{ // Opcao 5 selecionada - trapezio
            // Os valores necessarios para o calculo da area sao solicitados
            printf("Insira as dimensoes do trapezio:\n");
            printf(" - Bases: ");
            scanf("%f %f", &base, &base2);
            printf(" - Altura: ");
            scanf("%f", &altura);

            area = ((base + base2) * altura) / 2.0; // Calculo da area do trapezio

            printf("\nArea do trapezio: %.1f\n", area); // Saida com o valor da area
            break; // Interrompe a execucao dos proximos cases
        }
        default:{ // Tratamento de erro - caso o usuario digite uma opcao diferente das mostradas no menu
            printf("Opcao invalida!\n");
        }
    }

    return 0;
}