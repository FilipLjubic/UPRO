/*

Napisati funkciju brojiVelikaMala koja vraća broj velikih i broj malih slova u zadanom nizu. 

U glavnom programu (funkciji main) učitati niz znakova koji zajedno s eventualno učitanom oznakom 
    novog retka sigurno neće biti dulji od 20 znakova, pomoću funkcije izračunati, a zatim na zaslon ispisati dobivene rezultate.

*/
#include <stdio.h>
#define LEN 20

//primi pointer na string i 2 buffera u koje sprema broj velikih i malih slova
void brojiVelikaMala(char *str, int *mala, int *velika){
    while (*str != '\0'){
        if (*str >= 'a' && *str <= 'z'){
            *mala = *mala + 1;
            // ili ++*mala
            //ali ne *(mala++)
        }else if (*str >= 'A' && *str <= 'Z'){
            *velika = *velika + 1;;
        }
        str++;
    }
    return;
}

int main(void){
    char str[LEN + 1];
    int mala = 0, velika = 0;

    printf("Upisite niz > ");
    fgets(str, LEN + 1, stdin);
    
    brojiVelikaMala(str, &mala, &velika);

    printf("Velikih: %d\n", velika);
    printf("Malih: %d", mala);
    return 0;
}
