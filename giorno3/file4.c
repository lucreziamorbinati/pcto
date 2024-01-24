#include <stdio.h>
int main()

{
    int x;
    int y;
    int z;
    int la;
    int lb;
    int lc;


    printf("inserisci la misura del primo lato");
    scanf("%d", &x);
    printf("inserisci la misura del secondo lato");
    scanf("%d", &y);
    printf("inserisci la misura del terzo lato");
    scanf("%d", &z);

    la= x+y;
    lb= x+z;
    lc= y+z;
    if (la<z || lb < y || lc< x)
    {
        printf("non è un triangolo!");
    }
   else
   {
        if (x==y&& y==z)
        {
            printf("il triangolo è equilatero");
        }
        else if (x!=y && y!=z)
        {
            printf("il triangolo è scaleno");
        }
        else if ((x==y && y!=z) || (x!=y && y==z) || (x==z&& z!=y))
        {
            printf("il triangolo è isoscele");
        }
   }
    


}