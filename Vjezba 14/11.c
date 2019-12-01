/*

Napisati funkciju naziva sinus koja će za kut x izražen u radijanima izračunati približnu vrijednost funkcije sinus kao parcijalnu sumu n članova niza. 

Funkcija kao argumente prima realni broj x i pozitivan cijeli broj n koji predstavlja broj članova niza koje treba sumirati.

U glavnom programu učitati realni broj x i pozitivni cijeli broj n, izračunati parcijalnu sumu niza i ispisati koliko rezultat dobiven parcijalnom sumom odstupa od rezultata koji bi se dobio 
korištenjem funkcije sin iz <math.h>. 
U funkciji i glavnom programu koristiti realne brojeve dvostruke preciznosti i cijele brojeve najvećeg mogućeg raspona (tamo gdje je potrebno radi faktorijela).

*/


#include <stdio.h>
#include <math.h>

unsigned long long fact(int n){
    if (n == 0){
        return 1;
    }else{
        return n * fact(n - 1);
    }
}

double sinus(double x, int n){
    double result = 0;

    for (int i = 1; i < n + 1; i++){
        result += pow(-1, i + 1) * (pow(x, 2 * i - 1) / fact(2 * i - 1));
    }
    return result;
}

int main(void){
    int n;
    double x;

    printf("Upisite x i n > ");
    scanf("%lf %d", &x, &n);

    printf("sinus(%lf) = %lf\n", x, sinus(x, n));
    printf("  sin(%lf) = %lf\n", x, sin(x));
    printf("                 razlika = %.15lf\n", sinus(x, n) - sin(x));

    return 0;
}