#include <stdio.h>
#include <string.h>

/*
    (4 - 3 pontos) Faça um programa em C que armazene o nome de dez países e de 
    suas capitais em arrays. Faça o programa solicitar ao usuário o nome de um
    país e exiba a capital correspondente, finalizando o programa na sequencia.
    Caso o país não seja localizado, exibir uma mensagem de erro e perguntar 
    novamente. 
    Bônus: + 1 ponto se resolver a questão usando structs e um so array.
*/

// Diretivas que armazenam o tamanho das strings e a quantidade de paises
#define TAM_STRINGS 30
#define QTD_PAISES 10

// Uso da estrutura Struct para armazenar mais de uma variavel
struct pais{
    char nome[TAM_STRINGS];
    char capital[TAM_STRINGS];
};

int main(void) {
    struct pais paises[QTD_PAISES];
    char nomePais[TAM_STRINGS];
    int ref;

    // Os nomes dos paises e as respectivas capitais sao inseridas nas strings da struct pais
    strcpy(paises[0].nome, "Alemanha");
    strcpy(paises[0].capital, "Berlim");
    strcpy(paises[1].nome, "Brasil");
    strcpy(paises[1].capital, "Brasilia");
    strcpy(paises[2].nome, "Canada");
    strcpy(paises[2].capital, "Otawa");
    strcpy(paises[3].nome, "Dinamarca");
    strcpy(paises[3].capital, "Copenhagen");
    strcpy(paises[4].nome, "Espanha");
    strcpy(paises[4].capital, "Madrid");
    strcpy(paises[5].nome, "India");
    strcpy(paises[5].capital, "Nova Delhi");
    strcpy(paises[6].nome, "Franca");
    strcpy(paises[6].capital, "Paris");
    strcpy(paises[7].nome, "Mexico");
    strcpy(paises[7].capital, "Cidade do Mexico");
    strcpy(paises[8].nome, "Portugal");
    strcpy(paises[8].capital, "Lisboa");
    strcpy(paises[9].nome, "Russia");
    strcpy(paises[9].capital, "Moscou");

    // Utilizacao da estrutura de repeticao do-while
    do{
        printf("Insira o nome de um pais: ");
        scanf("%s", nomePais);

        for(int i = 0; i < QTD_PAISES; i++){
            if(strcmp(nomePais, paises[i].nome) == 0){
                printf("Sua capital: %s\n", paises[i].capital); 
                // A struct eh acessada para passar a capital referente ao pais inserido pelo usuario
                ref = 1;
                return 0;
            } else ref = 0;
        }
        if(ref == 0){
            // Mensagem de erro gerada se o usuario inserir um nome de pais invalido
            printf("Nome de pais invalido!\n"); 
        }
    } while (ref == 0); // Esse comando sera repetido enquanto o usuario nao digitar um nome de pais valido

    return 0;
}