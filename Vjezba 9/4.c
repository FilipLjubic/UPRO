/*

Učitati vrijednosti za broj redaka m i broj stupaca n dvodimenzijskog cjelobrojnog polja. 
Ne treba provjeravati jesu li upisane ispravne vrijednosti. 

Po retcima učitati vrijednosti članova dvodimenzijskog cjelobrojnog polja od m redaka i n stupaca. 

Nakon toga treba retke matrice  posmaknuti prema gore: 
    redak s indeksom i dobiva vrijednosti iz retka s indeksom i + 1, a posljednji redak polja dobiva vrijednosti retka s indeksom 0.
    Nakon obavljenog posmaka redaka, ispisati novu matricu. 

Zadatak treba riješiti bez upotrebe pomoćnog polja.

*/

/*

učitati broj redaka i stupaca (m, n)

učitati brojeve u matricu s m,n  dimenzijama

pomaknuti redak prema gore 

printati novu matricu
*/

#include <stdio.h>

int main(void){
    int m, n;

    printf("Upisite m, n > ");
    scanf("%d %d", &m, &n);

    int matrica[m][n];
    
    printf("Upisite %d x %d clanova >\n", m, n);

    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            scanf("%d", &matrica[i][j]);
        }
    }

    //switcheronies
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            int pomocni = matrica[0][j];
            matrica[0][j] = matrica[m - 1 - i][j];
            matrica[m - 1 - i][j] = pomocni;
        }
    }

    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            printf("%4d", matrica[i][j]);
        }
        printf("\n");
    }

    return 0;
}

/*
saveat u pomocni prvi
prvi zamjenit za zadnji
zadnji zamjenit za pomocni

prvo switchat prvi i zadnji
onda switchat prvi i predzadnji
switchat matrica[0][j] sa matrica[m - 1 - i][j]

*/