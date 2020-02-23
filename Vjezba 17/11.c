/*

Napisati funkciju sortRetke2D koja unutar svakog retka sortira članove zadanog dvodimenzijskog polja cijelih brojeva. 

Funkcija također kao parametar prima logičku vrijednost silazno. 
Ako je silazno istina, tada članove polja unutar svakog retka treba sortirati od većih prema manjim vrijednostima, inače, 
    treba ih sortirati uzlazno, od manjih prema većim. 

Za sortiranje članova retka treba koristiti funkciju sort1D iz prethodnog zadatka.

Napisati glavni program (funkciju main) tako da s tipkovnice učita jedan znak (ako je učitan znak 'S',sortiranje će trebati obaviti silazno,
    inače uzlazno), zatim učita dimenzije i članove polja. 

Nakon toga na zaslon treba ispisati rezultat poziva funkcije sortRetke2D(dakle sadržaj polja kojem su članovi unutar redaka sortirani) 
    sukladno prikazanom primjeru (za ispis svakog pojedinog člana polja koristi se format "%5d")

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

void sort2D(int *arr, int m, int n, _Bool silazno){
    for (int i = 0; i < m; i++){
        sort1D(arr + (n * i), n, silazno);
    }
}

int main(void){
     _Bool silazno;
    char c;
    int m, n;

    printf("Upisite smjer poretka (S-silazno) > ");
    scanf("%c", &c);

    if (c == 'S')
        silazno = 1;
    else 
        silazno = 0;
    printf("Upisite dimenzije > ");
    scanf("%d %d", &m, &n);

    int arr[m][n];
    printf("Upisite clanove >\n");
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    
    sort2D(&arr[0][0], m, n, silazno); 

    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            printf("%5d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}