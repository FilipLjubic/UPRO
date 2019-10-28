/*

Generirati kvadratnu matricu dimenzija  11 x 11 kojoj su svi elementi glavne i sporedne dijagonale, elementi prvog i zadnjeg retka, 
    te prvog i zadnjeg stupca postavljeni na vrijednost 1, a svi ostali elementi matrice postavljeni na vrijednost 8. 
    Generiranu matricu ispisati na zaslon.

*/

#include <stdio.h>

int main(void){
    int matrica[11][11];

    printf("Generirana kvadratna matrica:\n");
    for (int i = 0; i < 11; i++){
        for (int j = 0; j < 11; j++){
            if (i == 0 || j == 0 || i == 10 || j == 10){
                matrica[i][j] = 1;
            }
            else if (i == j){
                matrica[i][j] = 1;
            }
            else if (i == 10 - j){
                matrica[i][j] = 1;
            }
            else{
                matrica[i][j] = 8;
            }
            printf("%2d", matrica[i][j]);
        }
        printf("\n");
    }
    return 0;
}