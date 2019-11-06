/*

S tipkovnice učitati niz znakova (string) koji zajedno s eventualno učitanom oznakom novog reda sigurno neće biti dulji od 20 znakova.

Ako je u niz učitana i oznaka novog retka, izbaciti je iz učitanog niza. Ispisati niz znakova.
Izračunati i ispisati koliko u učitanom nizu ima samoglasnika, koliko suglasnika, a koliko ostalih znakova.

*/

#include <stdio.h>

int main(void){
    char c[21];
    int samo = 0, sug = 0, ostali = 0;
    char samoglasnici[10] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    _Bool je_samo;


    printf("Upisite niz > ");
    fgets(c, 21, stdin);
    for (int i = 0; i < 20; i++){
        if (c[i] == '\n'){
            c[i] = '\0';
        }
    }
    printf("Niz: %s\n", c);

    for(int i = 0; i < 20; i++){
        je_samo = 0;
        
        for (int j = 0; j < 10; j++){
            if (samoglasnici[j] == c[i]){
                samo ++;
                je_samo = 1;
            }
        }
        if (((c[i] >= 65 && c[i] <= 90) || (c[i] >= 97 && c[i] <= 122)) && !je_samo){
            sug++;
        }
        else{
            ostali++;
        }
    }
    printf("Samoglasnika: %d\n"
           "Suglasnika: %d\n"
           "Ostalih: %d\n", samo, sug, ostali);

    return 0;
}