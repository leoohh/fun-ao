#include <stdlib.h>
#include <stdio.h>

 void par (int numero[]){
int i, pares = 0;

     for ( i = 0; i < 6; i++)
     {
       
     
    if (numero[i] % 2 == 0)
    {
        pares++;
   
     }
     }
     printf ("Quantidade de pares:%d\n", pares );

 }

 void impar (int numero []){
    int i, impares = 0;

    for ( i = 0; i < 6; i++)
    {
       
    if (numero[i] % 2 != 0)
    {
      
        impares++;
    }
    }
    
    
   printf ("Quantidade de impares:%d\n", impares );
 
    }

 



int main () {

    int i;
    int numero[6];
   

for ( i = 0; i < 6 ; i++)
{
   printf ("Digite um numero:");
   scanf ("%d", &numero[i]);
}


par (numero);
impar (numero);







    return 0;
}