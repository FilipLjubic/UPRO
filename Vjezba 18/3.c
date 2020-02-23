/*

Napisati funkciju traziZadnjiZnak koja u zadanom nizu pronalazi zadnju pojavu zadanog znaka i vraća pokazivač na taj znak. 

Ako u zadanom nizu ne postoji zadani znak, funkcija treba vratiti prikladan rezultat na temelju kojeg će se moći prepoznati da zadanog znaka u
 nizu nema. 
 
U mainu učitati niz znakova koji zajedno s eventualno učitanom oznakom novog retka sigurno neće biti dulji od 20 znakova, učitati znak, 
    pomoću funkcije traziZadnjiZnak pronaći znak i na 
zaslon ispisati koliko je pronađeni znak udaljen od početka niza(izraženo u broju bajtova) ili ispisati poruku "U nizu nema zadanog znaka".

*/

#include <stdio.h>

#define LEN 20

char *traziZadnjiZnak(char *arr, char c, int *buffer){
    for (int i = 0; i < LEN; i++){
        if (*(arr + i) == c){
            *buffer = i;
        }   
    }
    if (*buffer == 0){
        return NULL;
    }
    else return (arr + *buffer);
}

int main(void){
    char arr[LEN + 1], c;
    int buffer = 0;
    
    printf("Upisite niz > ");
    fgets(arr, LEN + 1, stdin);

    printf("Upisite znak > ");
    scanf("%c", &c);

    if (traziZadnjiZnak(arr, c, &buffer) != NULL)
        printf("%d", buffer);
    else printf("U nizu nema zadanog znaka");
    
    return 0;
}