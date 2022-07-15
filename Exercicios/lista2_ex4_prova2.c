#include <stdio.h>
#include <string.h>
#include <ctype.h>

/*
    4) Faça um programa em C que solicite ao usuário uma palavra (string) e 
    depois altere a palavra para que todas as vogais maiúsculas sejam
    substituídas por vogais minúsculas e vice-versa. Exiba a string resultante e
    quantas vogais foram alteradas. Explique nos comentários todas as etapas.
*/

// Definicao do tamanho da string em uma diretiva
#define TAM_STRING 30

int main() {
    // Declaracao das variaveis
    char palavra[TAM_STRING];
    int vogaisAlteradas = 0;

    // Solicitacao da string ao usuario
    printf("Digite uma palavra: ");
    gets(palavra);

    // Utilizacao de um laco for para varrer o array de caracteres
    for(int i = 0; palavra[i] != '\0'; i++) {
        // Utilizacao de uma estrutura condicional para verificar se a palavra tem vogais maiusculas ou minusculas
        if (palavra[i] == 'A' || palavra[i] == 'E' || palavra[i] == 'I' || palavra[i] == 'O' || palavra[i] == 'U') {
            vogaisAlteradas++; // incrementa-se a variavel com a quantidade de vogais alteradas
            palavra[i] = tolower(palavra[i]); // converte a vogal maiuscula em minuscula
        } else if (palavra[i] == 'a' || palavra[i] == 'e' || palavra[i] == 'i' || palavra[i] == 'o' || palavra[i] == 'u') {
            vogaisAlteradas++; // incrementa-se a variavel com a quantidade de vogais alteradas
            palavra[i] = toupper(palavra[i]); // converte a vogal minuscula em maiuscula
        }
    }

    // Impressao da string resultante e a quantidade de vogais alteradas
    printf("\nString resultante: %s\n", palavra);
    printf("Quantidade de vogais alteradas: %d\n", vogaisAlteradas);

    return 0;
}