/*

Napisati program koji će s tipkovnice učitati tri cijela broja.
Ako su učitane vrijednosti međusobno različite i poredane od manjih prema većim ili od većih prema manjim 
(npr. za učitane brojeve -5, 1, 18 ili 54, 10, 1),ispisati poruku Brojevi su poredani i razliciti,
inače (npr. za učitane brojeve 5, 2, 6 ili 4, 4, 5) ispisati poruku Brojevi nisu poredani ili nisu razliciti

*/

#include <stdio.h>

int main(void){
    int a, b, c;

    printf("Upisite 3 cijela broja > ");
    scanf("%d %d %d", &a, &b, &c);

    if ( (a > b && b > c ) || (a < b && b < c) ){
        printf("Brojevi su poredani i različiti\n");
    }
    else{
        printf("Brojevi nisu poredani ili nisu razliciti\n");
    }
    return 0;
}