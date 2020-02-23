/*

Napisati program koji će poslužiti kao primjer kojim će se "dokazati" da sljedeće makro definicije nisu ispravno napisane:

#define ZBROJI(a, b) a + b
#define ODUZMI(a, b) (a)-(b)
#define PODIJELI(x, y) (x/y)
#define OPETPODIJELI(x, y) (x)/(y)

Koja pravila pisanja ove macro definicije ne zadovoljavaju? Zatim ispraviti makro definicije i provjeriti ih izvršavanjem programa.

*/
#include <stdio.h>

//ZBROJI, ODUZMI i OPETPODIJELI imaju problema kada se jos nesto izvana doda na macro
//ZBROJI i PODIJELI imaju problema kada se unutar macroa nesto doda
#define ZBROJI(a, b) a + b
#define ODUZMI(a, b) (a)-(b)
#define PODIJELI(x, y) (x/y)
#define OPETPODIJELI(x, y) (x)/(y)



int main(void){
    int c = ZBROJI(3, 2) * 5; // 3 + 2*5 == 13
    float z = ODUZMI(3.f, 2.f) * 5.f; //3 - 2*5 == -7
    int d = PODIJELI(20, 2*5); // 20/2 * 5 == 50
    float w = OPETPODIJELI(10.f, 2.f) * 3; // 10/2 * 3 == 15

    printf("ZBROJI(3, 2) * 5 = 25? dobije se: %d\n", c);
    printf("ODUZMI(3.f, 2.f) * 5.f = 5.0? dobije se: %f\n", z);
    printf("PODIJELI(20, 2*5) = 2? dobije se: %d\n", d);
    printf("20.f / OPETPODIJELI(10.f, 2.f) = 4.0? dobije se: %f\n", w);

    return 0;
}