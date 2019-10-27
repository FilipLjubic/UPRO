/*

S tipkovnice učitati cijeli broj n iz zatvorenog intervala [1, 10].

Ako broj nije ispravno upisan ispisati poruku Red matrice je neispravan.
Ako je broj ispravno upisan, ispisati jediničnu matricu reda n.

Jedinična matrica reda n se može predstaviti tablicom od n redaka i stupaca u kojima se vrijednost 1 nalazi na glavnoj dijagonali, a vrijednost 0 na svim ostalim mjestima. 
Pogledati primjere izvršavanja programa

5
1 0 0 0 0
0 1 0 0 0
0 0 1 0 0
0 0 0 1 0
0 0 0 0 1

*/

#include <stdio.h>

int main(void){
    int n;

    scanf("%d", &n);

    if (n < 1 || n > 10){
        printf("Red matrice je neispravan\n");
        return 1;
    }

    for (int i = 1;i <= n; i++){
        for (int j = 1; j <= n; j++){
            if (i == j){
                printf("1");
            }
            else{
                printf("0");
            }
            if (j == n){
                printf("\n");
            }
            else{
                printf(" ");
            }
        }
    }
    return 0;
}