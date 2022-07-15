#include <stdio.h>

/*
    (Questão 5 - 2,5 pontos) Faça um programa em C que ofereça um menu com opções
    referentes a diferentes tipos de conversões de unidades de medida. As opcões 
    do programa devem ser exibidas em forma de um menu apresentado na tela, com
    dois níveis. No primeiro nível o usuário escolhe o tipo de conversão (char);
    no segundo nível o usuário escolhe qual conversão deseja (int), fornecendo 
    então o valor a ser convertido (float). Por fim, o programa exibe o valor 
    resultante da conversão na tela. 

    As opções apresentadas no menu serão:

    +--------------+----------------------+
    |     Tipo     |       Conversão      |
    +--------------+----------------------+
    | (P)eso       |                      |
    | .            | 1) Libra -> Kg       |
    | .            | 2) Kg -> Libra       |
    | .            | 3) Onça -> Grama     |
    | .            | 4) Grama -> Onça     |
    | (V)olume     |                      |
    | .            | 1) Galão -> Litro    |
    | .            | 2) Litro -> Galão    |
    | (T)empo      |                      |
    | .            | 1) Segundos -> Horas |
    | .            | 2) Horas -> Segundos |
    | .            | 3) Dias -> Anos      |
    | .            | 4) Anos -> Dias      |
    +--------------+----------------------+

    * Considerar: 1 ano = 365 dias
*/

