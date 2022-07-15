#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/*
    (Questão 1 - 3 pontos +1 ponto) Faça um programa em C que defina um 
    tipo/estrutura para um professor em uma instituição de ensino – tal estrutura
    deverá conter nome (char*), idade (int) e título (char* ou int). Solicite do 
    usuãrio um valor inteiro entre 2 e 100 e aloque dinamicamente o espaço 
    necessário para armazenaro do array com os elementos desta estrutura e faça
    o necessário para que o usuário realize o preenchimento desse array. 
    Bônus (+1 ponto): armazene o conteúdo do array em um arquivo binário e 
    finalmente abra o arquivo e exiba o conteúdo (formatado de acordo com o tipo
    que este armazena).
*/

// Definicao do tipo estrutura
typedef struct {
    char* nome[40];
    int idade;
    int titulo;
} aluno;

// Diretiva que define o nome do arquivo
#define FILE_NAME "arquivo_alunos.bin"

int main(void) {
    // Declaracao das variaveis e de dois ponteiros para o array (um para armazenamento, outro para leitura)
    int qtd_alunos;
    aluno *array_alunos; // aponta para o primeiro elemento do array e nao determina seu tamanho
    aluno *buffer_alunos;

    FILE *arquivo_binario;

    // Solicitacao do tamanho do array ao usuario
    printf("Digite a quantidade de alunos a cadastrar: ");
    scanf("%d", &qtd_alunos);

    if(qtd_alunos < 2 && qtd_alunos > 100){
        printf("Quantidade de alunos invalida!\n");
        exit(1);
    }

    // Alocacao dinamica da memoria
    array_alunos = (aluno*) malloc (qtd_alunos * sizeof(aluno));

    // Solicitacao ao usuario dos elementos do array a ser preenchido
    for(int i = 0; i < qtd_alunos; i++){
        printf("Digite o nome do aluno %d: ", i + 1);
        scanf("%s", array_alunos[i].nome);
        printf("Digite a idade do aluno %d: ", i + 1);
        scanf("%d", &array_alunos[i].idade);
        printf("Digite o titulo do aluno %d: ", i + 1);
        scanf("%d", &array_alunos[i].titulo);
    }

    // O arquivo eh aberto com o modo de abertura "wb" (write binary), o qual abre para escrita um arquivo binario
    arquivo_binario = fopen(FILE_NAME, "wb");

    // Caso haja erro ao abrir o arquivo
    if(arquivo_binario == NULL){
        printf("Erro ao abrir o arquivo!\n");
        exit(1);
    }

    // O conteudo do array_alunos eh armazenado no arquivo_binario
    fwrite(array_alunos, sizeof(aluno), qtd_alunos, arquivo_binario);
    // Fecha o arquivo_binario
    fclose(arquivo_binario);

    // O arquivo eh aberto novamente, desta vez, com o modo de abertura "rb" (read binary), o qual abre para leitura um arquivo binario
    arquivo_binario = fopen(FILE_NAME, "rb");

    // Caso haja erro ao abrir o arquivo
    if(arquivo_binario == NULL){
        printf("Erro ao abrir o arquivo!\n");
        exit(1);
    }

    printf("\nAlunos cadastrados no arquivo: \n");

    // Alocacao dinamica da memoria
    buffer_alunos = (aluno*) malloc (qtd_alunos * sizeof(aluno));

    fread(buffer_alunos, sizeof(aluno), qtd_alunos, arquivo_binario);

    // Exibicao do conteudo armazenado no arquivo_binario
    for(int i = 0; i < qtd_alunos; i++){
        printf("Nome: %s\n", buffer_alunos[i].nome);
        printf("Idade: %d\n", buffer_alunos[i].idade);
        printf("Titulo: %d\n\n", buffer_alunos[i].titulo);
    }

    // O arquivo_binario eh fechado
    fclose(arquivo_binario);

    return 0;
}