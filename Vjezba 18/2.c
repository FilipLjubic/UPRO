/*

Napisati funkciju izbaciSamoglase koja zadani niz znakova mijenja tako da iz njega izbaci sve samoglasnike.

U mainu učitati niz znakova koji zajedno s eventualno učitanom oznakom novog retka sigurno neće biti dulji od 20 znakova, pomoću 
    funkcije izbaciNRizbaciti iz niza eventualno učitanu oznaku novog retka,
    pomoću funkcije izbaciSamoglase iz niza izbaciti sve samoglasnike i ispisati tako promijenjeni niz

*/

#include <stdio.h>

#define LEN 20

void izbaciSamoglase(char *arr){
    int count = 0;
    char x;
    for (int i = 0; i < LEN; i++){
        x = *(arr + i);
        if (x != 'A' && x != 'E' && 
            x != 'I' && x != 'O' && 
            x != 'U' && x != 'a' && 
            x != 'e' && x != 'i' && 
            x != 'o' && x != 'u'){
            *(arr + count) = *(arr + i);
            count ++;
            }
    }
    *(arr + count) = '\0';
    return;
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
    char arr[LEN + 1];
    
    printf("Upisite niz > ");
    fgets(arr, LEN + 1, stdin);

    izbaciNR(arr);
    izbaciSamoglase(arr);
    printf("%s", arr);
    return 0;
}
