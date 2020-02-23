/*

Napisati funkciju poredaj koja kao parametre prima tri pokazivača na objekte tipa double
 (pokazivače na prvi objekt, drugi objekt i treći objekt). 

Funkcija treba vrijednosti u ta tri objekta zamijeniti tako da vrijednost prvog objekta bude manja ili jednaka vrijednosti drugog objekta,
 a vrijednost drugog objekta manja ili jednaka vrijednosti trećeg objekta. 

Npr. ako je funkcija primila pokazivače na objekte s vrijednostima 5., 3., 7. tada njihove vrijednosti treba zamijeniti tako da objekti
 redom sadrže vrijednosti 3., 5., 7.Napisati glavni program (funkciju main) 
 koji će učitati vrijednosti za tri varijable tipa double, pozvati funkciju poredaj i ispisati nove vrijednosti tih varijabli.

*/

#include <stdio.h>

void swaperoni(double *p1,double *p2){
    double temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
    return;
}

void poredaj(double *p1, double *p2, double *p3){
    if (*p1 > *p2) swaperoni(p1, p2);
    if (*p1 > *p3) swaperoni(p1, p3);
    if (*p2 > *p3) swaperoni(p2, p3);
    return ;    
}

int main(void){
    double a, b, c;

    printf("Upisite tri realna broja > ");
    scanf("%lf %lf %lf", &a, &b, &c);

    poredaj(&a, &b, &c);
    printf("%lf %lf %lf", a, b, c);
    return 0;   
}