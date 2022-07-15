#include <stdio.h>

/*
    (Questão 2 - 3 pontos) Considere o tipo de dado tRetangulo definido abaixo:

    typedef struct {
        float base;
        float altura;
    } tRetangulo;

    Faça um programa em C que contenha uma função que receba como argumento uma
    variável do tipo tRetangulo e retorne, através de dois ponteiros para float
    passados como argumento, a área e o perímetro de um retângulo considerando
    os valores contidos na estrutura. A assinatura da funcao pode ser:

    void calculaRetangulo(tRetangulo r, float *area, float *perimetro);
*/

// Definicao do tipo estrutura tRetangulo
typedef struct {
    float base;
    float altura;
} tRetangulo;

// Declaracao da funcao calculaRetangulo com os argumentos solicitados
void calculaRetangulo(tRetangulo r, float *area, float *perimetro) {
    // Calculo da area do retangulo
    *area = r.base * r.altura;
    // Calculo do perimetro do retangulo
    *perimetro = (r.base * 2) + (r.altura * 2);
}

int main(void) {
    /* Declaracao de uma variavel do tipo tRetangulo e de duas variaveis do tipo float, 
       para serem passados por parametro na chamada da funcao calculaRetangulo */
    tRetangulo retangulo;
    float areaRet;
    float perimetroRet;

    // Solicitacao dos valores da base e da altura do retangulo ao usuario
    printf("Digite os valores da base e da altura do retangulo: ");
    scanf("%f %f", &retangulo.base, &retangulo.altura);

    // Chamada da funcao calculaRetangulo com os argumentos necessarios
    calculaRetangulo(retangulo, &areaRet, &perimetroRet);

    // Impressao da area e do perimetro do retangulo calculados na funcao calculaRetangulo com as dimensoes inseridas pelo usuario
    printf("Area do retangulo: %.1f\n", areaRet);
    printf("Perimetro do retangulo: %.1f\n", perimetroRet);

    return 0;
}