#include <stdio.h>
#include <math.h>

/*
2) Faça um programa em C que solicite 2 números e informe:

 a) A soma dos números;
 b) O produto do primeiro número pelo quadrado do segundo;
 c) O quadrado do primeiro número menos o quadrado do segundo;
 d) A raiz quadrada da soma dos quadrados;
 e) O seno da diferença do primeiro número pelo segundo;
*/

int main(){
    double num1, num2;

    printf("Digite dois numeros: ");
    scanf("%lf %lf", &num1, &num2);

    printf("Soma: %.0lf\n", num1+num2);
    printf("Produto do primeiro numero pelo quadrado do segundo: %.0lf\n", (num1*(pow(num2, 2))));
    printf("Quadrado do primeiro numero menos o quadrado do segundo: %.0lf\n", (pow(num1,2)-pow(num2,2)));
    printf("Raiz quadrada da soma dos quadrados: %.2lf\n", (sqrt(pow(num1,2)+pow(num2,2))));
    printf("Seno da diferenca do primeiro numero pelo segundo: %.2lf\n", (sin(num1-num2)));

    return 0;
}