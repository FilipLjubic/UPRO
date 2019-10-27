/*

S tipkovnice učitati cijeli broj n iz intervala [5, 20]. Nije potrebno provjeravati je li upisan ispravan broj. 

Nakon toga s tipkovnice učitati n cijelih brojeva i pohraniti ih u polje. 
Iz polja izbaciti sve elemente koji su smješteni na parnim indeksima (dakle, članove s indeksima 0, 2, itd.). 
Ispisati novi sadržaj polja. 

Napomena: polje definirati tako da se za njegovu pohranu troši minimalni potreban prostor - primijenjeno na priloženi primjer: 
polje  treba biti definirano sa 7 članova jer je korisnik odlučio upisati 7 brojeva.

*/

#include <stdio.h>

int main(void){
    int n;
    
    printf("Upisite cijeli broj [5, 20] > ");
    scanf("%d", &n);

    int brojevi[n];
    printf("Upisite cijele brojeve (%d): ", n);

    for (int i = 0; i < n; i++){
        scanf("%d", &brojevi[i]);
    }

    for (int i = 0; i < n / 2; i++){
        brojevi[i] = brojevi[2 * (i + 1) - 1];
        printf("%d ", brojevi[i]);
    }
    return 0;
}