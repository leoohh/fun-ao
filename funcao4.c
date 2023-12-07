#include <stdlib.h>
#include <stdio.h>

int metros (int n1){

    float resultado;

resultado = n1 * 100;

return resultado;

}


int main () {

    int numero;
    float metro;

    printf ("Digite um numero:");
    scanf ("%d", &numero);



metro = metros (numero);

printf ("Centimetros:%.2f cm", metro);


    return 0;
}