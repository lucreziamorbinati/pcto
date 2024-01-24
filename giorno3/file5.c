#include <stdio.h>
int main()

{
    int x= 1969;
    int y;
    int z;
    int s;

    printf("INSERISCI IL TUO ANNO DI NASCITA");
    scanf("%d", &y);
    
    z= y-x;
    s= x-y;

    if (y==x)
    {
        printf("SEI NATO NELLO STESSO ANNO IN CUI L'UOMO E' ANDATO SULLA LUNA!!");
    }
    else if(y>x)
    {
        
        printf("SEI NATO %d ANNI DOPO", z);

    }
    else if(x>y)
    {
        printf("SEI NATO %d ANNI DOPO", s);
    }
}