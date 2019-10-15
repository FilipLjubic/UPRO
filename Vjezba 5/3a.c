/*

Učitati cijeli broj koji predstavlja broj bodova dobivenih na ispitu.
Za broj bodova 0-9, ispisati nedovoljan, za broj bodova 10-13 ispisati dovoljan,
za broj bodova 14-17 ispisati dobar, za broj bodova 18-21 ispisati vrlo dobar,
a za broj bodova 22-25 ispisati izvrstan.
Za ostale učitane vrijednosti bodova ispisati neispravni bodovi.

a) Program napisati korištenjem selekcije (jednim od oblika naredbe if)
b) Program napisati korištenjem skretnice (naredbom switch)
c) Ocijeniti prikladnost korištenja skretnice u rješenju ovog zadatka

*/

#include <stdio.h>

int main(void) {
    int bodovi;

    printf("Upisite broj bodova dobivenih na ispitu > ");
    scanf("%d", &bodovi);

    if (bodovi >= 0 && bodovi <= 9)
        printf("Nedovoljan\n");
    else if (bodovi >= 10 && bodovi <= 13)
        printf("Dovoljan\n");
    else if (bodovi >= 14 && bodovi <= 17)
        printf("Dobar\n");
    else if (bodovi >= 18 && bodovi <= 21)
        printf("Vrlo dobar\n");
    else if (bodovi >= 22 && bodovi <= 25)
        printf("Odlican\n");
    else
        printf("Neispravni bodovi\n");
    
    return 0;
}