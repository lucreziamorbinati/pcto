#include <stdio.h>
int main()
{
    int b;
    int h;
    int la;
    int lb;
    int perimetro;
    int area;
    
    printf("inserisci la base del triangolo\n");
    scanf("%d", &b);
    
    printf("inserisci l'altezza del triangolo\n");
    scanf("%d", &h);
    
    printf("inserisci un lato del triangolo\n");
    scanf("%d", &la);

    printf("inserisci l'altro lato del triangolo\n");
    scanf("%d", &lb);

    perimetro= b + la + lb;
    printf("%d\n", perimetro);

    area= (b*h)/2;
    printf("%d\n", area);
}


    



