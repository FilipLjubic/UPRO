/*

Napisati funkciju naziva tablicakoja na zaslon ispisuje tablicu množenja za zadanih mredaka i nstupaca.Sami odredite odgovarajući tip funkcije, broj i tip parametara.

*/

#include <stdio.h>


void tablica(int m, int n){
    for (int i = 0; i < m +1; i++){
        for (int j = 0; j < n + 1; j++){
            if (i == 0 && j == 0){
                printf("     ");
            }
            else if (i == 0){
                printf("%5d", j);
            }
            else if(j == 0){
                printf("%5d", i);
            }
            else{
                printf("%5d", j * i);
            }
            
        }
        printf("\n");
    }
}

int main(void){
    int m,n;

    printf("Upisite broj redaka i stupaca > ");
    scanf("%d %d", &m, &n);
    tablica(m, n);

    return 0;
}