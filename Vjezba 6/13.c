/*

Napisati program kojim će se s tipkovnice učitati prirodni broj n (ne treba provjeravati ispravnost upisanog broja). 
Zatim na zaslon, po najviše 10 članova u svakom retku, ispisavati članove niza dok se ne ispiše član niza koji ima vrijednost 1. 

U novi redak ispisati koliko je članova niza ispisano prije pojave člana koji ima vrijednost 1 (broj članova u nizu prije prvog člana niza koji ima vrijednost 1, naziva se total stopping time).


Čarobni niz počinje članom a0= n, a svaki sljedeći član se izračunava na temelju prethodnog, prema sljedećem pravilu: 

ako je prethodni član bio paran, tada se sljedeći član dobije dijeljenjem prethodnog člana s 2,
  inače, sljedeći član se dobije množenjem prethodnog člana s 3 i dodavanjem 1.


Upisite prirodni broj n > 7
7 22 11 34 17 52 26 13 40 20
10 5 16 8 4 2 1
za n = 7, total stopping time = 16



*/

#include <stdio.h>

int main(void){
    int n, prethodni, pocetni, time = 0;

    printf("Upisite prirodni broj n > ");
    scanf("%d", &n);

    pocetni = n;
    while (n != 1){
        printf("%d", n);

        prethodni = n;

        if (prethodni % 2 == 0){
            n = prethodni / 2;
        } else {
            n = 3 * prethodni + 1;
        }

        time ++;
        
        if (time % 10 == 0){
            printf("\n");
        } else{
            printf(" ");
        }
    }
    printf("1 \n");
    printf("za n = %d, total stopping time = %d\n", pocetni, time);
    return 0;

}