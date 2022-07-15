#include <stdio.h>

/*
4) O cardápio de uma lanchonete é dado pela tabela abaixo:
Código | Produto         | Preço Unitário (R$) 
   100 | Cachorro quente | R$ 3,70
   101 | Bauru Simples   | R$ 4,30
   102 | Bauru com ovo   | R$ 4,60
   103 | Hamburguer      | R$ 4,40
   104 | Cheeseburguer   | R$ 4,50
   105 | Refrigerante    | R$ 3,00

Faça um programa em C que leia o código do item adquirido pelo 
consumidor, a quantidade, calculando e mostrando o valor a pagar. 
Não será necessário exibir o produto e o valor, somente o valor 
final.
*/

int main(){
    int codigo, quantidade;
    float valor;

    puts("-----------------CARDAPIO-----------------");
    puts("Codigo |     Produto     | Preco Unitario");
    puts("   100 | Cachorro quente | R$ 3,70");
    puts("   101 | Bauru simples   | R$ 4,30");
    puts("   102 | Bauru com ovo   | R$ 4,60");
    puts("   103 | Hamburguer      | R$ 4,40");
    puts("   104 | Cheeseburguer   | R$ 4,50");
    puts("   105 | Refrigerante    | R$ 3,00");

    printf("Insira o codigo do pedido: ");
    scanf("%d", &codigo);
    printf("Digite a quantidade desejada: ");
    scanf("%d", &quantidade);

    switch(codigo){
        case 100:{
            printf("Item [%d]: cachorro quente.\n", codigo);
            valor = 3.70 * quantidade;
            break;
        }
        case 101:{
            printf("Item [%d]: bauru simples.\n", codigo);
            valor = 4.30 * quantidade;
            break;
        }
        case 102:{
            printf("Item [%d]: bauru com ovo.\n", codigo);
            valor = 4.60 * quantidade;
            break;
        }
        case 103:{
            printf("Item [%d]: hamburguer.\n", codigo);
            valor = 4.40 * quantidade;
            break;
        }
        case 104:{
            printf("Item [%d]: cheeseburguer.\n", codigo);
            valor = 4.50 * quantidade;
            break;
        }
        case 105:{
            printf("Item [%d]: refrigerante.\n", codigo);
            valor = 3.00 * quantidade;
            break;
        }
        default:{
            puts("Codigo invalido.");
            break;
        }
    }

    printf("Valor total: R$ %.2f\n", valor);

    return 0;
}