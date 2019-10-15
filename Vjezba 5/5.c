/*

Učitati cijeli broj koji predstavlja redni broj operacije.
Ako je redni broj operacije ispravno zadan, učitati dva cjelobrojna operanda i ispisati rezultat operacije ili poruku "Neispravni operandi".
U rješenju, na mjestu gdje je prikladno,koristiti skretnicu (naredbu switch)

*/

#include <stdio.h>

int main(void){
    int x, a, b; //a i b su operandi, x je vrsta operacije

    printf("1. a + b\n"
            "2. a - b\n"
            "3. a * b\n"
            "4. a / b\n"
            "Upisite redni broj operacije > ");
    scanf("%d", &x);
    
    if ( x >= 0 && x <= 4){
        printf("Upisite operande > ");
        scanf("%d %d", &a, &b);
    }

    switch (x) {
        case 1:
            printf("%d + %d = %d\n", a, b, a + b);
            break;
        case 2:
            printf("%d - %d = %d\n", a, b, a - b);
            break;
        case 3:
            printf("%d * %d = %d\n", a, b, a * b);
            break;
        case 4:
            if (b == 0)
                printf("Neispravni operandi\n");
            else
                printf("%d / %d = %d\n", a, b, a / b);
            break;
            
    }
    return 0;
}