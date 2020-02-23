/*

Napisati funkciju prviNegativac koja za zadano jednodimenzijsko polje vraća pokazivač na prvi pronađeni negativničlan u polju.

Napisati main tako da s tipkovnice učita dimenziju i članove polja. 
Nakon toga ispisati rezultat poziva funkcije prviNegativac sukladno prikazanom primjeru.

*/

#include <stdio.h>

int *prviNegativac(int *arr, int n){
    for (int i = 0; i < n; i++){
        if (*(arr + i) < 0){
            return (arr + i);
        }
    }
    return NULL;
}

int main(void){
    int n, *prvi;

    printf("Upisite broj clanova > ");
    scanf("%d", &n);

    int arr[n];
    printf("Upisite clanove > ");

    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    prvi = prviNegativac(arr, n);

    if (prvi != NULL)
        printf("Prvi negativni clan je %d", *prvi);
    else
        printf("Nema negativnih");

    return 0;
}