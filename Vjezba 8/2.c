/*

S tipkovnice učitati 10 cijelih brojeva u polje, poredak članova obrnuti unutar polja.

Nakon što se poredak članova u polju promijeni, ispisati novi sadržaj polja, 
pri čemu vrijednosti trebaju biti razdvojene zarezom i prazninom.

Uočiti: zadatak nije jednak prethodnom.

*/

#include <stdio.h>

int main(void){
    int n[10];

    printf("Upisite 10 cijelih brojeva > ");
    for (int i = 0; i < 10; i++){
        scanf("%d", &n[9 - i]);
    }
    for (int i = 0; i < 10; i++){
        if (i == 0) printf("%d", n[0]);
        else printf(", %d", n[i]);
    }
    return 0;
}