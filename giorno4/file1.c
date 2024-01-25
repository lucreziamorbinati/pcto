#include <stdio.h>
#include <math.h>

int main()
{
   double a;
   double b;
   double c;
   double delta;
   double x1;
   double x2;
   
   printf("scrivi il coefficiente a");
   scanf("%lf", &a);
   printf("scrivi il coefficiente b");
   scanf("%lf", &b);
   printf("scrivi il coefficiente c");
   scanf("%lf", &c);

   delta= b*b- 4*a*c;

  if (a == 0)
  {
    printf("%lf", (-c / b));
  }
   
   else if (delta>0)
   {
    x1=(-b + sqrt(delta))/(2*a);
    x2 = (-b - sqrt(delta))/(2*a);
     printf ("x1 é: %lf\n", x1);
     printf("x2 è: %lf\n", x2);

   }

  else if (delta == 0)
   {
    x1=x2;
    x2= -b/(2*a);
    printf("il valore di x1 e x2 coincide ed è: %lf\n", x2);
   }
  
  else if (delta<0)
  {
    printf("l'equazione è impossibile");
  }
return (0);

}