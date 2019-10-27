/*

Napisati program za izračunavanje binomnog koeficijenta "m povrh n".

Vrijednosti za m i n učitati s tipkovnice uz kontrolu jesu li te vrijednosti ispravno zadane 
(m i n moraju biti cijeli brojevi veći ili jednaki 0, m mora biti veći ili jednak n).

Ako neka od vrijednosti nije ispravno upisana, ispisati poruku m ili n su neispravni.

Ako su brojevi ispravno zadani, pomoću sljedećeg izraza izračunati "m povrh n" i ispisati rezultat m!  /  ( n! · (m -n)! )
Napomena: postoji bolji način (formula) za izračunavanja binomnog koeficijenta, ali u ovom zadatku treba ga izračunati točno ovako kako je navedeno.

Upisite m i n > 9 5
9 povrh 5 = 126

*/

#include <stdio.h>

int factorial(int broj);

int main(void){
    int m, n, rezultat;
    printf("Upisite m i n > ");
    scanf("%d %d", &m, &n);

    if (m < 0 || n < 0 || m < n){
        printf("m ili n su neispravni\n");
        return 1;
    }

    rezultat = factorial(m) /  ( factorial(n) * factorial(m-n) );
    printf("%d povrh %d = %d\n", m, n, rezultat);
    return 0;
}

int factorial(int broj){
    int rez = 1;

    for (int i = 1;i <= broj; i++){
        rez = rez * i;
    }
    
    return rez;
}