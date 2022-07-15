#include <stdio.h>

#ifdef __linux__ 
    #include <unistd.h>
    #define LIMPA "clear"
#elif _WIN32
    #include <windows.h>
    #define LIMPA "cls"
#else
    #error "OS not supported!"
#endif

/*
    4) Faça um programa que simule uma votacao.
    A tela a ser apresentada deverá ser da seguinte forma:

        As opcoes sao:
        1. Candidata Gal Costa
        2. Candidato Jorge Benjor
        3. Candidato Joao Gilberto
        4. Nulo
        5. Branco
        Entre com o seu voto:

    O programa deverá ler os votos dos eleitores e, quando for 
    inserido o número 6, apresentar as seguintes informações:

    a) O número de votos de cada candidato;
    b) A porcentagem de votos nulos;
    c) A porcentagem de votos brancos;
    d) O candidato vencedor.
*/

int main() {
    int voto = 0;
    int votosGC = 0, votosJB = 0, votosJG = 0, nulos = 0, brancos = 0;
    int qtd_votos = 0;

    while(voto != 6) {
        printf("--------- VOTACAO ---------\n\n");
        printf("[1] Candidata Gal Costa\n");
        printf("[2] Candidato Jorge Benjor\n");
        printf("[3] Candidato Joao Gilberto\n");
        printf("[4] Nulo\n");
        printf("[5] Branco\n");

        printf("\nDigite o seu voto: ");
        scanf("%d", &voto);

        if(voto > 0 && voto <= 5){
            switch (voto) {
                case 1:{
                    votosGC++;
                    break;
                }
                case 2:{
                    votosJB++;
                    break;
                }
                case 3:{
                    votosJG++;
                    break;
                }
                case 4:{
                    nulos++;
                    break;
                }
                case 5:{
                    brancos++;
                    break;
                }
                default:{
                    qtd_votos--;
                    break;
                }
            }
            qtd_votos++;
        } else {
            printf("Voto invalido\n");
            qtd_votos--;
            break;
        }

        system(LIMPA);
    }

    if(voto == 6){
        printf("\n\t1_Votos Gal Costa: %d\n", votosGC);
        printf("\t2_Votos Jorge Benjor: %d\n", votosJB);
        printf("\t3_Votos Joao Gilberto: %d\n", votosJG);
        printf("\t4_Porcentagem de votos nulos: %.1f%%\n", (nulos*100.0)/qtd_votos);
        printf("\t5_Porcentagem de votos brancos: %.1f%%\n", (brancos*100.0)/qtd_votos);
  
        if(votosGC > votosJB && votosGC > votosJG){
            printf("\nGal Costa foi a candidata vencedora\n");
        } else if(votosJB > votosJG && votosJB > votosGC){
            printf("\nJorge Benjor foi o candidato vencedor\n");
        } else if(votosJG > votosGC && votosJG > votosJB){
            printf("\nJoao Gilberto foi o candidato vencedor\n");
        }
    }

    return 0;
}