#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/*
    (Questão 4 - 3 pontos) Faça um programa em C que defina a seguinte estrutura:
    typedef struct {
        char titulo[80];
        char nome_autor[80];
        int isbn;
        float preco;
    }

    Solicite do usuário um valor inteiro e aloque espaço dinamicamente para
    armazenar esta quantidade de elementos da estrutura. Solicite do usuário 
    valores para preencher cada um dos elementos. Armazene os elementos criados
    em um arquivo binário, e o feche. Depois, abra o arquivo, carregue os elementos
    em um vetor e solicite do usuário um outro valor inteiro; exiba o item cujo 
    índice é este valor.
*/

// Definicao do tipo estrutura
typedef struct {
    char titulo[80];
    char nome_autor[80];
    char isbn[15];
    float preco;
} livro;
/* 
    O tipo da variavel referente ao isbn foi alterado do tipo int para o tipo char, pois 
    como o numero de identificacao eh composto por uma sequencia de algarismos (formando 
    um numero maior que o limite de armazenamento da variavel do tipo int), e como nao 
    sera feita nenhuma operacao aritimetica com esse valor, optou-se por classifica-lo 
    como uma variavel do tipo char. 
*/

// Diretiva que define o nome do arquivo
#define FILE_NAME "arquivo_livros.bin"

int main(void) {
    // Declaracao das variaveis e de dois vetores para armazenamento e leitura dos elementos da estrutura livro
    int qtd_livros;
    int indice_pesquisa;
    livro *vetor_leitura;
    livro *vetor_pesquisa;

    FILE *arquivo_bin;

    // Solicitacao da quantidade de livros a serem cadastrados ao usuario
    printf("Digite a quantidade de livros a serem cadastrados: ");
    scanf("%d", &qtd_livros);

    // Alocacao dinamica da memoria
    vetor_leitura = (livro*) malloc (qtd_livros * sizeof(livro));

    // Solicitacao ao usuario dos elementos do vetor a ser preenchido
    for(int i = 0; i < qtd_livros; i++){
        printf("Digite o titulo do livro %d: ", i + 1);
        scanf(" %[^\n]s", vetor_leitura[i].titulo); // " %[^\n]s" - formatacao para captura da string com espacos
        printf("Digite o nome do autor do livro %d: ", i + 1);
        scanf(" %[^\n]s", vetor_leitura[i].nome_autor);
        printf("Digite o ISBN do livro %d: ", i + 1);
        scanf("%s", vetor_leitura[i].isbn);
        printf("Digite o preco do livro %d: ", i + 1);
        scanf("%f", &vetor_leitura[i].preco);
    }

    // O arquivo eh aberto com o modo de abertura "wb" (write binary), o qual abre para escrita um arquivo binario
    arquivo_bin = fopen(FILE_NAME, "wb");
    // O conteudo do vetor_leitura eh armazenado no arquivo_bin
    fwrite(vetor_leitura, sizeof(livro), qtd_livros, arquivo_bin);
    // O arquivo_bin eh fechado
    fclose(arquivo_bin);

    printf("\nElementos cadastrados no arquivo_livros.bin\n\n");

    // Solicitacao ao usuario do indice a pesquisar no arquivo
    printf("Digite o indice do elemento que deseja pesquisar: ");
    scanf("%d", &indice_pesquisa);

    // O arquivo eh aberto novamente, desta vez, com o modo de abertura "rb" (read binary), o qual abre para leitura um arquivo binario
    fopen(FILE_NAME, "rb");

    // Alocacao dinamica da memoria
    vetor_pesquisa = (livro*) malloc (qtd_livros * sizeof(livro));

    fread(vetor_pesquisa, sizeof(livro), qtd_livros, arquivo_bin);

    // Exibicao do livro referente ao indice solicitado
    printf("\nLIVRO %d\n", indice_pesquisa);
    printf("Titulo: %s\n", vetor_pesquisa[indice_pesquisa-1].titulo);
    printf("Nome do autor: %s\n", vetor_pesquisa[indice_pesquisa-1].nome_autor);
    printf("ISBN: %s\n", vetor_pesquisa[indice_pesquisa-1].isbn);
    printf("Preco: R$ %.2f\n", vetor_pesquisa[indice_pesquisa-1].preco);

    // O arquivo_bin eh fechado
    fclose(arquivo_bin);

    return 0;
}