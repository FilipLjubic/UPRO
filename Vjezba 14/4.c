/*

Napisati funkciju naziva jestVelikoSlovo koja za zadani znak vraća logičku vrijednost istina ili laž, ovisno o tome je li zadani znak veliko slovo ili nije. 
Sami odredite odgovarajući tip funkcije, broj i tip parametara.
U glavnom programu s tipkovnice učitati jedan znak te na zaslon, ovisno o rezultatu funkcije, ispisati poruku "Jest veliko slovo" ili poruku "Nije veliko slovo"

*/

#include <stdio.h>

_Bool jestVelikoSlovo(char c){
    if (c >= 'A' && c <= 'Z'){
        return 1;
    }
    else return 0;
}

int main(void){
    char c;
    printf("Upisite znak > ");
    scanf("%c", &c);
    if (jestVelikoSlovo(c)){
        printf("Jest veliko slovo\n");
    }
    else printf("Nije veliko slovo\n");
    return 0;
}