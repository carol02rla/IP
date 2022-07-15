#include <stdio.h>
#include <string.h>
#include <ctype.h>

/*
    (3 - 2 pontos) Faça um programa em C que solicite ao usuário três palavras 
    (strings) e depois solicite um caractere ao usuário para perguntar se ele quer
    exibir as strings de acordo com o menu: 
        a) em ordem crescente de quantidade de caracteres
        b) em ordem alfabética
        c) com as letras todas em maiúsculo
        d) com seus caracteres em ordem reversa
*/

// Diretivas que armazenam o tamanho das strings e a quantidade de palavras
#define TAM_STRING 30
#define QTD_PALAVRAS 3

int main(void) {
    // Declaracao dos arrays (strings) e variaveis
    char palavras[QTD_PALAVRAS][TAM_STRING];
    char rev_palavras[QTD_PALAVRAS][TAM_STRING];
    char opcao;

    // Solicitacao das palavras ao usuario
    printf("Digite a palavra 1: ");
    scanf("%s", palavras[0]);
    printf("Digite a palavra 2: ");
    scanf("%s", palavras[1]);
    printf("Digite a palavra 3: ");
    scanf("%s", palavras[2]);

    // Exibicao do menu
    printf("\nComo voce gostaria de exibir as strings: \n");
    printf("[a] Em ordem crescente em quantidade de caracteres\n");
    printf("[b] Em ordem alfabetica\n");
    printf("[c] Com as letras todas em maiusculo\n");
    printf("[d] Com seus caracteres em ordem reversa\n");
    printf("Digite a sua opcao: ");
    scanf("%c", &opcao);
    scanf("%c"); // remove o ENTER da leitura da opcao do usuario pelo scanf

    /* Uso da estrutura condicional switch para determinar a impressao das 
       palavras de acordo com a opcao escolhida pelo usuario */
    switch(opcao){
        // Em ordem crescente em quantidade de caracteres
        case 'a':{
            printf("\nPalavras em ordem crescente em quantidade de caracteres: ");
            // Utilizacao de ifs e elses para imprimir as strings de acordo com a quantidade de caracteres
            if(strlen(palavras[0]) < strlen(palavras[1]) && strlen(palavras[0]) < strlen(palavras[2])){
                // Palavra1 < Palavra2 e Palavra3
                printf("%s\n", palavras[0]);
                if(strlen(palavras[1]) < strlen(palavras[2])){ 
                    printf("%s\n%s\n", palavras[1], palavras[2]); // Palavra2 < Palavra3
                } else printf("%s\n%s\n", palavras[2], palavras[1]); // Palavra3 < Palavra2
            } else if (strlen(palavras[1]) < strlen(palavras[0]) && strlen(palavras[1]) < strlen(palavras[2])){
                // Palavra2 < Palavra1 e Palavra3
                printf("%s\n", palavras[1]);
                if(strlen(palavras[0]) < strlen(palavras[2])){
                    printf("%s\n%s\n", palavras[0], palavras[2]); // Palavra1 < Palavra2
                } else printf("%s\n%s\n", palavras[2], palavras[0]); // Palavra2 < Palavra1
            } else if (strlen(palavras[2]) < strlen(palavras[0]) && strlen(palavras[2]) < strlen(palavras[1])){
                // Palavra3 < Palavra1 e Palavra2
                printf("%s\n", palavras[2]);
                if(strlen(palavras[0]) < strlen(palavras[1])){
                    printf("%s\n%s\n", palavras[0], palavras[1]); // Palavra1 < Palavra2
                } else printf("%s\n%s\n", palavras[1], palavras[0]); // Palavra2 < Palavra1
            }
            break;
        }
        // Em ordem alfabetica
        case 'b':{
            // Utilizacao de ifs e elses para imprimir as strings de acordo com a ordem alfabetica
            printf("\nPalavras em ordem alfabetica:\n");
            if(strcmp(palavras[0], palavras[1]) < 0 && strcmp(palavras[0], palavras[2]) < 0){
                printf("%s\n", palavras[0]);
                if(strcmp(palavras[1], palavras[2]) < 0){
                    printf("%s\n%s\n", palavras[1], palavras[2]); // Palavra1, Palavra2, Palavra3
                } else printf("%s\n%s\n", palavras[2], palavras[1]); // Palavra1, Palavra3, Palavra2
            } else if(strcmp(palavras[1], palavras[0]) < 0 && strcmp(palavras[1], palavras[2]) < 0){
                printf("%s\n", palavras[1]);
                if(strcmp(palavras[0], palavras[2]) < 0){
                    printf("%s\n%s\n", palavras[0], palavras[2]); // Palavra2, Palavra1, Palavra3
                } else printf("%s\n%s\n", palavras[2], palavras[0]); // Palavra2, Palavra3, Palavra1
            } else if(strcmp(palavras[2], palavras[0]) < 0 && strcmp(palavras[2], palavras[1]) < 0){
                printf("%s\n", palavras[2]);
                if(strcmp(palavras[0], palavras[1]) < 0){
                    printf("%s\n%s\n", palavras[0], palavras[1]); // Palavra3, Palavra1, Palavra2
                } else printf("%s\n%s\n", palavras[1], palavras[0]); // Palavra3, Palavra2, Palavra1
            }
            break;
        }
        // Com as letras todas em maiusculo
        case 'c':{
            // Utilizacao do for para varrer a string convertendo os caracteres em caracteres maiusculos
            printf("\nPalavras com todos os caracteres maiusculos: \n");
            for(int i = 0; i < QTD_PALAVRAS; i++){
                for(int j = 0; j < TAM_STRING; j++){
                    palavras[i][j] = toupper(palavras[i][j]);
                    // Funcao toupper da biblioteca ctype.h converte os caracteres em maiusculos
                }
            }
            printf("%s\n%s\n%s\n", palavras[0], palavras[1], palavras[2]);
            break;
        }
        // Com seus caracteres em ordem reversa
        case 'd':{
            /* Utilizacao do for para percorrer os caracteres das palavras, do ultimo indice ate o 
               primeiro, e determinar os caracteres da string rev_palavras como o reverso da palavra 
               original. */
            printf("\nPalavras com seus caracteres em ordem reversa: \n");
            for(int i = 0; i < QTD_PALAVRAS; i++){
                for(int j = strlen(palavras[i]) - 1; j >= i; j--){
                    rev_palavras[i][strlen(palavras[i])-1-j] = palavras[i][j];
                    printf("%c", rev_palavras[i][strlen(palavras[i])-1-j]);
                }
                printf("\n");
            }
            break;
        }
        default:{ // Tratamento de erro - caso o usuario digite uma letra que nao esta no menu
            printf("Opcao invalida!\n");
            return 0;
        }
    }

    return 0;
}