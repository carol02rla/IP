#include <stdio.h>
#include <string.h>

/*
    3) Faça um programa em C que solicite 3 strings ao usuário (com no máximo 30 
    caracteres) e armazena-as em um array apropriado. Depois percorra o array e
    exiba, para cada uma das strings:

        a) A quantidade de vogais;
        b) A quantidade de consoantes;
        c) A quantidade de letras maiúsculas;
        d) A quantidade de letras minúsculas;
        e) Quantos caracteres tem a string;

    Exiba também, considerando as 3 strings:
        f) A primeira string em ordem alfabética;
        g) A última string em ordem alfabética;
        h) A maior string em quantidade de caracteres;
        i) A menor string em quantidade de caracteres.
*/

#define TAM_ARRAY 30
#define QTD_ARRAYS 3

int main() {
    char strings[QTD_ARRAYS][TAM_ARRAY];

    printf("Digite a primeira string: ");
    gets(strings[0]);
    printf("Digite a segunda string: ");
    gets(strings[1]);
    printf("Digite a terceira string: ");
    gets(strings[2]);

    // letras a, b, c, d, e
    for (int i = 0; i < QTD_ARRAYS; i++) {
        int qtd_vogais = 0, qtd_consoantes = 0, qtd_maiusculas = 0, qtd_minusculas = 0, qtd_caracteres = 0;
        for (int j = 0; strings[i][j] != '\0'; j++) {
            qtd_caracteres++;
            if (strings[i][j] == 'a' || strings[i][j] == 'e' || strings[i][j] == 'i' || strings[i][j] == 'o' || strings[i][j] == 'u') {
                qtd_vogais++;
                qtd_minusculas++;
            } else if (strings[i][j] == 'A' || strings[i][j] == 'E' || strings[i][j] == 'I' || strings[i][j] == 'O' || strings[i][j] == 'U') {
                qtd_vogais++;
                qtd_maiusculas++;
            } else if (strings[i][j] >= 'a' && strings[i][j] <= 'z') {
                qtd_consoantes++;
                qtd_minusculas++;
            } else if (strings[i][j] >= 'A' && strings[i][j] <= 'Z') {
                qtd_consoantes++;
                qtd_maiusculas++;
            }
        }
        printf("\n___STRING %d___\n", i+1);
        printf("Quantidade de vogais: %d\n", qtd_vogais);
        printf("Quantidade de consoantes: %d\n", qtd_consoantes);
        printf("Quantidade de letras minusculas: %d\n", qtd_minusculas);
        printf("Quantidade de letras maiusculas: %d\n", qtd_maiusculas);
        printf("Tamanho da string: %d\n", qtd_caracteres);
    }

    // letras f e g
    if(strcmp(strings[0], strings[1]) == 0 && strcmp(strings[0], strings[2]) == 0){
        printf("As strings sao iguais\n");
    } else {
        if(strcmp(strings[0], strings[1]) < 0 && strcmp(strings[0], strings[2]) < 0){
            printf("Primeira string em ordem alfabetica: %s\n", strings[0]);
            if(strcmp(strings[1], strings[2]) < 0){
                printf("Ultima string em ordem alfabetica: %s\n", strings[2]);
            } else printf("Ultima string em ordem alfabetica: %s\n", strings[1]);
        } else if(strcmp(strings[1], strings[0]) < 0 && strcmp(strings[1], strings[2]) < 0){
            printf("Primeira string em ordem alfabetica: %s\n", strings[1]);
            if(strcmp(strings[0], strings[2]) < 0){
                printf("Ultima string em ordem alfabetica: %s\n", strings[2]);
            } else printf("Ultima string em ordem alfabetica: %s\n", strings[0]);
        } else if(strcmp(strings[2], strings[0]) < 0 && strcmp(strings[2], strings[1]) < 0){
            printf("Primeira string em ordem alfabetica: %s\n", strings[2]);
            if(strcmp(strings[0], strings[1]) < 0){
                printf("Ultima string em ordem alfabetica: %s\n", strings[1]);
            } else printf("Ultima string em ordem alfabetica: %s\n", strings[0]);
        }
    }

    // letras h e i
    if(strlen(strings[0]) == strlen(strings[1]) && strlen(strings[0]) == strlen(strings[2])){
        printf("As strings tem mesmo tamanho\n");
    } else {
        if(strlen(strings[0]) < strlen(strings[1]) && strlen(strings[0]) < strlen(strings[2])){
            printf("Menor string: %s com %d caracteres\n", strings[0], strlen(strings[0]));
            if(strlen(strings[1]) < strlen(strings[2])){
                printf("Maior string: %s com %d caracteres\n", strings[2], strlen(strings[2]));
            } else printf("Maior string: %s com %d caracteres\n", strings[1], strlen(strings[1]));
        } else if(strlen(strings[1]) < strlen(strings[0]) && strlen(strings[1]) < strlen(strings[2])){
            printf("Menor string: %s com %d caracteres\n", strings[1], strlen(strings[1]));
            if(strlen(strings[0]) < strlen(strings[2])){
                printf("Maior string: %s com %d caracteres\n", strings[2], strlen(strings[2]));
            } else printf("Maior string: %s com %d caracteres\n", strings[0], strlen(strings[0]));
        } else if(strlen(strings[2]) < strlen(strings[0]) && strlen(strings[2]) < strlen(strings[1])){
            printf("Menor string: %s com %d caracteres\n", strings[2], strlen(strings[2]));
            if(strlen(strings[0]) < strlen(strings[1])){
                printf("Maior string: %s com %d caracteres\n", strings[1], strlen(strings[1]));
            } else printf("Maior string: %s com %d caracteres\n", strings[0], strlen(strings[0]));
        }
    }

    return 0;
}