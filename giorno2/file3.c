#include <stdio.h>
int main()
{
    int x;

    printf ("inserisci un anno");
    scanf("%d", &x);
   
    if( x%400==0)
    {
    
        printf("è bisestile");
    
        
    }
    else
    {
      if(x%100== 0)
        {
        printf("non è bisestile");
        }
    
        else if(x%4== 0)
        {
         printf("è bisestile");
        }
        else
        {
            printf("non è bisestile");
        }
      
    } 

}
