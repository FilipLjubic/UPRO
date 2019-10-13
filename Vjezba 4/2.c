/* 

Napisati program kojim će se u varijable a i b učitati dva cijela broja. Ako su brojevi jednaki, ispisati poruku 'Brojevi su jednaki i (nepromijenjene) vrijednosti varijabli a i b'.
Ako je vrijednost a veća od vrijednosti b, zamijeniti vrijednosti u varijablama a i b i ispisati poruku Zamjena obavljena i nove vrijednosti varijabli a i b.
Inače, ispisati poruku 'Zamjena nije obavljena i (nepromijenjene) vrijednosti varijabli a i b'.

Upisite dva cijela broja > 5 5
Brojevi su jednaki
a = b = 5

Upisite dva cijela broja > 1 2
Zamjena nije obavljena
a = 1, b = 2

*/

#include <stdio.h>

int main(void){
    int a, b, c;

    printf("Upisite dva cijela broja > ");
    scanf("%d %d", &a, &b);

    c = a;

    if (a > b) {
        a = b;
        b = c;

        printf("Zamjena obavljena\n");
        printf("a = %d, b = %d\n", a, b);
    }
    else if ( a == b){
        printf("Brojevi su jednaki\n");
        printf("a = b = %d\n", a);
    }
    else {
        printf("Zamjena nije obavljena\n");
        printf("a = %d, b = %d\n", a, b);
    }
    return 0;
}