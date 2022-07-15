#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/*
3) Faça um programa C para calcular o número de lâmpadas 
necessárias para iluminar uma sala. O programa deverá 
inicialmente ler um conjunto de valores: 
potência da lâmpada em watts (int), tipo da sala (char), altura, 
largura e comprimento da sala em metros (float ou double). 
Para cada tipo de cômodo, a quantidade de watts por metro cúbico 
necessária é especificada na Tabela abaixo:

+--------------+--------------------------------+
| Tipo da sala | Potência necessária (watts/m3) |
+--------------+--------------------------------+
| A            |                            8.5 |
| B            |                           11.3 |
| C            |                           15.0 |
| D            |                           18.8 |
| E            |                           22.0 |
+--------------+--------------------------------+

Apresente, depois de lidas as informações, a quantidade de 
lâmpadas com a potência informada necessárias para se iluminar 
a sala considerada (de acordo com o volume da sala calculado). 
A quantidade de lâmpadas deve ser apresentada como um valor 
inteiro - utilize a função apropriada da biblioteca math.h para 
realizar o arredondamento dos valores quando necessário. Caso o 
usuário digite alguma informação inválida, uma mensagem de erro 
deve ser exibida.

Além disso, descreva (em alto nível) o que acontece durante a 
execução do programa, relacionando os eventos que o programa 
realiza aos componentes de um computador (memória, processador, 
barramento etc.) que os dão suporte.
*/

int main(){
    int potencia_lampada;
    char tipo_sala;
    float altura, largura, comprimento;
    float volume_sala, quantidade_lampadas, potencia_total;
    /* variaveis declaradas sao armazenadas na memoria principal */

    /* 
        em seguida, o usuario insere, atraves do dispositivo de 
        entrada, valores que serao associados as posicoes de 
        memoria das variaveis
    */

   /* testes dos desvios condicionais sao realizados pelo processador */
   /* assim como as expressoes matematicas */

    printf("Informe a potencia da lampada (em watts): ");
    scanf("%d", &potencia_lampada);

    if(potencia_lampada <= 0){
        printf("Potencia invalida!\n");
        exit(0);
    }

    printf("Informe o tipo da sala (A, B, C, D ou E): ");
    scanf(" %c", &tipo_sala);

    printf("Informe as dimensoes da sala (em metros):\n");
    printf(" - Altura: ");
    scanf("%f", &altura);
    printf(" - Largura: ");
    scanf("%f", &largura);
    printf(" - Comprimento: ");
    scanf("%f", &comprimento);

    if((altura <= 0) || (largura <= 0) || (comprimento <= 0)){
        printf("Dimensoes invalidas!\n");
        exit(0);
    }

    volume_sala = altura * largura * comprimento;

    switch (tipo_sala){
        case 'a':
        case 'A': {
            potencia_total = volume_sala * 8.5;
            break;
        }
        case 'b':
        case 'B': {
            potencia_total = volume_sala * 11.3;
            break;
        }
        case 'c':
        case 'C': {
            potencia_total = volume_sala * 15.0;
            break;
        }
        case 'd':
        case 'D': {
            potencia_total = volume_sala * 18.8;
            break;
        }
        case 'e':
        case 'E': {
            potencia_total = volume_sala * 22.0;
            break;
        }
        default: {
            printf("Tipo de sala [%c] invalido.", tipo_sala);
            exit(0);
        }
    }

    quantidade_lampadas = potencia_total / potencia_lampada;

    /*
        a ULA realiza as operacoes logicas
    */

    /*
        valores calculados (processados) sao exibidos no 
        dispositivo de saida padrao.
    */

    printf("\nPara uma sala de:\n");
    printf(" - Tipo: %c\n", tipo_sala);
    printf(" - Volume: %.1f metros cubicos\n", volume_sala);
    printf("E com lampadas de potencia %d watts.\n", potencia_lampada);
    printf("Sao necessarias %.f lampadas para iluminar essa sala.\n", ceil(quantidade_lampadas));

    return 0;
}