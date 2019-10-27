/*

S tipkovnice učitati cijeli broj m iz zatvorenog intervala [1, 10] i cijeli broj n iz zatvorenog intervala  [1, 10].
Nije potrebno provjeravati jesu li brojevi ispravno upisani. 

Ispisati tablicu od m redaka i n stupaca. 
Koji brojevi se trebaju nalaziti u tablici i prema kojem formatu se ispisuju, zaključiti na temelju primjera izvršavanja programa.

Upisite m, n > 5 3
   3   2   1
   4   3   2
   5   4   3
   6   5   4
   7   6   5

*/

#include <stdio.h>

int main(void){
    int m, n, broj;

    printf("Upisite m, n > ");
    scanf("%d %d", &m, &n);

    broj = n;

    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            printf("%4d", broj - j);
            if (j == n - 1){
                printf("\n");
            }
        }
        broj ++;
    }
    return 0;
}