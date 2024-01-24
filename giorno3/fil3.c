#include <stdio.h>

void somma(int a, int b){
    printf("la somma dei numeri è: %d\n", (a+b));
}

void sottrazione(int a, int b) {
    printf("la sottrazione dei numeri è: %d/n", (a-b));
}

void divisione (int a, int b) {
    printf("la divisione dei numeri è: %d/n", (a/b));
}

voide moltiplicazione(int a, int b) {
    printf("la moltiplicazione dei numeri è: %d/n", (a*b));
}





int main ()

{
    int x;
    int y;
    int operazione;

    printf(" inserisci un numero\n");
    scanf("%d", &x);
    printf("inserisci un numero\n");
    scanf("%d", &y);

    printf("che operazione vuoi fare? + - / * \n");
    printf("premere:\n 1 per la somma\n 2 per la sottrazione\n 3 per la divisione \n 4 per la moltiplicazione\n ")
    scanf("%d", &operazione)
    
    if (operazione== 1)
    {
      somma(x, y);
    }
    
    else if (operazione ==2)
    {
       sottrazione (x, y);
    }

    else if (operazione==3)
    {
        divisione (x, y);
    }
    
    else if (operazione == 4)
    {
        moltiplicazione (x, y);
    }
}