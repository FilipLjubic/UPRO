/*

Na zaslon, po deset brojeva u jednom retku, odvojene zarezom i prazninom, ispisivati prirodne brojeve koji su djeljivi s 3 ili sa 7.
Ispis zaustaviti kada se ispiše 50 brojeva u 5 redaka.

Iza zadnjeg retka brojeva na zaslonu ne ispisuje se znak za novi red.

*/

#include <stdio.h>

int main(void) {
    int broj_elem = 0;

    for (int i = 1; broj_elem < 50; i++){
        
        if (i % 3 == 0 || i % 7 == 0){
            
            printf("%d", i);

            broj_elem ++;
            
            if (broj_elem % 10 == 0) {
                printf("\n");
            }
            else
                printf(", ");
        }
    }
    return 0;
}