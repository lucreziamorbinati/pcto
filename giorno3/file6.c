#include <stdio.h>
int main()
 {
    int x;
    int numero;

    printf("inserisci un numero");
    scanf("%d", &numero);
    
    x=2;
   
    while (x < numero)
    {
        if(numero % x == 0)
        {
            printf("il numero non è primo\n");
            break; 
        }
   
        else 
        {
        x = x + 1;
        }
    }
   
   if (numero==x)
   {
        printf("è primo\n");
   }

   return(0);
 }