/* 

Napisati program koji će s tipkovnice učitati dva realna broja x i y.
Ispisati poruku Istina je ako je barem jedan od brojeva u zatvorenom intervalu [5, 20] i pri tome je x manji od y. Inače, ispisati poruku Nije istina.

*/

#include <stdio.h>

int main(void){
    float x, y;
    printf("Upisite 2 realna broja > ");
    scanf("%f %f", &x, &y);
    if ( ((x >= 5 && x <= 20) || (y >= 5 && y <= 20)) & (x < y) ){
        printf("Istina je\n");
    }
    else{
        printf("Nije istina\n");
    }
    return 0;
}