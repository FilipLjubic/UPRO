/*

Napisati funkciju umetniZnak koja u zadani niz znakova neposredno ispred zadane pozicije ubacuje zadani znak. 

Pozicija znaka odgovara indeksu znaka.
Funkcija vraća logičku vrijednost istina ako je pozicija bila ispravno zadana, inače vraća laž.

U mainu učitati niz znakova koji zajedno s eventualno učitanom oznakom novog retka sigurno neće biti dulji od 20 znakova, poziciju ispred
 koje treba umetnuti znak i znak. 
 
Pomoću funkcije izbaciNR izbaciti iz niza eventualno učitanu oznaku novog retka, pomoću funkcije umetniZnak umetnuti znak ispred zadane pozicije. 
Ako je znak uspješno umetnut, ispisati novi sadržaj niza, inače, ispisati poruku "Neispravna pozicija". 

*/
#include <stdio.h>

#define LEN 20

_Bool umetniZnak(char *arr, int pos){
    if (*(arr + pos) == '\0'){
        return 0;
    }
    else{
        int i = LEN - 1;
        while (i >= pos){
        //TODO: proučiti slučaj gdje je riječ od 20 znakova bez \n, jer to moze uzrokovat buggove 
        }
        
    }
}

void izbaciNR(char *arr){
    for (int i = 0; i < LEN; i++){
        if (*arr == '\n' && *(arr + 1) == '\0'){
            *arr = '\0';
            return;
        }
        arr++;
    }
}

int main(void){
    char arr[LEN + 1], c;
    int pos;

    printf("Upisite niz > ");
    fgets(arr, LEN + 1, stdin);

    printf("Upisite znak > ");
    scanf("%c", &c);

    printf("Upisite poziciju > ");
    scanf("%d", &pos);

    return 0;
}