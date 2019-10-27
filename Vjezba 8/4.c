/*

Cjelobrojno polje je potrebno napuniti s prvih 40 članova Fibonaccijevog niza,
 a zatim ih ispisati.
 
Uputa:
 u prva dva člana polja upisati prva dva člana niza, 1 i 1. 
 Svaki sljedeći član izračunati na temelju prethodna dva. 
 Uočiti da se prethodna dva člana uvijek lako dohvate iz polja,
 sto ga nije potrebno koristiti varijable a_i_minus2 i a_i_minus 1 kao u do sada viđenim primjerima izračunavanja članova Fibonaccijevog niza. 

*/

#include <stdio.h>

int main(void){
    int n[40], sljedeci;
    n[0] = 1;
    n[1] = 1;
    
    for (int i = 2; i < 42; i++){
        sljedeci = n[i - 2] + n[i - 1];
        
        printf("%d\n", n[i - 2]);
        
        n[i - 2] = n[i - 1];
        n[i] = sljedeci;
        
    }
    return 0;
}