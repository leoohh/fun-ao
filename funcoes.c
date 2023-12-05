#include<stdlib.h>
#include <stdio.h>

 float mediaf (float n1, float n2) {
    float resultado;
    resultado = (n1 + n2) / 2;

    return resultado;
 }

int main ()
{
int primeironumero;
int segundonumero;
int media;


printf ("Digite o primeiro numero:");
scanf ("%d", &primeironumero);



printf ("Digite o segundo numero:");
scanf ("%d", &segundonumero);

media = mediaf (primeironumero, segundonumero);

printf ("Media:%d \n", media);






return 0;

}