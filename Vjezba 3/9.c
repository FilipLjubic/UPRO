/*

Napisati program koji će s tipkovnice učitati pet realnih brojeva.
Ako su barem tri od učitanih brojeva veći od nule, ispisati poruku Barem tri su veca od nule, inače ispisati poruku Niti tri nisu veca od nule.

*/

#include <stdio.h>

int main(void){
    float brojevi[6];
    int count = 0;
    brojevi[5] = '\0';

    printf("Upisite 5 realnih brojeva > ");
    
    scanf("%f %f %f %f %f", &brojevi[0], &brojevi[1], &brojevi[2], &brojevi[3], &brojevi[4] );

    for (int i = 0; i < 5; i++){
        if ( brojevi[i] > 0){
            count ++;
        }
    }
    if (count >= 3){
        printf("Barem tri su veca od nule\n");
    }
    else{
        printf("Niti tri nisu veca od nule\n");
    }
    return 0;
}