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

    if ( !((x >= y + 100) & ((y % 2 == 0) || (y < 0)))){
        printf("Istina je\n");
    }
    return 0;
}