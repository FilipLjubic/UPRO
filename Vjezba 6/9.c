/*

S tipkovnice učitati cijeli broj n iz zatvorenog intervala [1, 10]. 
Ako broj nije ispravno upisan ispisati poruku Broj je neispravan. 

Ako je broj ispravno upisan, ispisati tablicu od n redaka i stupaca. 
Koji brojevi se trebaju nalaziti u tablicii prema kojem formatu se ispisuju, zaključiti na temelju primjera izvršavanja programa.


Upisite broj > 5
    1   2   3   4    5
        6   7   8    9
            10  11  12
                13  14
                    15

*/

#include <stdio.h>

int main(void){
    int n, count = 1;

    printf("Upisite broj > ");
    scanf("%d", &n);

    if (n < 1 || n > 10){
        printf("Broj je neispravan\n");
        return 1;
    }

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            if (j >= i){
                printf("%4d", count);
                count ++;
            } else{
                printf("    ");
            }

            if (j == n){
                printf("\n");
            }
        }
    }
    return 0;

}