int main(void) {
    // Declaracao de variaveis
    char tipo;
    int opcao_conversao;
    float valor_input, valor_convertido;

    // Menu
    printf("----TIPO DE CONVERSAO----\n\n");
    printf("[P] Peso\n");
    printf("[V] Volume\n");
    printf("[T] Tempo\n");

    // Solicitacao do tipo de conversao ao usuario
    printf("\nDigite o tipo de conversao que voce deseja realizar: ");
    scanf(" %c", &tipo);

    // Teste condicional de acordo com o tipo de conversao selecionado pelo usuario
    switch (tipo){
        case 'P':{ // Peso
            // Menu 2
            printf("\n[1] Libra -> Kg\n");
            printf("[2] Kg -> Libra\n");
            printf("[3] Onca -> Grama\n");
            printf("[4] Grama -> Onca\n");

            // Solicitacao da conversao desejada ao usuario
            printf("\nInsira a opcao da conversao desejada: ");
            scanf("%d", &opcao_conversao);

            // Teste condicional de acordo com a conversao desejada pelo usuario
            switch (opcao_conversao){
                case 1:{ // Libra -> Kg
                    // Solicitacao do valor a ser convertido
                    printf("Digite o valor em libras a ser convertido: ");
                    scanf("%f", &valor_input);
                    valor_convertido = valor_input * 0.453592; // Conversao do valor (1 Libra = 0.354592 Kg)
                    printf("\n%.1f Libras = %.1f Kg\n", valor_input, valor_convertido); // Output da conversao
                    break;
                }
                case 2:{ // Kg -> Libra
                    // Solicitacao do valor a ser convertido
                    printf("Digite o valor em quilogramas a ser convertido: ");
                    scanf("%f", &valor_input);
                    valor_convertido = valor_input * 2.20462; // Conversao do valor (1 Kg = 2.20462 Libras)
                    printf("\n%.1f Kg = %.1f Libras\n", valor_input, valor_convertido); // Output da conversao
                    break;
                }
                case 3:{ // Onca -> Grama
                    // Solicitacao do valor a ser convertido
                    printf("Digite o valor em oncas a ser convertido: ");
                    scanf("%f", &valor_input);
                    valor_convertido = valor_input * 28.3495; // Conversao do valor (1 Onca = 28.3495 Gramas)
                    printf("\n%.1f Oncas = %.1f Gramas\n", valor_input, valor_convertido); // Output da conversao
                    break;
                }
                case 4:{ // Grama -> Onca
                    // Solicitacao do valor a ser convertido
                    printf("Digite o valor em gramas a ser convertido: ");
                    scanf("%f", &valor_input);
                    valor_convertido = valor_input * 0.035274; // Conversao do valor (1 Grama = 0.035274 Oncas)
                    printf("\n%.1f Gramas = %.1f Oncas\n", valor_input, valor_convertido); // Output da conversao
                    break;
                }
                default:{
                    printf("\nOpcao invalida!\n");
                    break;
                }
            }
            break;
        }
        case 'V':{ // Volume
            // Menu 2
            printf("\n[1] Galao -> Litro\n");
            printf("[2] Litro -> Galao\n");
            
            // Solicitacao da conversao desejada ao usuario
            printf("\nInsira a opcao da conversao desejada: ");
            scanf("%d", &opcao_conversao);

            // Teste condicional de acordo com a conversao desejada pelo usuario
            switch (opcao_conversao){
                case 1:{ // Galao -> Litro
                    // Solicitacao do valor a ser convertido
                    printf("Digite o valor em galoes a ser convertido: ");
                    scanf("%f", &valor_input);
                    valor_convertido = valor_input * 3.78541; // Conversao do valor (1 Galao = 3.78541 Litros)
                    printf("\n%.1f Galoes = %.1f Litros\n", valor_input, valor_convertido); // Output da conversao
                    break;
                }
                case 2:{ // Litro -> Galao
                    // Solicitacao do valor a ser convertido
                    printf("Digite o valor em litros a ser convertido: ");
                    scanf("%f", &valor_input);
                    valor_convertido = valor_input * 0.264172; // Conversao do valor (1 Litro = 0.264172 Galoes)
                    printf("\n%.1f Litros = %.1f Galoes\n", valor_input, valor_convertido); // Output da conversao
                    break;
                }
                default:{
                    printf("\nOpcao invalida!\n");
                    break;
                }
            }
            break;
        }
        case 'T':{ // Tempo
            // Menu 2
            printf("\n[1] Segundos -> Horas\n");
            printf("[2] Horas -> Segundos\n");
            printf("[3] Dias -> Anos\n");
            printf("[4] Anos -> Dias\n");

            // Solicitacao da conversao desejada ao usuario
            printf("\nInsira a opcao da conversao desejada: ");
            scanf("%d", &opcao_conversao);

            // Teste condicional de acordo com a conversao desejada pelo usuario
            switch (opcao_conversao){
                case 1:{ // Segundos -> Horas
                    // Solicitacao do valor a ser convertido
                    printf("Digite o valor em segundos a ser convertido: ");
                    scanf("%f", &valor_input);
                    valor_convertido = valor_input / 3600; // Conversao do valor (1 Segundo = 0.000277778 Horas)
                    printf("\n%.1f Segundos = %.1f Horas\n", valor_input, valor_convertido); // Output da conversao
                    break;
                }
                case 2:{ // Horas -> Segundos
                    // Solicitacao do valor a ser convertido
                    printf("Digite o valor em horas a ser convertido: ");
                    scanf("%f", &valor_input);
                    valor_convertido = valor_input * 3600; // Conversao do valor (1 Hora = 3600 Segundos)
                    printf("\n%.1f Horas = %.1f Segundos\n", valor_input, valor_convertido); // Output da conversao
                    break;
                }
                case 3:{ // Dias -> Anos
                    // Solicitacao do valor a ser convertido
                    printf("Digite o valor em dias a ser convertido: ");
                    scanf("%f", &valor_input);
                    valor_convertido = valor_input / 365; // Conversao do valor (1 Dia = 0.00273973 Anos)
                    printf("\n%.1f Dias = %.1f Anos\n", valor_input, valor_convertido); // Output da conversao
                    break;
                }
                case 4:{ // Anos -> Dias
                    // Solicitacao do valor a ser convertido
                    printf("Digite o valor em anos a ser convertido: ");
                    scanf("%f", &valor_input);
                    valor_convertido = valor_input * 365; // Conversao do valor (1 Ano = 365 Dias)
                    printf("\n%.1f Anos = %.1f Dias\n", valor_input, valor_convertido); // Output da conversao
                    break;
                }
                default:{
                    printf("\nOpcao invalida!\n");
                    break;
                }
            }
            break;
        }
        default:{
            printf("\nTipo de conversao invalido!\n");
        }
    }

    return 0;
}