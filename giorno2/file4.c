#include <stdio.h>
int main()

{
    int a;
    int b;
    int c; 

    printf("inserisci il primo numero");
    scanf("%d", &a);
    printf("inserisci il secondo numero");
    scanf("%d", &b);
    printf("inserisci i terzo nunmero");
    scanf("%d", &c);

    int z= a + b;
   
    printf("%d", z);
    

    if (z>c)
    {
        printf("è un triangolo");
    }

    

        else 
        {
            printf("non è un triangolo");
        }

}