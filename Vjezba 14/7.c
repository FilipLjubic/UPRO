/*

Napisati funkciju naziva fibonacciN koja na zaslon, u jednom retku, odijeljene zarezima, ispisuje zadani broj Fibonaccijevih brojeva (zadani broj članova može biti nenegativni broj, dakle i nula). 
Sami odredite odgovarajući tip funkcije, broj i tip parametara.
U glavnom programu učitati cijeli broj (željeni broj članova koje treba ispisati) i pozivom funkcije ispisati članove niza.

*/

#include <stdio.h>

void fibonacciN(int n){
    int prvi = 1, drugi = 1, temp;

    for (int i = 0; i < n; i++){
        if (i == 0){
            printf("1");
        }
        else{
            printf(", %d", prvi);

            temp = prvi;
            prvi += drugi;
            drugi = temp;
        }    
    }
}


int main(void){
    int n;
    printf("Upisite broj clanova > ");
    scanf("%d", &n);

    fibonacciN(n);
    
    printf("\n");
    
    return 0;
}