/*

Jednako kao prethodni zadatak, ali funkcija udaljToc kao parametre prima pokazivače na dva podatka tipa tTocka.
 U kojoj od verzija funkcije će biti korišten manji prostor na stogu i zašto?
U ovoj jer ce funkcija primati samo pointer na struct koji je manje velicine od 2 vrijednosti structa
*/

#include <stdio.h>
#include <stdio.h>
#include <math.h>


//iz nekog razloga mi ne radi s doubleom
typedef struct{
    float x;
    float y;
} tTocka;

float udaljToc(tTocka *t1, tTocka *t2){
    float rez = sqrt(pow(t2->x - t1->x, 2.) + pow(t2->y - t1->y, 2.));
    return rez;
}

int main(void){
    tTocka t1;
    tTocka t2;
    printf("Upisite koordinate 1. tocke > ");
    scanf("%f %f", &t1.x, &t1.y);

    printf("Upisite koordinate 2. tocke > ");
    scanf("%f %f", &t2.x, &t2.y);

    printf("%f\n", udaljToc(&t1, &t2));
    return 0;
}