/*

Učitati vrijednosti za broj redaka m i broj stupaca n dvodimenzijskog cjelobrojnog polja. 

Ne treba provjeravati jesu li upisane ispravne vrijednosti. 
Po retcima učitati vrijednosti članova dvodimenzijskog cjelobrojnog polja od m redaka i n stupaca. 

Sortirati vrijednosti unutar svakog pojedinog stupca, od manjih prema većim, a zatim polje ispisati.

*/

#include <stdio.h>

int main(void){
    int m, n, najmanji, pom;

    printf("Upisite m, n > ");
    scanf("%d %d", &m, &n);
    printf("Upisite %d x %d clanova >\n", m, n);
    
    int matrica[m][n];

    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            scanf("%d", &matrica[i][j]);
        }
    }
    // sortiranje
    
    for (int j = 0; j < n; j++){
        for (int i = 0; i < m - 1; i++){
            najmanji = matrica[i][j];
            
            for (int k = i; k < m; k++){
               if (matrica[k][j] < najmanji){
                   najmanji = matrica[k][j];
                   
                   //switcheronie
                   pom = matrica[i][j];
                   matrica[i][j] = matrica[k][j];
                   matrica[k][j] = pom;
               }
            }
        }
    }
    printf("Nakon sortiranja stupaca:\n");
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            printf("%4d", matrica[i][j]);
        }
        printf("\n");
    }
    return 0;
}