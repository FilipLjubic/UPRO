/*

Definirati i inicijalizirati (pomoću inicijalizatora pri definiciji polja,
 uz nastojanje da se čim manji broj vrijednosti u inicijalizatoru navodi eksplicitno) dvodimenzijsko realno polje veličine 5 redaka i 7 stupaca.

Zatim polje ispisati u obliku prikazanom u primjeru izvršavanja programa. 
Vrijednosti u inicijalizatoru neka budu one koje su prikazane u primjeru. 

*/

#include <stdio.h>

int main(void){
    float n[5][7] = {0};
    n[0][5] = 0.9f;
    
    for (int i = 0; i < 3; i++){
        n[2][i] = 31.1f + (i * 1.1f);
    }
    n[2][3] = 34.2f;
    n[3][0] = 1.f;
    n[3][1] = 4.f;
    n[3][6] = 7.7f;

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 7; j++){
            printf("%5.1f", n[i][j]);
        }
        printf("\n");
    }
    return 0;
}