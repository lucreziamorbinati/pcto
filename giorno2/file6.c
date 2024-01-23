#include <stdio.h>
int main()
{
    
    int n;
    int t;
    int s;
    printf("quanti anni ha tua nonna\n");
    scanf("%d", &n);
        if(n>=30 && n<50)
        {
            s=5*n/10;
            printf("%d\n", s);
            t=5*n-s;
            printf("%d\n", t);
        }
        else  if (n>=50)
        {
            s= 5*n/100*15;
            printf("%d\n", s);
            t= 5*n/-s;
            printf("%d\n", t);
        }
    return(0);

}