/*

Učitati tri cijela broja: redni broj dana u mjesecu, redni broj mjeseca u godini i redni broj godine.
Nije potrebno kontrolirati jesu li učitane vrijednosti ispravne.
Ispisati datum u obliku s nazivom mjeseca, npr. 19. veljace 2017.
a) Program napisati korištenjem selekcije (jednim od oblika naredbe if)
b) Program napisati korištenjem skretnice (naredbom switch)

*/

#include <stdio.h>

int main(void) {
    int dan, mjesec, godina;

    const char* genitivi[] = {"sijecnja", "veljace", "ozujka", "travnja", "svibnja", "lipnja", "srpnja", "kolovoza", "rujna", "listopada", "studenog", "prosinca"};

    printf("Upisite dan, mjesec i godinu > ");
    scanf("%d %d %d", &dan, &mjesec, &godina);

    for (int i = 1; i < 13; i++){
        if (mjesec == i)
            printf("%d. %s %d.\n", dan, genitivi[i-1], godina);
    }
    return 0;
}