// Napisati funkciju naziva kvadrat, tipa int,koja za zadani cijeli broj n (parametar je tipa int) vraća kvadrat broja n, n2.
//U glavnom programu s tipkovnice učitati cijeli broj i ispisati rezultat

#include <stdio.h>
#include <math.h>

float kvadrat(float n){
    return pow(n, 2);
}

int main(void){
    float n;
    printf("Upisite cijeli broj > ");
    scanf("%f", &n);
    printf("%f na kvadrat jest %f\n", n, kvadrat(n));
    return 0;
}
