/*

Napisati program za zbrajanje ili množenje realnih brojeva.
Na početku program treba učitati dva realna broja.
Nakon toga treba učitati cijeli broj kojim se bira vrsta operacije.
Ako je korisnik upisao 1, obavlja se zbrajanje, ako je upisao 2,obavlja se množenje,
a ako je upisao neki drugi broj ispisuje se poruka Neispravan odabir operacije.


Upisite dva realna broja > 1 2
Upisite vrstu operacije (1-zbrajanje, 2-mnozenje) > 1
Zbroj je 3.000000

*/

#include <stdio.h>


int main(void){
    int vrsta_op;
    float a, b, rezultat;

    printf("Upisite dva realna broja > ");
    scanf("%f %f", &a, &b);

    printf("Upisite vrstu operacije (1-zbrajanje, 2-mnozenje) > ");
    scanf("%d", &vrsta_op);

    switch (vrsta_op){
    case 1:
        rezultat = a + b;
        printf("Zbroj je %f\n", rezultat);
        break;
    case 2:
        rezultat = a * b;
        printf("Umnozak je %f\n", rezultat);
        break;
    default:
        printf("Neispravan odabir ocjene\n");
        break;
    }
    return 0;
}

