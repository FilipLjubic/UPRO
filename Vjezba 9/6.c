/*

Uz kontrolu učitati vrijednosti za broj redaka m i broj stupaca n dvodimenzijskog cjelobrojnog polja. 

Broj redaka mora biti iz intervala [4, 8], a broj stupaca iz intervala [5, 10]. 

Nakon toga učitati članove matrice. 

Jednodimenzijsko polje sumaPoStupcima napuniti sumama vrijednosti po stupcima. 
Nakon toga ispisati članove polja sumaPoStupcima.

*/

#include <stdio.h>

int main(void){
    int m, n;

    do {
        printf("Upisite m [4, 8] > ");
        scanf("%d", &m);
    } while(m > 8 || m < 4);

    do {
        printf("Upisite n [5, 10] > ");
        scanf("%d", &n);
    } while(n > 10 || n < 5);

    int matrica[m][n];
    int sumaPoStupcima[n];

    printf("Upisite %d x %d clanova >\n", m, n);

    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            scanf("%d", &matrica[i][j]);
        }
    }

    for (int j = 0; j < n; j++){
        int suma = 0;
        for (int i = 0; i < m; i++){
            suma += matrica[i][j];
        }
        sumaPoStupcima[j] = suma;
    }
    
    printf("Sume po stupcima:\n");
    for (int i = 0; i < n; i++){
        printf("%5d", sumaPoStupcima[i]);
    }
    printf("\n");
    return 0;
}