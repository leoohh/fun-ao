#include<stdlib.h>
#include <stdio.h>

int soma (int n1, int n2) {

   int resultado = n1 + n2;
    return resultado;
}

int subtracao (int n1, int n2) {

   int resultado = n1 - n2;
    return resultado;
}

int multiplicacao (int n1, int n2) {

   int resultado = n1 * n2;
    return resultado;
}


float divisao (float n1, float n2) {

   float resultado = n1 / n2;
    return resultado;
}


int main () {

    int numero;
    int numero2;
    int som;
    int sub;
    float div;
    int mult;

    printf ("Digite um numero:");
    scanf ("%d", &numero);

    printf ("\nDigite outro numero:");
    scanf ("%d", &numero2);

    system ("cls || clear");

    som = soma (numero, numero2);

    sub = subtracao (numero, numero2);

    mult = multiplicacao (numero, numero2);

    div = divisao (numero, numero2);

    printf ("Soma:%d\n", som);
    printf ("Subtracao:%d\n", sub);
    printf ("multipicacao:%d\n", mult);
    printf ("Divisao:%.2f\n", div);







    return 0;
}