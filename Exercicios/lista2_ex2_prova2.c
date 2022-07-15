#include <stdio.h>
#include <math.h>

/*
    2) Faça um programa que simule o cálculo do valor das prestações de
    uma compra. Solicite do usuário: valor da compra (em reais, tipo float, valor
    entre 1 e 999999) e o valor do juros ao mês (tipo float, valor entre 0.1 e 2). 
    Calcule o valor das prestações por mês quando o valor dividido de 2 a 10 meses
    e armazene as opções em um array. Solicite os valores até que o usuário insira
    um valor dentro da faixa solicitada. Exiba o valor da prestação em cada cenário,
    o valor total pago e também o juros acumulado de acordo com a quantidade de
    prestações. Abaixo um exemplo de cenário/execução:

    Valor da compra (R$): 960.43
    Juros (% a/m): 1.63 

    Prestações calculadas:
    Em 2 x R$488,05 (Total: R$976,10) (juros de 1.63%)
    Em 3 x R$330,81 (Total: R$992,43) (juros de 3.33%)
    Em 4 x R$252,33 (Total: R$1.009,32) (juros de 5.09%)
    Em 5 x R$204,54 (Total: R$1.022,70) (juros de 6.48%)
    Em 6 x R$172,34 (Total: R$1.034,04) (juros de 7.66%)
    ...
    Em 9 x R$118,70 (Total: R$1.068,30) (juros de 11.23%)
    Em 10 x R$107,97 (Total: R$1.079,70) (juros de 12.41%)
*/

#define QTD_PRESTACOES 9
// Define a diretiva QTD_PRESTACOES com a quantidade de prestacoes

int main() {
    // Declaracao das variaveis e array
    float valorCompra, jurosAM, jurosFinal, total = 0;
    float prestacoes[QTD_PRESTACOES]; // tamanho do array determinado pela quantidade de prestacoes

    // Solicitacao dos valores ao usuario
    do{
        printf("Insira o valor da compra (R$): ");
        scanf("%f", &valorCompra);
    } while (valorCompra < 1 || valorCompra > 999999);
    /* Tratamento de erro - o valor sera solicitado ate que o usuario
       insira um numero dentro da faixa indicada */

    do{
        printf("Digite o valor do juros ao mes (%%): ");
        scanf("%f", &jurosAM);
    } while (jurosAM < 0.1 || jurosAM > 2);
    /* Tratamento de erro - o valor sera solicitado ate que o usuario
       insira um numero dentro da faixa indicada */

    // Calculo das prestacoes e armazenamento em um array
    for(int i = 0; i < QTD_PRESTACOES; i++){
        prestacoes[i] = (valorCompra * pow((1 + (jurosAM/100)), i + 1)) / (i + 2);
    }
    /* prestacao1 = (960.43 * 1.0163^2) / 3;
       prestacao1 = 330,66 */

    // Impressao dos resultados com os valores calculados
    printf("\nValor da compra: R$ %.2f\n", valorCompra);
    printf("Juros: %.2f %% a/m\n", jurosAM);

    printf("\nPrestacoes calculadas:\n");
    for(int i = 0; i < QTD_PRESTACOES; i++){
        total = prestacoes[i] * (i + 2); // calculo do valor total
        jurosFinal = ((total / valorCompra) - 1) * 100; // calculo do juros final
        printf("Em %d x R$ %.2f (Total: R$ %.2f) (juros de %.2f %%)\n", 
                                i+2, prestacoes[i], total, jurosFinal);
    }

    return 0;
}