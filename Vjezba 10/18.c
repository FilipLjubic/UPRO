/*

Napisati program koji s tipkovnice učitava dva znaka te ispisuje sve znakove ASCII tablice koji se nalaze između ta dva znaka (uključujući).

*/

#include <stdio.h>

int main(void){
    char dole, gore;

    printf("Upisite 2 znaka > ");
    scanf("%c %c", &dole, &gore);

    for (int i = dole; i <= gore; i++){
        printf("%c", i);
    }
    return 0;
}