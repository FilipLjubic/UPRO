/*

S tipkovnice učitati 10 cijelih brojeva i zatim ih ispisati u obrnutom poretku u odnosu na poredak kojim su učitani,
 odvojene zarezom i prazninom. 

Uputa: učitavati brojeve i pohranjivati ih u polje, zatim ih ispisati pristupajući članovima polja od 10. člana prema prvom. 

*/

#include <stdio.h>

int main(void){
    int n[10];

    printf("Upisite 10 cijelih brojeva > ");
    for (int i = 0; i < 10; i++){
        scanf("%d", &n[i]);
    }
    for (int i = 0; i < 10; i++){
        if (i == 0) printf("%d", n[9]);
        else {
            printf(", %d", n[9 - i]);
        }
    }
    return 0;
}