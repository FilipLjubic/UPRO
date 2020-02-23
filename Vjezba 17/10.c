/*

Napisati funkciju sort1D koja sortira zadano jedno dimenzijsko polje cijelih brojeva. 
Funkcija također kao parametar prima logičku vrijednost silazno. 
Ako je silazno istina, tada članove polja treba sortirati od većih prema manjim vrijednostima, inače od manjih prema većim. 

Napisati glavni program (funkciju main) tako da s tipkovnice učita jedan znak (ako je učitan znak 'S', sortiranje će trebati obaviti silazno, 
inače uzlazno), dimenziju i članove polja. 

Nakon toga na zaslon treba ispisati rezultat poziva funkcije sort1D
(dakle sadržaj poredanog polja), sukladno prikazanom primjeru (za ispis svakog pojedinog člana polja koristi se format"%d").

*/

#include <stdio.h>

void switcheroni(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sort1D(int *arr, int n, _Bool silazno){
    for (int i = 0; i < n - 1; i++){
        for (int j = i + 1; j < n; j++){
            if (silazno && (*(arr + i) < *(arr + j)))
                switcheroni(arr + i, arr + j);
            else if (!silazno && (*(arr + i) > *(arr + j)))
                switcheroni(arr + i, arr + j);
        }
    }  
}

int main(void){
    _Bool silazno;
    char c;
    int n;

    printf("Upisite smjer poretka (S-silazno) > ");
    scanf("%c", &c);

    if (c == 'S')
        silazno = 1;
    else 
        silazno = 0;
    printf("Upisite dimenziju > ");
    scanf("%d", &n);

    int arr[n];
    printf("Upisite clanove > ");
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    
    sort1D(arr, n, silazno); 

    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}