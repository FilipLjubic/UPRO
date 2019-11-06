/*

S tipkovnice učitati dva niza znakova (string) od kojih svaki zajedno s eventualno učitanom oznakom novog reda sigurno neće biti dulji od 20 
 znakova. 
Ako je u neki od nizova učitana i oznaka novog retka, izbaciti je iz tog niza.

U treći niz znakova (string) upisati rezultat operacije nadovezivanja učitanih nizova (konkatenacije nizova) te ispisati treći niz.

*/

#include <stdio.h>

int main(void){
    char arr1[21], arr2[21];
    char arr3[41];
    int i, j;

    printf("Upisite 1. niz > ");

    fgets(arr1, 21, stdin);
    for (i = 0; i < 20; i++){
        if (arr1[i] == '\n'){
            arr1[i] = '\0';
            break;
        }
    }

    printf("Upisite 2. niz > ");

    fgets(arr2, 21, stdin);
    for (j = 0; j < 20; j++){
        if (arr2[j] == '\n'){
            arr2[j] = '\0';
            break;
        }
    }

    //konkatenacija
    for (int k = 0; k < i; k++){
        arr3[k] = arr1[k];
    }
    for (int k = i; k <= i + j; k++){
        arr3[k] = arr2[k - i];
    }
    printf("%s\n", arr3);
    return 0;
}