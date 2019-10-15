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

// c) Glupo je koristiti skretnicu u rješenju ovih zadatka.. 0/10

#include <stdio.h>

int main(void) {
    int bodovi;

    printf("Upisite broj bodova dobivenih na ispitu > ");
    scanf("%d", &bodovi);

    switch (bodovi){
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
        printf("Nedovoljan\n");
        break;
    case 10:
    case 11:
    case 12:
    case 13:
        printf("Dovoljan\n");
        break;
    case 14:
    case 15:
    case 16:
    case 17:
        printf("Dobar\n");
        break;
    case 18:
    case 19:
    case 20:
    case 21:
        printf("Vrlo dobar\n");
        break;
    case 22:
    case 23:
    case 24:
    case 25:
        printf("Odlican\n");
        break;

    default:
        printf("Neispravni bodovi\n");
    }
    return 0;
}