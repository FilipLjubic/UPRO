/*

Napisati funkciju negativci koja za zadano jednodimenzijsko polje vraća sve negativne članove tog polja.

Napisati main tako da s tipkovnice učita dimenziju i članove polja. 
Nakon toga pomoću rezultata poziva funkcije negativci ispisati negativne članove polja sukladno prikazanom primjeru 
(za ispis svakog pojedinog člana polja koristi se format "%d·").

*/

#include <stdio.h>

void negativci(int *arr, int *negarr, int n){
    int j = 0;
    for (int i = 0; i < n; i++){
        if (*(arr + i) < 0){
            *(negarr + j) = *(arr + i);
            j++;
        }
    }
}

int main(void){
    int n, count = 0;
    printf("Upisite broj clanova polja > ");
    scanf("%d", &n);
    
    printf("Upisite clanove > ");
    int arr[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
        if (arr[i] < 0)
            count++;
    }

    int neg[count];

    negativci(arr, neg, n);

    for (int i = 0; i < count; i++){
        printf("%d ", neg[i]);
    }
    return 0;
}