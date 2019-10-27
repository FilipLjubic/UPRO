/*

S tipkovnice učitati cijeli broj n koji mora biti iz intervala [3, 20]. 

Učitavanje broja n ponavljati dok god ne bude ispravno upisan.

Nakon toga s tipkovnice učitati ncijelih brojeva i pohraniti ih u polje ulaz. 

U polje parni redom prepisati sve parne vrijednosti, a u polje neparni sve neparne vrijednosti iz polja ulaz. 

Na kraju ispisati članove polja ulaz, parni i neparni, svako polje u svom retku,
 s članovima međusobno odvojenim prazninom.
 
Napomena: 

sva polja definirati tako da se za njihovu pohranu troši minimalni potreban
prostor-primijenjeno na priloženi primjer: 
polje ulaz treba biti definirano sa 7 članova, polje parni s 4 člana, a polje neparnis 3 člana.

*/

#include <stdio.h>

int main(void){
    int n, par = 0, nepar = 0, j = 0;

    do {
        printf("Upisite broj iz intervala [3, 20] > ");
        scanf("%d", &n);
    } while (n < 3 || n > 20);

    int ulaz[n];
    printf("Upisite cijele brojeve (%d) > ", n);   
    
    for (int i = 0; i < n; i++){
        scanf("%d", &ulaz[i]);

        if (i % 2 == 0){
            par ++;
        } else {
            nepar ++;
        }
    }
    printf("Ulaz: ");
    for (int i = 0; i < n; i++){
        printf("%d ", ulaz[i]);
    }
    printf("\nParni: ");
    
    int parni[par], neparni[nepar];
    
    for (int i = 0; i < n; i++){
        if (ulaz[i] % 2 == 0){
            parni[j] = ulaz[i];
            printf("%d ", parni[j]);
            j++;
        }
        
    }
    j = 0;
    printf("\nNeparni: ");
    
    for (int i = 0; i < n; i++){
        if (ulaz[i] % 2 != 0){
            neparni[j] = ulaz[i];
            printf("%d ", neparni[j]);
            j++;
        }
        
    }
    printf("\n");
    return 0;
}