/*

Učitati cijeli broj n. 
Nakon toga za n osoba učitati matični broj (cijeli broj) i godinu rođenja osobe (cijeli broj). 

Nakon što su podaci za sve osobe učitani, 
ispisati ih poredane prema godini rođenja (od manjih prema većim), 
a unutar godine rođenja poredano prema matičnom broju (od manjih prema većim).

*/

#include <stdio.h>

int main(void){
    int n, num_dates = 1, j = 0;

    printf("Upisite broj osoba > ");
    scanf("%d", &n);

    struct osoba_s {
        int id;
        int year;
    } osoba[n];

    //ucitavanje podataka ( scanfa u for loopu koji traje n puta)
    for (int i = 0; i < n; i++){
        j = 0;
        printf("%3d. osoba > ");
        scanf("%d %d", osoba[i].id, osoba[i].year);
        
        num_dates++;
        
        //dobit broj razlicitih godina
        while (j < num_dates){
            if (osoba[j].year =)
            j++;
        }
    }
    printf("\n");

    // arr[num_dates] za spremanje najmanjih godina
    // for loop za prolazenje po broju godina
        //pretpostavka da je prvi datum najmanji
        //for loop za pronalazenje najmanjeg

        //kada je najmanji naden 
        //for loop po svakoj osobi opet

}