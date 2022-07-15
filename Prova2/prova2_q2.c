#include <stdio.h>

/*
    (2 - 3 pontos) Faça um programa em C que leia do usuário os dados para 
    preencher três vetores (arrays) de inteiros: Vetor_A (4 elementos), 
    Vetor_B (5 elementos) e Vetor_C (6 elementos); depois de ler os dados, 
    garantindo que só elementos diferentes sejam inseridos nos vetores, 
    exibir na saída padrão:
        a) a união entre os vetores A, B e C (sem elementos repetidos);
        b) a interseção entre os vetores A, B e C;
        c) quais elementos estão apenas no vetor C.
*/

// Diretivas que armazenam o tamanho dos vetores A, B e C
#define TAM_VETOR_A 4
#define TAM_VETOR_B 5
#define TAM_VETOR_C 6

int main(void) {
    // Declaracao dos arrays (vetores) e variaveis
    int vetor_A[TAM_VETOR_A], vetor_B[TAM_VETOR_B], vetor_C[TAM_VETOR_C];
    int elemento, contU = 0, contC = 0;
    int vetorUniao[contU], vetorC_compactado[contC];

    // Solicitacao dos elementos dos vetores ao usuario
    printf("___VETOR A___\n");
    for(int i = 0; i < TAM_VETOR_A; i++){
        printf("Digite um o elemento %d: ", i);
        scanf("%d", &elemento);
        if(i == 0){ // O primeiro elemento inserido eh adicionado ao vetor
            vetor_A[i] = elemento;
        } else { // Verificacao se o valor inserido ja existe no vetor
            for(int j = 0; j < i; j++){
                if(elemento == vetor_A[j]){
                    i--; 
                    /* Se ja existir, o indice i eh decrementado para que o elemento seja solicitado ao 
                       usuario novamente */
                } else {
                    vetor_A[i] = elemento;
                    /* Se nao existir, o elemento eh adicionado ao vetor */
                }
            }
        }
    }
    printf("\n___VETOR B___\n");
    for(int i = 0; i < TAM_VETOR_B; i++){
        printf("Digite um o elemento %d: ", i);
        scanf("%d", &elemento);
        if(i == 0){
            vetor_B[i] = elemento;
        } else {
            for(int j = 0; j < i; j++){
                if(elemento == vetor_B[j]){
                    i--;
                } else {
                    vetor_B[i] = elemento;
                }
            }
        }
    }
    printf("\n___VETOR C___\n");
    for(int i = 0; i < TAM_VETOR_C; i++){
        printf("Digite um o elemento %d: ", i);
        scanf("%d", &elemento);
        if(i == 0){
            vetor_C[i] = elemento;
        } else {
            for(int j = 0; j < i; j++){
                if(elemento == vetor_C[j]){
                    i--;
                } else {
                    vetor_C[i] = elemento;
                }
            }
        }
    }

    // Uniao dos vetores
    // Utiliza-se o for para percorrer o vetor A e inserir seus elementos no vetor Uniao
    for(int i = 0; i < TAM_VETOR_A; i++){
        vetorUniao[i] = vetor_A[i];
    }

    // A variavel contU representa o tamanho do vetor Uniao
    contU = TAM_VETOR_A; // inicializa-se contU com o tamanho do vetor A
    int l = 0;
    // Os fors utilizados verificarao se os elementos do vetor B ja estao no vetor Uniao
    for(int i = 0; i < TAM_VETOR_B; i++){
        l = 0;
        for(int j = 0; j < TAM_VETOR_A; j++){
            if(vetorUniao[j] == vetor_B[i]){
                l++; // Caso o elemento ja esteja no vetor uniao, a variavel l eh incrementada
            }
        }
        /* Se o elemento nao estiver no vetor uniao, l sera igual a 0
           Mas se o elemento ja estiver no vetor uniao, l sera diferente de 0 */
        if(l == 0){ 
            vetorUniao[contU] = vetor_B[i]; // O elemento que nao esta no vetor uniao sera adicinado
            contU++;
        }
    }
    int ref = contU; // inicializa-se a variavel ref com o tamanho atual do vetor uniao
    // Os fors utilizados verificarao se os elementos do vetor C ja estao no vetor Uniao
    for(int i = 0; i < TAM_VETOR_C; i++){
        l = 0;
        for(int j = 0; j < ref; j++){
            if(vetorUniao[j] == vetor_C[i]){
                l++;
            }
        }
        if(l == 0){
            vetorUniao[contU] = vetor_C[i];
            contU++;
        }
    }

    // Impressao do vetor Uniao com a uniao dos vetores A, B e C
    printf("\nUniao dos vetores A, B e C: ");
    for(int i = 0; i < contU; i++){
        printf("%d ", vetorUniao[i]);
    }

    // Intersecao dos vetores
    // Os fors utilizados identificarao os elementos em comum entre os tres vetores
    printf("\n\nIntersecao entre os vetores A, B e C: ");
    for(int i = 0; i < TAM_VETOR_A; i++){
        for(int j = 0; j < TAM_VETOR_B; j++){
            for(int k = 0; k < TAM_VETOR_C; k++){
                if(vetor_A[i] == vetor_B[j] && vetor_A[i] == vetor_C[k]){
                    printf("%d ", vetor_A[i]);
                }
            }
        }
    }

    // Elementos apenas no vetor C
    printf("\n\nElementos apenas no vetor C: ");
    // Os fors utilizados identificarao os elementos que estao no vetor C e nao estao no vetor uniao
    for(int i = 0; i < TAM_VETOR_C; i++){
        for(int j = 0; j < contU; j++){
            if(vetor_C[i] != vetorUniao[j]){
                contC++; // Variavel contC incrementada, essa variavel contem o tamanho do vetor C compactado
                vetorC_compactado[contC] = vetor_C[i];
            }
        }
    }
    // Impressao dos elementos que estao apenas no vetor C
    for(int i = 0; i < (TAM_VETOR_C-contU); i++){
        printf("%d ", vetorC_compactado[i]);
    }

    return 0;
}