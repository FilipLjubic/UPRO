/*

Napisati funkciju zbroj2Dkoja kao rezultat vraća zbroj svih članova matrice(članovi matrice su tipa double) zadanih dimenzija m x n. 
Napisati glavni program (funkciju main) tako da s tipkovnice 
 učita dimenzije i članove matrice te na zaslon ispiše rezultat dobiven pozivom funkcije zbroj2D, sukladno prikazanom primjeru.

*/

#include <stdio.h>

double zbroj2D(double *matrix, int m, int n){
    double result = 0.;

    for (int i = 0; i < m * n; i++){
        result += *(matrix + i);
    }

    return result;
}

int main(void){
    int m, n;
    double result;

    printf("Upisite dimenzije > ");
    scanf("%d %d", &m, &n);

    double matrix[m][n];

    printf("Upisite clanove >\n");
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            scanf("%lf", &matrix[i][j]);
        }
    }

    result = zbroj2D(&matrix[0][0], m, n);

    printf("Suma je: %.6lf\n", result);

    return 0; 
}

