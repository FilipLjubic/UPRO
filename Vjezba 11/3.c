/*

S tipkovnice učitati niz znakova (string) koji zajedno s eventualno učitanom oznakom novog reda sigurno neće biti dulji od 8 znakova.

Ako je u niz učitana i oznaka novog retka, izbaciti je iz učitanog niza. 
Ispisati niz znakova.

Ako se u nizu nalazi ispravan heksadekadski broj (znamenke tog broja mogu biti samo znamenkama 0-9 ili velikim slovima A-F) izračunati i
 ispisati ekvivalentan dekadski broj (po tipu unsigned int).

Ako učitani niz nepredstavlja ispravan heksadekadski broj, ispisati prvi znak i poziciju znaka zbog kojeg niz
 ne predstavlja ispravan heksadekadski broj.

*/

#include <stdio.h>
#include <math.h>

int main(void){
    _Bool je_heksadekadski = 1;
    int poz, pom;
    unsigned int hex = 0;
    char znak, c[9];
    printf("Upisite niz > ");
    fgets(c, 9, stdin);

    for (int i = 0; i < 8; i++){
        pom = pow(16, 7 - i);

        if (je_heksadekadski && (c[i] >= 48 && c[i] <= 57)){   
            hex = hex + pom * (c[i] - '0');
        }
        else if (je_heksadekadski && (c[i] >= 65 && c[i] <= 70)){
            hex = hex + pom * (c[i] - 'A' + 10);
        }
        else if (je_heksadekadski){
            je_heksadekadski = 0;
            znak = c[i];
            poz = i + 1;
        }
    }

    if (je_heksadekadski){
        printf("Dekadski: %u\n", hex);
    }
    else{
        printf("Neispravan znak %c na poziciji %d.\n", znak, poz);
    }
    return 0;
}

/*

2F =>  16 ^(1 - i) * (c[i] - 'A') || (c[i] - '0')

*/