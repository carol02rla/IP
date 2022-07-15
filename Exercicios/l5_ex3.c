#include <stdio.h>

/*
    3) Altere o seguinte programa para usar while ao invés de for.
    #include<stdio.h>

    int main() {
        int numero, guarda_maior, guarda_menor;
        int i;

        printf("Entre com o 1o numero inteiro: ");
        scanf("%d", &numero);

        guarda_maior=numero;
        guarda_menor=numero;

        for(i=1; i<10; i++)
        {
            printf("\nEntre com o %do numero inteiro: ",i+1);
            scanf("%d", &numero);

            if(numero>guarda_maior)
                guarda_maior=numero;
            else
                if(numero<guarda_menor)
                    guarda_menor=numero;
        }

        printf("\nO menor numero: %d\n", guarda_menor);
        printf("\nO maior numero: %d\n", guarda_maior);
    }
*/

int main() {
    int numero, guarda_maior, guarda_menor;
    int i = 1;

    printf("Entre com o %do numero inteiro: ", i);
    scanf("%d", &numero);

    guarda_maior = numero;
    guarda_menor = numero;

    while(i < 10) {
        printf("\nEntre com o %do numero inteiro: ", i+1);
        scanf("%d", &numero);

        if(numero > guarda_maior)
            guarda_maior = numero;
        else
            if(numero < guarda_menor)
                guarda_menor = numero;
                
        i++;
    }

    printf("\nO menor numero: %d\n", guarda_menor);
    printf("\nO maior numero: %d\n", guarda_maior);

    return 0;
}