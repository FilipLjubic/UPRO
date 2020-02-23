/*

Napisati funkciju stvoriObrnutiNiz koja za zadani niz niz1 stvara novi niz znakova niz2 u kojem su znakovi iz niza niz1 upisani 
    obrnutim redoslijedom.
    (pod stvara misle stvoren je u mainu prije pa je promjenjen) 

U glavnom programu učitati niz znakova koji zajedno s eventualno učitanom oznakom novog retka sigurno neće biti dulji od 20 znakova, 
 pomoću funkcije izbaciNR izbaciti iz tog niza eventualno učitanu oznaku novog retka,
 pomoću funkcije stvoriObrnutiNiz načiniti novi niz, a zatim ispisati učitani i "obrnuti" niz.

*/
#include <stdio.h>
#define LEN 20

//izbacuje novi redak iz ucitanog stringa ako ga ima
void izbaciNR(char *arr){
    while (*arr != '\0'){
        if (*arr == '\n'){
            *arr = '\0';
            return;
        }
        arr++;
    }
}

// u obrnuti str upisuje str, obrnuto lol
void stvoriObrnutiNiz(char *str, char *obrnuti){
    int count = 0;
    int i = 0;
    while(*(str + count) != '\0'){
        count ++;
    }

    while(count != -1){
        *(obrnuti + i) = *(str + count - 1);
        count --;
        i++;
    }
    *(obrnuti + i) = '\0';
    return;
}

int main(void){
    char niz1[LEN + 1];
    char niz2[LEN + 1];

    printf("Upisite niz > ");
    fgets(niz1, LEN + 1, stdin);

    izbaciNR(niz1);
    stvoriObrnutiNiz(niz1, niz2);

    printf("Originalni: %s\n", niz1);
    printf("Obrnuti: %s", niz2);

    return 0;
}