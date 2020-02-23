/*

Napisati funkciju izbaciNR koja zadani niz znakova mijenja tako da iz njega izbaci znak novog retka ('\n') ako se radi o posljednjem znaku u
 nizu(dakle, ako se znak '\n' nalazi neposredno prije terminatora niza).
 
U mainu učitati niz znakova koji zajedno s eventualno učitanom oznakom novog retka sigurno neće biti dulji od 20 znakova, 
    pomoću funkcije izbaciNR izbaciti iz niza eventualno učitanu oznaku novog retka, ispisati niz i neposredno iza njega znak uskličnik

*/

#include <stdio.h>

#define LEN 20

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
    printf("%s!", arr);
    return 0;
}