/*

Napisati program kojim će se učitati granice dvaju zatvorenih intervala realnih brojeva, [a1, a2] i [b1, b2].
Granice svakog intervala moraju biti ispravno zadane (a1 ≤ a2 i b1 ≤ b2).
Dodatno, početna granica prvog intervala mora biti manja ili jednaka početnoj granici drugog intervala (a1 ≤ b1).
Ako bilo koji od navedenih uvjeta nije ispunjen, ispisati poruku Granice intervala su neispravne.
Ako su granice intervala ispravno upisane, ispisati granice presjeka tih intervala ili poruku 'Presjek intervala je prazan skup'. 

Upisite granice 1. intervala > 15.5 7.1
Upisite granice 2. intervala > 8 12.5
Granice intervala su neispravne

Upisite granice 1. intervala > 7.1 15.5
Upisite granice 2. intervala > 7.8 12.3
Presjek intervala je [7.800, 12.300]

Upisite granice 1. intervala > 7.1 15.5
Upisite granice 2. intervala > 15.6 18
Presjek intervala je prazan skup

*/



#include <stdio.h>

int main(void){
    float a1, a2, b1, b2;

    printf("Upisite granice 1. intervala > ");
    scanf("%f %f", &a1, &a2);

    printf("Upisite granice 2. intervala > ");
    scanf("%f %f", &b1, &b2);

    if (a1 > a2 || b1 > b2 || a1 > b1){
        printf("Granice intervala su neispravne\n");
    }
    else if (a2 < b1){
        printf("Presjek intervala je prazan skup\n");
    }
    else if ( (a2 >= b1) && (a2 <= b2) ){
        printf("Presjek intervala je [%.3f, %.3f]\n", b1, a2);
    }
    else if ( (a2 >= b1) && (a2 >= b2) ){
        printf("Presjek intervala je [%.3f, %.3f]\n", b1, b2);
    }
    return 0;
}