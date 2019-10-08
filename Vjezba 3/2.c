/*
Napisati program koji će s tipkovnice učitati realni broj veći od nule koji predstavlja radijus kugle.
Ako je radijus ispravno upisan, ispisati radijus i volumen kugle.
Inače, ispisati poruku Neispravan radijus kugle.


Upisite radijus kugle > 1
Volumen kugle radijusa 1.000 je 4.189
*/
#include <math.h>
#include <stdio.h>


#define M_PI acos(-1.0)
#define PI 3.14159f

int main(void){
    float r;
    printf("Upisite radijus kugle > ");
    scanf("%f", &r);

    if(r <= 0){
        printf("Neispravan radijus kugle\n");
        return 1;
    }

    // Ne koristim M_PI jer ne zele u rjesenjima da bude precizno 

    float V = r * r * r * 4.f/3 * PI;

    printf("Volumen kugle radijusa %.3f je %.3f\n", r, V);
    return 0;
}