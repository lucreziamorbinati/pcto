#include <stdio.h>
int main()
{
    char lettera;
   

    printf("inserisci una lettera, per sapere se è una vocale o una consonante\n");
    scanf("%c", &lettera);

    if (lettera== 'a' || lettera == 'e' || lettera == 'i' || lettera == 'o' || lettera == 'u')
    {
        printf("è una vocale");
    }

    else if (lettera== 'A' || lettera == 'E' || lettera == 'I' || lettera == 'O' || lettera == 'U')
    {
        printf("è una vocale");

    }
    
    
    else 
    {
        printf("è una consonante");
    }
}
