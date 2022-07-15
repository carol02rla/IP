#include <stdio.h>

/*
    1) Um determinado material radioativo perde metade de sua massa
    a cada 50 segundos. Faça um programa em C que pergunte a massa inicial (float),
    em gramas, e calcule o tempo necessário para que essa massa do material se 
    torne menor que 0,5 grama. O programa em C deve apresentar a massa inicial, a 
    massa final e o tempo em segundos. Explique nos comentários como funciona
    a estrutura de repetição utilizada.
*/

#define MEIA_VIDA 50
#define MASSA_LIMITE 0.5

int main() {
    // Declaracao de variaveis
    float massaInicial, massaFinal;
    int tempo, qtdDecaimentos = 0;

    // Solicitacao da massa inicial ao usuario
    printf("Informe a massa inicial do material radioativo (em gramas): ");
    scanf("%f", &massaInicial);

    /* Inicialmente, a massa final recebe o valor da massa inicial
       Esse valor sera decrementado ao longo do codigo */
    massaFinal = massaInicial;

    // Uso da estrutura de repeticao while
    /* Enquanto a massa for maior ou igual a 0.5 g, 
       a massa final continuara a ser decrementada */
    while(massaFinal >= MASSA_LIMITE){
        massaFinal = massaFinal / 2; // a cada decaimento a massa se reduz a metade
        qtdDecaimentos++; // variavel que contabiliza a quantidade de decaimentos
    }

    /* O tempo sera calculado a partir do tempo de meia vida, definido na diretiva 
       como 50 s, e da quatidade de decaimentos, que foi contabilizado pela quantidade 
       de vezes em que o material radioativo reduziu sua massa a metade ate se tornar 
       menor que 0.5 g */
    tempo = MEIA_VIDA * qtdDecaimentos;

    // Impressao dos resultados dos valores encontrados
    printf("\nMassa Inicial: %.1f g", massaInicial);
    printf("\nMassa Final: %.1f g", massaFinal);
    printf("\nTempo: %d s", tempo);

    return 0;
}