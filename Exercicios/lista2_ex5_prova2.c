#include <stdio.h>

/*
    5) Faça um programa em C que solicite ao usuário o nome (string)
    e a média (float) para cinco alunos representados no programa, armazenando
    os valores em um array. Exiba posteriormente qual o aluno com a menor e 
    maior média e qual a média geral da turma. 
*/

#define TAM_NOME 30
#define QTD_ALUNOS 5

struct aluno {
    char nome[TAM_NOME];
    float media;
};

int main() {
    struct aluno alunos[QTD_ALUNOS];
    float somaMedias = 0, menor, maior;
    int iMenor, iMaior;

    for(int i = 0; i < QTD_ALUNOS; i++){
        printf("__ALUNO %d__\n", i+1);
        printf("Nome: ");
        scanf("%s", alunos[i].nome);
        printf("Nota: ");
        scanf("%f", &alunos[i].media);

        somaMedias += alunos[i].media;

        if(i == 0){
            maior = alunos[i].media;
            menor = alunos[i].media;
        } else {
            if(alunos[i].media < menor){
                menor = alunos[i].media;
                iMenor = i + 1;
            } else if (alunos[i].media > maior) {
                maior = alunos[i].media;
                iMaior = i + 1;
            }
        }
    }

    printf("\nAluno %d de media %.1f tem maior media\n", iMaior, maior);
    printf("Aluno %d de media %.1f tem menor media\n", iMenor, menor);
    printf("Media da turma: %.2f\n", somaMedias/QTD_ALUNOS);

    return 0;
}