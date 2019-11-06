/*

S tipkovnice učitati nenegativni cijeli broj (unsigned int). 

Načiniti niz znakova (string) koji sadrži heksadekadske znamenke ekvivalentnog broja. 
Za znamenke koristiti znamenke 0-9 i velika slova A-F. 
Ispisati niz

*/

#include <stdio.h>

int main(void){
    unsigned int n;

    printf("Upisite dekadski broj > ");
    scanf("%u", &n);

    printf("Heksadekadski: %X\n", n);
    return 0;
}