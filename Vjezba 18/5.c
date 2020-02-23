/*

Napisati funkciju traziPrviSamoglas koja vraća pokazivač na prvi samoglasnik u zadanom nizu. 
Ako u zadanom nizu ne postoji niti jedan samoglasnik, funkcija treba vratiti prikladan rezultat na temelju kojeg će se moći prepoznati da
 samoglasnikau nizu nema. 

U mainu učitati niz znakova koji zajedno s eventualno učitanom oznakom novog retka sigurno neće biti dulji od 20 znakova, 
pomoću funkcije traziPrviSamoglas pronaći i ispisati na zaslon samoglasnik ili poruku "U nizu nema samoglasnika".

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
    char c;
    char arr[LEN + 1];

    printf("Upisite niz > ");
    fgets(arr, LEN + 1, stdin);

    if (traziPrviSamoglas(&arr[0]) == NULL)
        printf("U nizu nema samoglasnika");
    else
    {
        printf("%c", *traziPrviSamoglas(arr));
    }
    return 0;    
}