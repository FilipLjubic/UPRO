/*

U datoteci math2.c napisati definicije funkcija čiji su prototipovi prikazani u nastavku:
    int binKoef(int m, int n); // bin. koeficijent C(m, n) multiplikativnom formulom
    double eksp(float x, int n); // x na potenciju n, n >= 0
    float fabsolut(float x); // apsolutna vrijednost od x
    double dabsolut(double x); // apsolutna vrijednost od x
    int iabsolut(int n); // apsolutna vrijednost od n
    unsigned long long
    fakt(unsigned int n); // n!

Prototipove (deklaracije) navedenih funkcija smjestiti u datoteku zaglavlja math2.h
Glavni program (funkciju main) smjestiti u datoteku 1.c.

U glavnom programu treba izračunati i na zaslon 
    ispisati po jedan rezultat poziva svake od navedenih funkcija. 
Vrijednosti argumenata i format ispisa na zaslon odabrati po želji.

Prevođenje programa testirati na dva načina:
    a) jednim pozivom prevodioca prevesti i povezati oba modula
    b) svaki od modula prevesti zasebno po jednim pozivom prevodioca, a zatim povezati dobiveni objektni kod

*/
#include <stdio.h>
#include "math2.h"
