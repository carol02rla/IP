#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/*
    (Questão 3 - 3 pontos + 1 ponto) Faça um programa em que tenha uma função que 
    receba dois valores inteiros m e n; use esses valores para criar um array de
    n strings com m caracteres aleatórios - o array resultante deverá ser o valor
    de retorno da função. Bonus (+1 ponto): faça o programa armazenar a saída da 
    funcao em um arquivo de texto.
*/

// Declaracao da funcao para criar array de strings
char** criaStrings(int n, int m){
    char **array = (char**) malloc(n);
    for(int i = 0; i < n; i++){
        array[i] = (char*) malloc(m + 1);
        for(int j = 0; j < m; j++){
            array[i][j] = 'a' + rand() % 26;
        }
        array[i][m] = '\0';
    }
    return array;
}
/* 
    A funcao foi declarada com o tipo char** para que fosse retornado o array com todas 
    as strings armazenadas, visto que o array resultante se configura como um array 
    bidimensional. 
*/

// Diretiva que define o nome do arquivo
#define FILE_NAME "arquivo_strings.txt"

int main(void) {
    // Declaracao das variaveis e ponteiros necessarios
    char **strings;
    int qtd_strings = 0;
    int tam_strings = 0;

    FILE *arquivo;

    // O arquivo eh aberto com o modo de abertura "w", o qual abre o arquivo para escrita
    arquivo = fopen(FILE_NAME, "w");

    // Solicitacao da quantidadede strings e do tamanho das strings ao usuário
    printf("Digite a quantidade de strings que deseja escrever no arquivo: ");
    scanf("%d", &qtd_strings);
    printf("Digite a quantidade de caracteres das strings: ");
    scanf("%d", &tam_strings);

    /* A variavel ponteiro para ponteiro do tipo char strings recebe o retorno da funcao 
       criaStrings, pois essa funcao eh do tipo char** e retorna um array bidimensional */
    strings = criaStrings(qtd_strings, tam_strings);

    // Por meio do laço for, o array eh percorrido e as strings sao armazenadas no arquivo
    for(int i = 0; i < qtd_strings; i++){
        fprintf(arquivo, "%s\n", strings[i]);
    }

    // O arquivo eh fechado
    fclose(arquivo);

    // O arquivo eh aberto com o modo de abertura "r", o qual abre o arquivo para leitura
    fopen(FILE_NAME, "r");

    // Exibicao do conteudo do arquivo
    printf("Conteudo gerado: \n");

    // O laço while percorre os caracteres do arquivo
    /* feof aponta para o final do arquivo, a condicao !feof (NOT feof) estabelece que enquanto 
       nao tiver chegado ao fim do arquivo, a instrucao deve ser repetida */
    while(!feof(arquivo)){
        char c = fgetc(arquivo);
        printf("%c", c); // impressao de cada caractere
    }

    // O arquivo eh fechado
    fclose(arquivo);
    
    return 0;
}