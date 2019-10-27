/*

S tipkovnice učitavati cijele brojeve dok god se naizmjence upisuje jedan pozitivan,
jedan negativan, jedan pozitivan broj, itd. 

Upisivanje pozitivnog broja nakon pozitivnog ili upisivanje negativnog broja nakon negativnog ili upisivanje nule smatra se pogreškom. 

U slučaju takve pogreške program ispisuje sumu svih do tada ispravno upisanih brojeva (upisanih prije pogreške) i 
prekida se njegovo daljnje izvršavanje. 

Prvi broj koji se upiše s tipkovnice može biti ili pozitivan ili negativan.

*/

#include <stdio.h>

int main(void){
    int suma = 0, n, current, last;

    while (1){
        scanf("%d", &n);
        if (n > 0){
            current = 1;
        }else if (n < 0){
            current = 0;
        }

        if (current == last){
            break;
        } else {
            suma += n;
        }
        last = current;    
    }
    printf("suma = %d\n", suma);
    return 0;

}