/*

S tipkovnice učitati niz znakova (string) koji zajedno s eventualno učitanom oznakom novog reda sigurno neće biti dulji od 100 znakova. 
Ako je u niz učitana i oznaka novog retka, izbaciti je iz učitanog niza. 

Učitati cijeli broj te ako broj predstavlja ispravnu poziciju znaka u nizu, u nizna zadanu poziciju ubaciti znak X te promijenjeni niz
 ispisati na zaslon. 

Inače, ispisati poruku "Neispravna pozicija". 
Smatra se da pozicije počinju od 1, tj. prvi znak u nizu (s indeksom nula) jest znak na poziciji 1.

*/

#include <stdio.h>

int main(void){
    char c[101];
    int n, i;

    printf("Upisite niz > ");

    fgets(c, 101, stdin);
    for (i = 0; i < 100; i++){
        if (c[i] == '\n'){
            c[i] = '\0';
            break;
        }
    }

    printf("Upisite poziciju > ");
    scanf("%d", &n);

    n -= 1;
    
    if (n >= i || n < 0){
        printf("Neispravna pozicija\n");
        return 1;
    }
    //na poziciju n ubaciti X, ostale pomaknuti za 1 u desno
    else{
        // ide od zadnjeg i svaki stavi na index + 1

        for (int j = i; j >= n; j--){
            c[j + 1] = c[j];
        }
        c[n] = 'X';
    }
    printf("%s\n", c);
    return 0;
}