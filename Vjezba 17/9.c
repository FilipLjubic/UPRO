/*

Napisati funkciju genPrim koja za zadane parametre granica i n vraća n prim brojeva koji su veći ili jednaki parametru granica.

Napisati glavni program (funkciju main) tako da s tipkovnice učita vrijednost donje granice i broj prim brojeva koje treba ispisati. 

Nakon toga na zaslon treba ispisati 
 rezultat poziva funkcije genPrim sukladno prikazanom primjeru (za ispis svakog pojedinog prim broja koristi se format "%7d").

*/

#include <stdio.h>
#include <math.h>

void genPrim(int x, int n, int *res){
    _Bool je_prost = 1;
    int count = 0;
    while (count < n){
        for (int i = 2; i < sqrt(x); i++){
            if (x % i == 0){
                je_prost = 0;
                break;
            }
        }

        if (je_prost){
            *(res + count) = x;
            count ++;
        }
        je_prost = 1;
        x++;
    }
}

int main(void){
    int granica, n;

    printf("Upisite donju granicu i broj prim brojeva > ");
    scanf("%d %d", &granica, &n);
    
    int res[n];
    genPrim(granica, n, &res[0]);

    for (int i = 0; i < n; i++){
        printf("%7d\n", res[i]);
    }

    return 0;
}