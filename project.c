#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
void accesso()
{
    char utente[50];
    char password[50];
    int i;
    printf("Inserisci le tue credenziali per effettuare l'accesso al sito\n");
    printf("Nome utente:\n");
    scanf("%s", utente);
    printf("Password:\n");
    scanf("%s", password);
    while ( i < 100)
    {
        if (strcmp(utente, "lucrezia.morbinati") == 0 && strcmp(password, "lucreziabefashion") == 0)
        {
            printf("Verifica autenticazione...\n");
            for (i = 1; i < 100000; i++);
            printf("Accesso verificato!\n");
            printf("Bentornat* nel nostro sito!");
            break;
        }
        else
        {
            printf("Ops! Errore nell'autenticazione. Riprova a inserire le tue credenziali\n Inserisci di nuovo le tue credenziali\n");
            printf("Nome utente:\n");
            scanf("%s", utente);
            printf("Password:\n");
            scanf("%s", password);
            if (strcmp(utente, "lucrezia.morbinati") == 0 && strcmp(password, "lucreziabefashion") == 0)
            {
                printf("Verifica autenticazione...");
                printf("Accesso verificato!\n");
                printf("Bentornat* nel nostro sito!");
            }
            else
            {
                printf("Accesso negato!");
            }
            i++;
            break;
        }
    }
}
int main()

{
    char inizioregistrazione[50];
    char inizioregistrazione2[] = "sono già registrato";
    char registrazione1[50];
    char registrazione2[50];
    char premium[2];
    int d;
    char acquirenteovenditore[50];
    char risposta[2];
    int verutente;
    char sesso[50];
    int eta;
    char catstile[50];
    char budget[50];
    char capo[50];
    printf("Ciao! Ti diamo il benvenuto nel nostro sito. Sei già registrato o vuoi iniziare la registrazione?\n");
    scanf("%[^\n]*s", inizioregistrazione);
    if (strcmp(inizioregistrazione, inizioregistrazione2) == 0)
    {
        accesso();
    }
    else
    {
        printf("Bene! Effettua la tua registrazione inserendo il tuo nome utente e la tua password\n");
        printf("Digita il tuo nome utente (max 50 caratteri)\n");
        scanf("%s", registrazione1);
        printf("Digita la tua password (max 50 caratteri)\n");
        scanf("%s", registrazione2);
        printf("Accesso confermato! Benvenuto su Befashion!\n");
        printf("Desideri acquistare un account premium? Il costo è di 3,99 euro\nDigita si/no\n");
        scanf("%c", premium);
        if (strcmp(premium, "si") == 0)
        {
            srand(time(NULL));
            d = rand() % 1000000;
            printf("Ok! Il tuo codice segreto di autenticazione è: %d\n", rand() % 1000000);
        }
        else
        {
            printf("Ok! Usufruirai allora della versione gratuita\n");
        }
    }
    printf("Sei un acquirente o un venditore?\n");
    scanf("%s", acquirenteovenditore);
    while (strcmp(acquirenteovenditore, "acquirente") == 0)
    {
        printf("Sei in possesso di un account premium?\n);
        scanf("%c", risposta);
        if (strcmp(risposta, "si") == 0)
        {
            inizio:
            printf("Verifica delle credenziali: inserisci il tuo numero di autenticazione\n");
            scanf("%d", verutente);
            if ( verutente = d )
            {
                printf("Benvenuto nel tuo account premium\n");
            }
            else
            {
                printf("Ci dispiace, il numero di autenticazione è errato\n");
                goto inizio;
            }
            printf("Perfetto! Ora ti facciamo qualche domanda per conoscerci meglio...\n");
            printf("Qual è il tuo sesso? (maschio/femmina/altro)\n");
            scanf("%s", sesso);
            printf("Grazie! Ora indica la tua età\n");
            scanf("%d", &eta);
            printf("Bene! Ora, indica la tua categoria di stile: casual, elegante, sportivo, street, punk, vintage\n");
            scanf("%s", catstile);
            printf("Perfetto! Un'ultima domanda: qual è il tuo budget?\n");
            scanf("%s", budget);
            printf("Bene! Adesso indica il tipo di capo che vorresti acquistare!\n");
            scanf(%s", capo);
            while (strcmp(sesso, "maschio") == 0)
                {
                    if
                }   
            while (strcmp(sesso, "femmina") == 0)
                {
                printf("");
                 }


    }

    


return (0);
}

