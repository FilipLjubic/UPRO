/*

Napisati main kojim će se učitati niz znakova koji zajedno s eventualno učitanom oznakom novog retka sigurno neće biti dulji od 20 znakova. 

Uzastopnim pozivanjem funkcije iz prethodnog zadatka, traziPrviSamoglas, na zaslon ispisati sve samoglasnike pronađene u nizu. 
Uputa: funkciju pozivati uzastopno, ali ne tako da samoglasnik traži uvijek od samog početka niza.

*/

#include <stdio.h>

#define LEN 20


char *traziPrviSamoglas(char *arr){
    while (*arr != '\0'){
        char x = *arr;
        if(x == 'A' || x == 'E' || 
           x == 'I' || x == 'O' || 
           x == 'U' || x == 'a' || 
           x == 'e' || x == 'i' || 
           x == 'o' || x == 'u'){
               return arr;
           }
        arr++;
    }
    return NULL;
}

int main(void){
    char arr[LEN + 1];
    char *ptr = arr;
    char *prvi = NULL;

    printf("Upisite niz > ");
    fgets(arr, LEN + 1, stdin);

    printf("Svi samoglasnici: ");

    while(traziPrviSamoglas(ptr) != NULL){
        prvi = traziPrviSamoglas(ptr);
        if (prvi != NULL){
            printf("%c", *prvi);
            ptr = prvi + 1;
        }
    }
    return 0;
}
