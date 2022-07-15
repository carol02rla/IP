#include <stdio.h>

/*
    (Questão 3 - 3 pontos) Faça um programa em C que simule o calculo de imposto
    de renda em um país fictício. O imposto é calculado utilizando as seguintes
    informações, solicitadas ao usuário: idade (int), salário anual (float), 
    quantidade de dependentes (int). Os parâmetros são usados para calcular o 
    imposto de acordo com as regras abaixo:

    - Caso a idade seja menor que 21 ou maior que 65, e o salário anual seja menor
    que 80.000,00 o programa exibirá uma mensagem dizendo que o usuário é isento 
    de imposto de renda;
    - Caso a idade seja menor que 21 ou maior que 65 e o salário anual seja maior
    que 80.000,00, o imposto de renda calculado será 15% do salário anual com 
    desconto de 500,00 por dependente (máximo de 10 dependentes ou desconto de 
    5.000,00);
    - Caso a idade seja entre 21 e 65 anos, e o salário anual seja entre 80.000 e
    150.000,00, o imposto de renda calculado será 12% do salário anual, com 
    desconto de 500,00 por dependente (máximo de 10 dependentes ou desconto de 
    5.000,00);
    - Caso a idade seja entre 21 e 65 anos, e o salário anual seja maior que 
    150.000,00, o imposto de renda calculado será 20% do salário anual, com 
    desconto de 600,00 por dependente (máximo de 10 dependentes ou desconto de 
    6.000,00).
*/

int main(void) {
    // Declaracao de variaveis
    int idade, qtd_dependentes;
    float salario;
    float imposto;

    // Solicitacao dos valores de entrada ao usuario
    printf("Informe a sua idade: ");
    scanf("%d", &idade);

    printf("Digite a quantidade de dependentes: ");
    scanf("%d", &qtd_dependentes);

    printf("Insira o valor do seu salario: ");
    scanf("%f", &salario);

    // Testes condicionais
    if(idade < 21 || idade > 65){
        if(salario <= 80000){
            printf("Isento de imposto de renda.\n");
        } else {
            if(qtd_dependentes <= 10){
                imposto = (salario * 0.15) - (500 * qtd_dependentes);
            } else {
                imposto = (salario * 0.15) - 5000;
            }
            printf("Imposto de renda calculado: R$ %.2f\n", imposto);
        }
    } else if(idade > 21 && idade < 65) {
        if(salario > 80000 && salario < 150000){
            if(qtd_dependentes <= 10){
                imposto = (salario * 0.12) - (500 * qtd_dependentes);
            } else {
                imposto = (salario * 0.12) - 5000;
            }
            printf("Imposto de renda calculado: R$ %.2f\n", imposto);
        } else if(salario > 150000){
            if(qtd_dependentes <= 10){
                imposto = (salario * 0.2) - (600 * qtd_dependentes);
            } else {
                imposto = (salario * 0.2) - 6000;
            }
            printf("Imposto de renda calculado: R$ %.2f\n", imposto);
        } else {
            printf("Isento de imposto de renda.\n");
        }
    }

    return 0;
}