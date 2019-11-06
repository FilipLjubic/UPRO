/*

S tipkovnice učitati niz znakova (string) koji zajedno s eventualnom učitanom oznakom novog reda sigurno neće biti dulji od 80 znakova. 

Za svako malo slovo engleske abecede koje se barem jednom pojavilo u učitanom nizu, ispisati koliko se puta pojavilo u učitanom nizu.

*/

#include <stdio.h>

int main(void){
    char arr[81];
    int count[26] = {0}, kraj;

    printf("Upisite niz > ");
    fgets(arr, 81, stdin);

    for (kraj = 0; kraj < 80; kraj++){
        if (arr[kraj] == '\n'){
            arr[kraj] = '\0';
            break;
        }
    }

    // zelim ici po cijelom arrayu i ako je slovo izmedu 97 i 122 -> count[arr[i] - 'a']++
    for (int i = 0; i < kraj; i++){
        if (arr[i] >= 97 && arr[i] <= 122){
            count[arr[i] - 'a']++;
        }
    }

    for(int i = 0; i < 26; i++){
        if(count[i] != 0){
            char x = i + 'a';
            printf("slovo '%c' pojavilo se %d puta\n", x, count[i]);
        }
    }

    return 0;
}