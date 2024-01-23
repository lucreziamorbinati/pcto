#include <stdio.h>
int main()
{
    int eta;
    int etb;
    int etc;
    int etd;
    int ete;
    int ettot;
    
    printf("inserisci etàa");
    scanf("%d", &eta);
    printf("inserisci etàb");
    scanf("%d", &etb);
    printf("inserisci etàc");
    scanf("%d", &etc);
    printf("inserisci etàd");
    scanf("%d", &etd);
    printf("inserisci etàe");
    scanf("%d", &ete);
    
    ettot = eta + etb + etc + etd + ete;

    printf("l'età totale è: %d\n", ettot);
    printf("etàa: %d\n", eta);
    printf("etàb: %d\n", etb);
    printf("etàc: %d\n", etc);
    printf("etàd: %d\n", etd);
    printf("etàe: %d\n", ete);
    }