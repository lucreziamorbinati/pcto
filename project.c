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
void armocromia()
{
    int pelle;
    int occhi;
    int capelli;
    printf("Grazie per tutte le risposte!");
    printf("Ora verrai sottoposto ad un test che determinerà la tua armocromia");
    printf("Indicare il sottotono dell'incarnato digitando i seguenti numeri:\n");
    printf("1: latte\n2: chiaro\n3: olivastro/scuro\n");
    scanf("%d", &pelle);
    printf("Indicare il colore degli occhi digitando i seguenti numeri:\n");
    printf("1: marroni\n2: verdi\n3: azzurri\n");
    scanf("%d", &occhi);
    printf("Indicare il colore dei capelli digitando i seguenti numeri:\n");
    printf("1: neri/castani\n2: biondi\n3: rossi\n");
    scanf("%d", &capelli);
    if (pelle == 1 && occhi == 3 && capelli == 2)
    {
        printf("La tua stagione è: Summer!");
        printf("Tonalità da indossare:\n colori chiari e freddi, tutte le sfumature del rosa, colori non eccessivamente accesi");
    }
    else if (pelle == 3 && occhi == 1 && capelli == 1)
    {
        printf("La tua stagione è: Winter!");
        printf("Tonalità da indossare:\n colori scuri e freddi, come blu notte, viola e verde scuro");
    }
    else if (pelle == 2 && occhi == 2 && capelli == 3 )
    {
        printf("La tua stagione è: Autumn!");
        printf("Tonalità da indossare:\n rosso pomodoro, giallo senape, rosa salmone scuro, colori dorati");
    }
    else
    {
        printf("La tua stagione è: Spring!");
        printf("Tonalità da indossare:\n oro, turchese, tinte di verde, arancione");
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
    int budget;
    char capo[50];
    char femmina[] = "femmina";
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
        scanf("%s", premium);
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
        printf("Sei in possesso di un account premium?\n");
        scanf("%s", risposta);
        if (strcmp(risposta, "si") == 0)
        {
            inizio:
            printf("Verifica delle credenziali: inserisci il tuo numero di autenticazione\n");
            scanf("%d", &verutente);
            if ( verutente = d )
            {
                printf("Benvenuto nel tuo account premium\n");
            }
            else
            {
                printf("Ci dispiace, il numero di autenticazione è errato\n");
                goto inizio;
            }
            armocromia();
            new:
            printf("Perfetto! Ora ti facciamo qualche domanda per conoscerci meglio...\n");
            printf("Qual è il tuo sesso? (maschio/femmina/altro)\n");
            scanf("%s", sesso);
            printf("Grazie! Ora indica la tua età\n");
            scanf("%d", &eta);
            printf("Bene! Ora, indica la tua categoria di stile: casual, elegante, street, tacchi\n");
            scanf("%s", catstile);
            printf("Perfetto! Un'ultima domanda: qual è il tuo budget?\n");
            scanf("%d", &budget);
            printf("Bene! Adesso indica il tipo di capo che vorresti acquistare! (Indica la tua scelta tra scarpe, pantaloni, magliette, felpe, giubbotti, borse, maglieria intima (solo neonati)\n");
            scanf("%s", capo);            
            if (strcmp(sesso, "femmina" ) == 0)
            {
                if ( eta < 6)
                {
                    if (budget < 30)
                    {
                        printf("I brand che ti consigliamo sono:\n");
                        printf("John Lewis\n");
                        printf("Petit Bateau\n");
                        printf("Polarn O.Pyret");
                    }
                    else
                    {
                        printf("I brand che ti consigliamo sono:\n");
                        printf("Paul Smith\n");
                        printf("Infantium Victoria\n");
                        printf("Nui Organics\n");
                        printf("Little Green Radicals\n");
                    }
                }
                else if (eta < 12)
                {
                    printf("I brand che ti consigliamo sono:\n");
                    printf("Little Blueberry Kids\n");
                    printf("QforQuinn");
                    printf("Frugi");
                }
                else if (eta > 12 && eta < 30)
                {
                    if (budget < 240)
                    {
                        if (capo == "scarpe")
                        {
                            if (catstile == "casual" || catstile == "street")
                            {
                                printf("I modelli e i brand che ti consigliamo sono:\n");
                                printf("Jordan brand : Aj1, Aj3, Aj4\n");
                                printf("I modelli Aj1 del momento sono: Aj1 Chicago red, Aj1 UNC, Aj1 purple");
                                printf("I modelli Aj3 del momento sono: Aj3 White Cement, Aj3 Dark Mocha, Aj3 Dark Iris");
                                printf("I modelli Aj4 del momento sono: Aj4 Black Cat, Aj4 blu navy, Aj4 retro UNC");
                                printf("Dottor Martens brand\n");
                                printf("I modelli Dottor Martens del momento sono: Vegan Dottor Martens, High & Low\n ");
                                printf("Veja brand\n");
                                printf("I modelli del momento di Veja sono: V12 Leather White, V12 Leather Blue, V12 Leather Light Blue\n");
                            }
                            else
                            {
                                printf("I modelli e i brand che ti consigliamo sono:\n");
                                printf("Stella McCartney brand\n");
                                printf("I modelli del momento di Stella McCartney sono: Eclipse low-top, Collab Adidas Brand\nTacchi 7 cm ecopelle\n");
                            }
                        }
                        else if (capo == "pantaloni")
                        {
                            printf("I brand che ti consigliamo sono:\n");
                            printf("Even&Odd\n Modelli del momento: Jeans, Palazzo, Zmpa");
                            printf("Anna Field\n");
                            printf("Aware\n");
                            printf("Dickies\n Modelli del momento: Newington, 874, Duck Canvas");
                        }
                        else if (capo == "magliette")
                        {
                            printf("I brand che ti consigliamo sono:\n");
                            printf("Polo Ralph Lauren\nSporty&Rich\nMisbvn\n");
                        }
                        else if (capo == "felpe")
                        {
                            printf("I brand che ti consigliamo sono:\n");
                            printf("Stussy\nFearofGod:essentials\nRalph Lauren\n");
                        }
                        else if(capo == "giubbotti")
                        {
                            printf("I brand e modelli che ti consigliamo sono:\n");
                            printf("North Face: bomber quasi interamente in materiale riciclato\nCarhartt\nSave the duck\n");
                        }
                        else if (capo == "borse")
                        {
                            printf("I brand e modelli che ti consigliamo sono:\n");
                            printf("Lacoste\nLongchamp: linea borse in materiale riciclato\nRalph Lauren\n");
                        }
                    }
                    else 
                    {
                        if (capo == "scarpe")
                        {
                            if (catstile == "casual" || catstile == "street")
                            {
                                printf("I modelli e i brand che ti consigliamo sono:\n");
                                printf("Golden goose\nModelli del momento: Golden Goose Ball Star, Golden Goose Superstar\n");
                                printf("Balenciaga\nModelli del momento: Balenciaga Triple S, Balenciaga Track, Balenciaga Speed\n");
                            }
                            else
                            {
                                printf("I modelli e i brand che ti consigliamo sono:\n");
                                printf("Yves Saint Laurent brand\nModelli del momento: YSL Sandali Opium, YSL Decolleté aperte\n");
                                printf("Casadei\nModelli del momento: Decolleté aperte/chiuse");
                                printf("Gucci\nModelli del momento: Decolleté GG, Decolleté Slingback");
                            }
                        }
                        else if (capo == "pantaloni")
                        {
                            printf("I brand che ti consigliamo sono:\n");
                            printf("Burberry\n");
                            printf("Prada\n");
                            printf("Jacquemus\n");
                        }
                        else if (capo == "magliette")
                        {
                            printf("I brand che ti consigliamo sono:\n");
                            printf("Ralph Lauren\nJacquemus\nMisbvn\n");
                        }
                        else if (capo == "felpe")
                        {
                            printf("I brand che ti consigliamo sono:\n");
                            printf("Supreme\nPalm Angels: modello Logo back, modello Teddy bear\nPrada\n");
                        }
                        else if(capo == "giubbotti")
                        {
                            printf("I brand e modelli che ti consigliamo sono:\n");
                            printf("Moncler: bomber in piuma ecosostenibile\n");
                        }
                        else if (capo == "borse")
                        {
                            printf("I brand e modelli che ti consigliamo sono:\n");
                            printf("Jacquemus: modello Le chiquito\nPrada: modello Re-Nylon\nBottega Veneta\n");
                        }    
                    }
                }
            }
            else if(strcmp(sesso, "maschio") == 0)
            {
                if ( eta < 6)
                {
                    if (budget < 30)
                    {
                        printf("I brand che ti consigliamo sono:\n");
                        printf("John Lewis\n");
                        printf("Petit Bateau\n");
                        printf("Polarn O.Pyret");
                    }
                    else
                    {
                        printf("I brand che ti consigliamo sono:\n");
                        printf("Paul Smith\n");
                        printf("Infantium Victoria\n");
                        printf("Nui Organics\n");
                        printf("Little Green Radicals\n");
                    }
                }
                else if (eta < 12)
                {
                    printf("I brand che ti consigliamo sono:\n");
                    printf("Little Blueberry Kids\n");
                    printf("QforQuinn");
                    printf("Frugi");
                }
                else if (eta > 12 && eta < 60)
                {
                    if (budget < 240)
                    {
                        if (capo == "scarpe")
                        {
                            if (catstile == "casual" || catstile == "street")
                            {
                                printf("I modelli e i brand che ti consigliamo sono:\n");
                                printf("Jordan brand : Aj1, Aj3, Aj4");
                                printf("I modelli Aj1 del momento sono: Aj1 Chicago red, Aj1 UNC, Aj1 purple");
                                printf("I modelli Aj3 del momento sono: Aj3 White Cement, Aj3 Dark Mocha, Aj3 Dark Iris");
                                printf("I modelli Aj4 del momento sono: Aj4 Black Cat, Aj4 blu navy, Aj4 retro UNC");
                                printf("New Balance brand");
                                printf("I modelli New Balance del momento sono: NB 530, NB 550");
                                printf("I modelli NB 530 del momento sono: NB grey, NB black, NB white");
                                printf("I modelli NB 550 del momento sono: NB 550 Red, NB 550 Light blue & Yellow");
                                printf("Adidas Brand");
                                printf("I modelli Adidas del momento sono: NB 530, NB 550");
                                printf("I modelli NB 530 del momento sono: NB grey, NB black, NB white");
                                printf("I modelli NB 550 del momento sono: NB 550 Red, NB 550 Light blue & Yellow");
                            }
                            else
                            {
                                printf("I modelli e i brand che ti consigliamo sono:\n");
                                printf("Loro Piana brand\n");
                                printf("I modelli del momento di Loro Piana sono: Loro Piana loafers, Loro Piana polacchine, Loro Piana tennis shoes\n");
                            }
                        }
                        else if (capo == "pantaloni")
                        {
                            printf("I brand che ti consigliamo sono:\n");
                            printf("Carhartt\nModelli del momento: cargo beige, cargo neri, cargo denim neri");
                            printf("Iuter\nModelli del momento: cargo neri, parachute pants neri");
                            printf("Dolly Noire\nModelli del momento: cargo beige, tuta con stampa rose");
                            printf("Dickies\n Modelli del momento: Newington, 874, Worker Pants");
                        }
                        else if (capo == "magliette")
                        {
                            printf("I brand che ti consigliamo sono:\n");
                            printf("Polo Ralph Lauren: maglia logo semplice o teddy bear\nCarhartt\nDickies: maglietta logo semplice o personalizzata\n");
                        }
                        else if (capo == "felpe")
                        {
                            printf("I brand che ti consigliamo sono:\n");
                            printf("Stussy\nFearofGod:essentials\nPropaganda: modello con logo spinat, modello con logo serpente\n");
                        }
                        else if(capo == "giubbotti")
                        {
                            printf("I brand e modelli che ti consigliamo sono:\n");
                            printf("North Face: piumini quasi interamente in materiale riciclato\nCarhartt\nSave the duck\nDickies: giacche leggere di lana\n");
                        }
                    }
                    else 
                    {
                        if (capo == "scarpe")
                        {
                            if (catstile == "casual" || catstile == "street")
                            {
                                printf("I modelli e i brand che ti consigliamo sono:\n");
                                printf("Golden goose\nModelli del momento: Golden Goose Ball Star, Golden Goose Superstar\n");
                                printf("Balenciaga\nModelli del momento: Balenciaga Triple S, Balenciaga Track, Balenciaga Speed\n");
                                printf("Bape\nModelli del momento: modello Bapesta\n");
                                printf("Off White\n");
                            }
                            else
                            {
                                printf("I modelli e i brand che ti consigliamo sono:\n");
                                printf("Gucci\nModelli del momento: Mocassini\n");
                            }
                        }
                        else if (capo == "pantaloni")
                        {
                            printf("I brand che ti consigliamo sono:\n");
                            printf("Ralph Lauren\n");
                            printf("Roberto Cavalli\n");
                            printf("7forallmankind\n");
                        }
                        else if (capo == "magliette")
                        {
                            printf("I brand che ti consigliamo sono:\n");
                            printf("Saint Barth\nOff White\nPalm Angels\n");
                        }
                        else if (capo == "felpe")
                        {
                            printf("I brand che ti consigliamo sono:\n");
                            printf("Supreme\nPalm Angels: modello logo back, modello Teddy bear\nBape\n");
                        }
                        else if(capo == "giubbotti")
                        {
                            printf("I brand e modelli che ti consigliamo sono:\n");
                            printf("Moncler: bomber in piuma ecosostenibile\nSupreme\nLoro Piana\n");
                        }
                    }
                }
            }
            else
            {
                if ( eta < 6)
                {
                    if (budget < 30)
                    {
                        printf("I brand che ti consigliamo sono:\n");
                        printf("John Lewis\n");
                        printf("Petit Bateau\n");
                        printf("Polarn O.Pyret");
                    }
                    else
                    {
                        printf("I brand che ti consigliamo sono:\n");
                        printf("Paul Smith\n");
                        printf("Infantium Victoria\n");
                        printf("Nui Organics\n");
                        printf("Little Green Radicals\n");
                    }
                }
                else if (eta < 12)
                {
                    printf("I brand che ti consigliamo sono:\n");
                    printf("Little Blueberry Kids\n");
                    printf("QforQuinn");
                    printf("Frugi");
                }
                else if (eta > 12 && eta < 30)
                {
                    if (budget < 240)
                    {
                        if (capo == "scarpe")
                        {
                            if (catstile == "casual" || catstile == "street")
                            {
                                printf("I modelli e i brand che ti consigliamo sono:\n");
                                printf("Jordan brand : Aj1, Aj3, Aj4\n");
                                printf("I modelli Aj1 del momento sono: Aj1 Chicago red, Aj1 UNC, Aj1 purple");
                                printf("I modelli Aj3 del momento sono: Aj3 White Cement, Aj3 Dark Mocha, Aj3 Dark Iris");
                                printf("I modelli Aj4 del momento sono: Aj4 Black Cat, Aj4 blu navy, Aj4 retro UNC");
                                printf("Dottor Martens brand\n");
                                printf("I modelli Dottor Martens del momento sono: Vegan Dottor Martens, High & Low\n ");
                                printf("Veja brand\n");
                                printf("I modelli del momento di Veja sono: V12 Leather White, V12 Leather Blue, V12 Leather Light Blue\n");
                                printf("New Balance brand");
                                printf("I modelli New Balance del momento sono: NB 530, NB 550");
                                printf("I modelli NB 530 del momento sono: NB grey, NB black, NB white");
                                printf("I modelli NB 550 del momento sono: NB 550 Red, NB 550 Light blue & Yellow");
                                printf("Adidas Brand");
                                printf("I modelli Adidas del momento sono: NB 530, NB 550");
                                printf("I modelli NB 530 del momento sono: NB grey, NB black, NB white");
                                printf("I modelli NB 550 del momento sono: NB 550 Red, NB 550 Light blue & Yellow");
                            }
                            else
                            {
                                printf("I modelli e i brand che ti consigliamo sono:\n");
                                printf("Stella McCartney brand\n");
                                printf("I modelli del momento di Stella McCartney sono: Eclipse low-top, Collab Adidas Brand\nTacchi 7 cm ecopelle\n");
                                printf("Loro Piana\nModelli del momento: Loro Piana loafers");

                            }
                        }
                        else if (capo == "pantaloni")
                        {
                            printf("I brand che ti consigliamo sono:\n");
                            printf("Even&Odd\n Modelli del momento: Jeans, Palazzo, Zmpa");
                            printf("Anna Field\n");
                            printf("Aware\n");
                            printf("Dickies\n Modelli del momento: Newington, 874, Duck Canvas");
                            printf("Carhartt\nModelli del momento: cargo beige, cargo neri, cargo denim neri");
                            printf("Iuter\nModelli del momento: cargo neri, parachute pants neri");
                            printf("Dolly Noire\nModelli del momento: cargo beige, tuta con stampa rose");
                        }
                        else if (capo == "magliette")
                        {
                            printf("I brand che ti consigliamo sono:\n");
                            printf("Sporty&Rich\nMisbvn\n");
                            printf("Polo Ralph Lauren: maglia logo semplice o teddy bear\nCarhartt\nDickies: maglietta logo semplice o personalizzata\n");
                        }
                        }
                        else if (capo == "felpe")
                        {
                            printf("I brand che ti consigliamo sono:\n");
                            printf("Stussy\nFearofGod:essentials\nRalph Lauren\nPropaganda: modello con logo spinat, modello con logo serpente\n");
                        }
                        else if(capo == "giubbotti")
                        {
                            printf("I brand e modelli che ti consigliamo sono:\n");
                            printf("North Face: bomber quasi interamente in materiale riciclato\nCarhartt\nSave the duck\nDickies: giacche leggere di lana\n");
                        }
                        else if (capo == "borse")
                        {
                            printf("I brand e modelli che ti consigliamo sono:\n");
                            printf("Lacoste\nLongchamp: linea borse in materiale riciclato\nRalph Lauren\n");
                        }
                    }
                    else 
                    {
                        if (capo == "scarpe")
                        {
                            if (catstile == "casual" || catstile == "street")
                            {
                                printf("I modelli e i brand che ti consigliamo sono:\n");
                                printf("Golden goose\nModelli del momento: Golden Goose Ball Star, Golden Goose Superstar\n");
                                printf("Balenciaga\nModelli del momento: Balenciaga Triple S, Balenciaga Track, Balenciaga Speed\n");
                                printf("Bape\nModelli del momento: modello Bapesta\n");
                                printf("Off White\n");
                            }
                            else
                            {
                                printf("I modelli e i brand che ti consigliamo sono:\n");
                                printf("Yves Saint Laurent brand\nModelli del momento: YSL Sandali Opium, YSL Decolleté aperte\n");
                                printf("Casadei\nModelli del momento: Decolleté aperte/chiuse");
                                printf("Gucci\nModelli del momento: Decolleté GG, Decolleté Slingback");
                                printf("Gucci\nModelli del momento: Mocassini\n");

                            }
                        }
                        else if (capo == "pantaloni")
                        {
                            printf("I brand che ti consigliamo sono:\n");
                            printf("Burberry\n");
                            printf("Prada\n");
                            printf("Jacquemus\n");
                            printf("Ralph Lauren\n");
                            printf("Roberto Cavalli\n");
                            printf("7forallmankind\n");
                        }
                        else if (capo == "magliette")
                        {
                            printf("I brand che ti consigliamo sono:\n");
                            printf("Ralph Lauren\nJacquemus\nMisbvn\n");
                            printf("Saint Barth\nOff White\nPalm Angels\n");
                        }
                        else if (capo == "felpe")
                        {
                            printf("I brand che ti consigliamo sono:\n");
                            printf("Supreme\nPalm Angels: modello Logo back, modello Teddy bear\nPrada\n");
                        }
                        else if(capo == "giubbotti")
                        {
                            printf("I brand e modelli che ti consigliamo sono:\n");
                            printf("Moncler: bomber in piuma ecosostenibile\nSupreme\nLoro Piana\n");
                        }
                        else if (capo == "borse")
                        {
                            printf("I brand e modelli che ti consigliamo sono:\n");
                            printf("Jacquemus: modello Le chiquito\nPrada: modello Re-Nylon\nBottega Veneta\n");
                        }   
                    }
                }
        }
        else
        {
            goto new;
        }
        break;
    }
            
return (0);
}


