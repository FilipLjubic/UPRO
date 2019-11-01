/*

Napisati program koji učitava cijele brojeve (int) dok god se ne upiše nula. 
Svaki prije toga upisani broj ispisati u obliku oktalnog i heksadekadskog broja. 

Uputa: koristiti konverzijske specifikacije koje cijeli broj mogu ispisati u oktalnom ili heksadekadskom obliku

*/

#include <stdio.h>

int main(void){
    int n;

    do {
        printf("Upisite dekadski cijeli broj > ");
        scanf("%d", &n);
        if (n == 0){
            break;
        }
        printf("%o\n", n);
        printf("%X\n", n);
    } while(1);
    return 0;
}