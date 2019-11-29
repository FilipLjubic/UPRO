/*

S tipkovnice učitati 10 pozitivnih cijelih brojeva. 

Nije potrebno provjeravati jesu li ispravno upisani. 

Brojeve sortirati prema vrijednostima njihove posljednje znamenke, tako da se u poretku prvo pojavljuju brojevi s manjom posljednjom znamenkom. 
Ispisati poredane brojeve, međusobno odvojeneprazninom.

*/

#include <stdio.h>

int main(void){
    int n[10], novi_n[10], trenutni = 0;

    printf("Upisite 10 pozitivnih brojeva > ");
    for (int i = 0; i < 10; i++){
        scanf("%d", &n[i]);
    }

    //sort
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            if (n[j] % 10 == i){
                novi_n[trenutni] = n[j];
                printf("%d ", novi_n[trenutni]);
                trenutni ++;
            }
        }
    }
    printf("\n");
    return 0;
    

}