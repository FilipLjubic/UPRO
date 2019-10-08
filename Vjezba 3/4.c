/*

Napisati program za pretvaranje vrijednosti temperature izražene u različitim mjernim jedinicama.

Na početku program treba ispisati poruku:
    Program za konverziju Fahrenheit -Celsius ili obrnuto.
    Za F u C upisite 1, a za C u F bilo koji drugi cijeli broj >

Ako korisnik za izbor smjera konverzije upiše broj 1, tada ispisati poruku
    Upisite temperaturu izrazenu u stupnjevima Fahrenheit >
te s tipkovnice učitati realni broj koji predstavlja temperaturu izraženu u stupnjevima Fahrenheit,
izračunati ekvivalentnu temperaturu izraženu u stupnjevima Celsius te ispisati temperaturu izraženu u obje jedinice.

Ako korisnik za izbor smjera konverzije upiše bilo koji drugi cijeli broj, tada ispisati poruku
    Upisite temperaturu izrazenu u stupnjevima Celsius >

te s tipkovnice učitati jedan realni broj koji predstavlja temperaturu izraženu u stupnjevima Celsius,
izračunati ekvivalentnu temperaturu izraženu u stupnjevima Fahrenheit te ispisati temperaturu izraženu u obje jedinice.

*/

#include <stdio.h>

int main(void){
    int odabir;
    float stupnjevi, rezultat;
    printf("Program za konverziju Fahrenheit - Celsius ili obrnuto.\n");
    printf("Za F u C upisite 1, a za C u F bilo koji drugi cijeli broj > ");
    scanf("%d", &odabir);

    if (odabir == 1){
        printf("Upisite temperaturu izrazenu u stupnjevima Fahrenheit > ");
        scanf("%f", &stupnjevi);
        rezultat = (stupnjevi - 32) / 1.8;
        printf("%.3f st. F = %.3f st. C\n", stupnjevi, rezultat);
    }
    else{
        printf("Upisite temperaturu izrazenu u stupnjevima Celsius > ");
        scanf("%f", &stupnjevi);
        rezultat = (stupnjevi * 1.8) + 32;
        printf("%.3f st. C = %.3f st. F\n", stupnjevi, rezultat);
    }
    return 0;

}