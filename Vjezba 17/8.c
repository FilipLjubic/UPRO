/*

Napisati funkciju transpKvad koja transponira zadanu kvadratnu matricu(pri tome samo mijenja članove zadane matrice, ne stvara novu matricu).

Napisati glavni program (funkciju main) tako da s tipkovnice učita red matrice i članove. 

Nakon toga na zaslon treba ispisati 
 rezultat poziva funkcije transpKvad sukladno prikazanom primjeru (za ispis svakog pojedinog člana matrice koristi se format "%5d").

*/

#include <stdio.h>

void transpKvad(int m, int *p){
    for (int i = 0; i < m; i++){
        for (int j = 0; j < m; j++){
            if (i < j){
                int temp = *(p + (i * m) + j); //ovo je od pocetne matrice
                
                *(p + (i * m) + j) = *(p + i + (m * j));
                *(p + i + (m * j)) = temp;      
            }
                      
        }
    }
}

int main(void){
    int m;

    printf("Upisite red matrice > ");
    scanf("%d", &m);

    int matrix[m][m];
    printf("Upisite clanove >\n");
    for (int i = 0; i < m; i++){
        for (int j = 0; j < m; j++){
            scanf("%d", &matrix[i][j]);
        }
    }
    transpKvad(m, &matrix[0][0]);

    for (int i = 0; i < m; i++){
        for (int j = 0; j < m; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}