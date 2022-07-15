#include <stdio.h>

/*
4) Escreva um programa em C que leia um valor real que represente uma 
temperatura em Farenheit. Converta o valor para Celsius e exiba as seguintes 
mensagens de acordo com a temperatura convertida:
- Temperatura abaixo de zero - Exibir "Clima congelante"
- Temperatura entre 0 e 10 - Exibir "Clima muito frio"
- Temperatura entre 10 e 19 - Exibir "Clima frio"
- Temperatura entre 20 e 28 - Exibir "Clima normal"
- Tempratura entre 29 e 40 - Exibir "Clima quente"
- Temperatura maior que 41 - Exibir "Clima muito quente"
*/

int main(){
    float fahrenheit, celsius;

    printf("Informe a temperatura em graus Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = ((fahrenheit - 32) * 5.0) / 9.0;

    if(celsius < 0.0){
        printf("Temperatura: %.1f C - Clima congelante!\n", celsius);
    } else if (celsius >= 0.0 && celsius <= 10.0){
        printf("Temperatura: %.1f C - Clima muito frio!\n", celsius);
    } else if (celsius > 10.0 && celsius <= 20.0){
        printf("Temperatura: %.1f C - Clima frio!\n", celsius);
    } else if (celsius > 20.0 && celsius <= 28.0){
        printf("Temperatura: %.1f C - Clima normal!\n", celsius);
    } else if (celsius > 28.0 && celsius <= 40.0){
        printf("Temperatura: %.1f C - Clima quente!\n", celsius);
    } else if (celsius > 40.0){
        printf("Temperatura: %.1f C - Clima muito quente!\n", celsius);
    }

    return 0;
}