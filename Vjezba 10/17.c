/*

Napisati program kojim će se učitavati cijeli broj (int) dok god se upisuju brojevi koji odgovaraju ASCII kodovima velikih ili malih slova ili
 znamenki 0-9. 

Svaki ispravno upisani broj ispisati u obliku dekadskog broja i kao znak.

*/

#include <stdio.h>

int main(void){
    int n;

    do {
        printf("Upisite cijeli broj > ");
        scanf("%d", &n);
        if (n >= 48 && n <= 57 
         || n >= 65 && n <= 90 
         || n >= 97 && n <= 122){
             printf("%d %c\n", n, n);
         }
        else break;
    }while(1);
    
    return 0;
}