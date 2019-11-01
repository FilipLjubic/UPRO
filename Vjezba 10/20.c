/*

U jednodimenzijsko polje znakova učitati točno 10 znakova. 

Ispisati učitane članove polja, sortirati članove polja od manjih prema većim i ispisati novi, sortirani sadržaj polja. 
Upotreba pomoćnih polja nije dopuštena.

*/

#include <stdio.h>

int main(void){
    char n[10], pom;

    printf("Upisite 10 znakova > ");
    for (int i = 0; i < 10; i++){
        scanf("%c", &n[i]);
    }
    printf("Original :");
    for (int i = 0; i < 10; i++){
        printf("%c", n[i]);
    }
    printf("\nSortirani:");
    
    //sortiranje od manjeg prema vecem
    for (int i = 0; i < 10; i++){
        
        for (int j = i + 1; j < 10; j++){
            if (n[j] < n[i]){
                pom = n[i];
                n[i] = n[j];
                n[j] = pom;
            }
        }
        printf("%c", n[i]);
    }
    printf("\n");
    return 0;
}