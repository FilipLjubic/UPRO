/*

Napisati program koji će ispisati poruku Istina je ako uvjet iz prethodnog zadatka nije zadovoljen.
Jedno rješenje napisati izravnom primjenom operatora negacije na uvjetu iz rješenja prethodnog zadatka.
Drugo rješenje napisati bez operatora negacije (preoblikovanje logičkog izraza obaviti pomoću De Morganovog pravila).

*/


#include <stdio.h>

int main(void){
    int x, y;
    
    printf("Upisite dva broja > ");
    scanf("%d %d", &x, &y);

    // X = (x >= y + 100)
    // Y = (y % 2 == 0) || (y < 0)

    // !(X & (Y)) == (!Y || !X)

    // !Y == !(y % 2 == 0) & (y < 0)    === (y % 2 != 0) & (y < 0)
    // !X == (x < y + 100)
    if ( ((y % 2 != 0) & (y < 0)) || (x < y + 100) ){
        printf("Istina je\n");
    }
    return 0;
}