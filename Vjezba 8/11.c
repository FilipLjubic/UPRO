/*

S tipkovnice učitati prirodni broj n_max iz intervala [1, 10000]. Nije potrebno provjeravati je li upisan ispravan broj.

Nakon toga ispisati sve brojeve iz intervala [1, n_max] čiji pripadni čarobni nizovi imaju najveći total stopping time.

Napomena: 

što su to čarobni niz i total stopping time čarobnog niza, opisano je u posljednjem zadatku 6. vježbi uz predavanja.

*/

#include <stdio.h>

// zadani broj prode kroz magic loop i returna stop time
int magic(int x, int *najveci){
    int time = 0;
    int prethodni;

    while (x != 1){
        prethodni = x;

        if (prethodni % 2 == 0){
            x = prethodni / 2;
        } else {
            x = 3 * prethodni + 1;
        }
        time ++;
    }
    if (time > *najveci){
        *najveci = time;
    }
    return time;
}

int main(void){
    int n, najveci = 0, vrijeme;
    printf("Upisite broj iz intervala [1, 10000] > ");
    scanf("%d", &n);

    // Jednom prode kroz loop da nade najveci stop time
    for (int i = 1; i <= n; i++){
        magic(i, &najveci);
    }
    // Drugi put prode kroz loop da vidi koji sve imaju taj stop time
    printf("U intervalu [1, 10000] najveci tst(=%d) imaju nizovi n =", najveci);
    for (int i = 1; i <= n; i++){
        vrijeme = magic(i, &najveci);
        if (vrijeme == najveci){
            printf(" %d", i);
        }
    }
    printf("\n");

    return 0;
}