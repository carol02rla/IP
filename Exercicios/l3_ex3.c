#include <stdio.h>

/*
3) Faça um programa em C que leia o código (int) associado a um 
determinado produto e exiba sua classificação. Utilize a seguinte 
tabela como referência:

1 - Alimento não-perecível
2,3 ou 4 - Alimento perecível
5 ou 6 - Vestuário
7 - Higiene Pessoal
8 até 15 - Limpeza e Utensílios Domésticos
Qualquer outro código - Código inválido
*/

int main(){
    int codigo_produto;

    printf("Digite o codigo do produto: ");
    scanf("%d", &codigo_produto);

    switch (codigo_produto){
        case 1:{
            printf("[%d] Alimento nao-perecivel.\n", codigo_produto);
            break;
        }
        case 2:
        case 3:
        case 4:{
            printf("[%d] Alimento perecivel.\n", codigo_produto);
            break;
        }
        case 5:
        case 6:{
            printf("[%d] Vestuario.\n", codigo_produto);
            break;
        }
        case 7:{
            printf("[%d] Higiene Pessoal.\n", codigo_produto);
            break;
        }
        case 8 ... 15:{ // Clang
            printf("[%d] Limpeza e Utensilios Domesticos.\n", codigo_produto);
            break;
        }
        default:{
            printf("[%d] Codigo invalido.\n", codigo_produto);
            break;
        }
    }

    return 0;
}