/*

S tipkovnice, u obliku cijelih dekadskih brojeva, učitati najviše 8 ASCII vrijednosti znakova. 
Učitavanje prekinuti i onda kada  korisnik unese ASCII vrijednost koja ne predstavlja veliko slovo abecede. 
Učitane vrijednosti pohraniti u polje znakova koje se koristi kao niz znakova. 
Na kraju, ispisati dobiveni niz znakova pomoću funkcije printf i formata %s

*/
#include <stdio.h>

int main(void){
    char c[9];
    int esketit, i;

    printf("Upisite brojeve > ");

    for (i = 0; i < 8; i++){
        scanf("%d", &esketit);

        if (esketit >= 65 && esketit <= 90){
            c[i] = esketit;
        }
        else{
            break;
        }
        
    }
    c[i] = '\0';

    printf("%s", c);
    return 0;
}