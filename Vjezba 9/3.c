/*

Učitati vrijednosti za broj redaka m i broj stupaca n dvodimenzijskog cjelobrojnog polja. 
Ne treba provjeravati jesu li upisane ispravne vrijednosti. 

Po retcima učitati vrijednosti članova dvodimenzijskog cjelobrojnog polja od m redaka i n stupaca. 

Nakon što su sve vrijednosti upisane, pronaći i ispisati indekse najmanjih članova u svakom stupcu.

*/

#include <stdio.h>

int main(void){
    int m, n;

    printf("Upisite m, n > ");
    scanf("%d %d", &m, &n);
    printf("Upisite %d x %d clanova > \n", m, n);

    int brojevi[m][n];

    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            scanf("%d", &brojevi[i][j]);
        }
    }
    //pronalazenje najmanjeg u svakom stupcu
           
    for(int i = 0; i < n; i++){
        //pronalazenje najmanjeg u svakom stupcu
        int najmanji = brojevi[0][i];
        int count = 0;
        printf("%d. stupac:", i + 1);

        for (int j = 0; j < m; j++){
            if (brojevi[j][i] < najmanji){
                najmanji = brojevi[j][i];
            } else if (brojevi[j][i] == najmanji){
                count ++;
            }
        }
        
        //ako je trenutni najmanji, pronalazenje koje cu printati
        
        for (int k = 0; k < m; k++){
            if (brojevi[k][i] == najmanji){
                printf(" (%d, %d)", k, i);
                if (count != 1){
                    printf(",");
                    count -= 1;
                }
            }    
        }
        printf("\n");
    }
    return 0;
}