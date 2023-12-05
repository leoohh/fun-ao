#include<stdlib.h>
#include <stdio.h>


 
 void numerot (int n1) {
       int i;

    for ( i = 0; i <= 10; i++)
    {
       printf ("%d x %d = %d \n", n1, i, n1*i);

       
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
