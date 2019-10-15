/*

Učitati realni broj koji predstavlja visinu izraženu u kilometrima koju je dosegla meteorološka raketa.
Za visine ispod 12 km ispisati troposfera.
Za visine od 12 do ispod 50 km ispisati stratosfera.
Za visine od 50 do ispod 80 km ispisati mezosfera.
Za visine od 80 do ispod 700 km ispisati termosfera.
Za sve druge vrijednosti visine ne treba ispisati ništa.


a) Program napisati korištenjem selekcije (jednim od oblika naredbe if).

b)Može li se ovaj zadatak riješiti korištenjem skretnice (naredbom switch)?
Zašto?

*/

// b) Ne može jer je u pitanju realni broj, a za switch mora biti konstanta

#include <stdio.h>

int main(void){
    float visina;

    printf("Upisite visinu koju je dosegla meteoroloska raketa > ");
    scanf("%f", &visina);

    if (visina < 12)
        printf("Troposfera\n");
    else if (visina >= 12 && visina < 50)
        printf("Stratosfera\n");
    else if (visina >= 50 && visina < 80)
        printf("Mezosfera\n");
    else if (visina >= 80 && visina < 700)
        printf("Termosfera\n");
    return 0;
}