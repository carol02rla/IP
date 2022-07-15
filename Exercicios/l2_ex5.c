#include <stdio.h>

/*
5) Faca um programa em C que simula as condicoes para a 
realizacao de um emprestimo bancario. O programa deve ler 
o valor de tres variaveis em reais (float ou double): 
o valor do salario do cliente, o valor do emprestimo e o 
valor da prestacao do emprestimo. Implemente as seguintes 
condicoes:	
- Se o valor da prestacao for maior que 15% do salario, 
exibir: "Emprestimo nao concedido";	
- Se o valor do emprestimo for maior que 10x o salario do 
cliente, exibir: "Emprestimo nao concedido";	
- Se o valor da prestacao for menor que 1% do valor do 
emprestimo, exibir: "Emprestimo nao concedido";	
- Caso as condicoes acima nao se apliquem, exibir "Emprestimo 
concedido".	

Posteriormente, caso o emprestimo seja concedido, faca o 
programa exibir em qual perfil de cobranca de juros que o cliente 
esta:	
- Se o valor da prestacao for menor que 5% do salario do cliente 
ou o valor do emprestimo for menor que 5x o salario do cliente: 
Perfil VIP;	
- Se o valor da prestacao for maior que 5% do salario do cliente 
e menor que 10% do salario ou o valor do emprestimo for entre 5x 
e 8x o salario do cliente: Perfil Normal;	
- Caso as condicoes acima nao se apliquem: Perfil de Risco;
*/

int main(){
    float salario, emprestimo, prestacao;

    printf("Informe o salario do cliente: ");
    scanf("%f", &salario);

    printf("Informe o valor do emprestimo: ");
    scanf("%f", &emprestimo);

    printf("Informe o valor da prestacao mensal pretendida: ");
    scanf("%f", &prestacao);

    if(prestacao > (0.15*salario) || emprestimo > (10*salario) || prestacao < (0.01*emprestimo)){
        printf("Emprestimo nao concedido.\n");
    } else {
        printf("Emprestimo concedido.\n");

        if(prestacao < (0.05*salario) || emprestimo < (5*salario)){
            puts("Perfil VIP.");
        } else {
            if(prestacao > (0.05*salario) && prestacao < (0.1*salario) || emprestimo > (5*salario) && emprestimo < (8*salario)){
                puts("Perfil Normal.");
            } else puts("Perfil de Risco.");
        }
    }

    return 0;
}