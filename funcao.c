#include<stdlib.h>
#include <stdio.h>

int numero;
 
 void numerot (int n1) {

    if (n1 % 2 == 0)
    {
        printf ("PAR");
    } else {
        printf ("IMPAR");
    }
 } 
 

int main ()
{

int numero;


printf ("Digite um numero:");
scanf ("%d", &numero);


numerot(numero);

return 0;

}