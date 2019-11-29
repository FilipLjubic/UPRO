/*

Učitati cijeli broj n. 
Nakon toga za n osoba učitati matični broj (cijeli broj) i godinu rođenja osobe (cijeli broj). 

Nakon što su podaci za sve osobe učitani, 
ispisati ih poredane prema godini rođenja (od manjih prema većim), 
a unutar godine rođenja poredano prema matičnom broju (od manjih prema većim).

*/

#include <stdio.h>

int main(void){
    int n, min;
    _Bool switched = 0;

    printf("Upisite broj osoba > ");
    scanf("%d", &n);

    struct osoba_s {
        int id;
        int year;
    } osoba[n], temp;

    //ucitavanje podataka ( scanfa u for loopu koji traje n puta)
    for (int i = 0; i < n; i++){
        printf("%3d. osoba > ", i + 1);
        scanf("%d %d", &osoba[i].id, &osoba[i].year);
    }
    printf("\n");

    //sortirati osobe po id
    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            if (osoba[j].id < osoba[i].id){
            temp = osoba[i];
            osoba[i] = osoba[j];
            osoba[j] = temp;
            }
        }
    }
    //pronaci najmanju godinu koja nije 0
    //ovaj for loop prolazi samo po godinama osoba i ako je neka vec bila koristena onda se skipa
    for (int i = 0; i < n; i++){
        if (osoba[i].year != 0){
            min = osoba[i].year;
        }
        else{
            continue;
        }
        
        for (int j = 0; j < n; j++){
            if (osoba[j].year != 0 && (osoba[j].year < min)){
                min = osoba[j].year;
                switched = 1;
            }
        }
        printf("%d. godina\n", min);
        //chekirati ako je osoba rodena te godine i ako je ju isprintat i promjenit joj godinu u 0
        for (int j = 0; j < n; j++){
            if (osoba[j].year == min){
                printf("%9d\n", osoba[j].id);
                osoba[j].year = 0;
            }
        }
        if (switched){
            switched = 0;
            i = -1;
        }
    }

    return 0;    
}