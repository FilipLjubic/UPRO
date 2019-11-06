/*

S tipkovnice učitati sljedeće podatke za 10 osoba:
    ime (niz znakova koji nije dulji od 30 znakova), 
    prezime (niz znakova koji nije dulji od 30 znakova). 

Nakon učitavanja podataka, podatke o osobama ispisati u obrnutom redoslijedu u odnosu na redoslijed učitavanja.

*/

#include <stdio.h>

int main(void){
    struct osoba_s {
        char name[31];
        char sur[31];
    } arr[10];

    for (int i = 0; i < 10; i++){
        printf("%d. Ime      > ", i + 1);
        fgets(arr[i].name, 31, stdin);

        printf("%d. Prezime  > ", i + 1);
        fgets(arr[i].sur, 31, stdin);

        for (int j = 0; j < 30; j++){
            if (arr[i].name[j] == '\n'){
                arr[i].name[j] = '\0';
            }
            if (arr[i].sur[j] == '\n'){
                arr[i].sur[j] = '\0';
            }
        }
    }
    printf("\n");

    for (int i = 0; i < 10; i++){
        printf("%s, %s\n", arr[9 - i].sur, arr[9 - i].name);
    }
    return 0;
}