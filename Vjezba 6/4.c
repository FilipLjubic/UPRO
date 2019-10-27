/*

Ispisivanje prvih n Fibonaccijevih brojeva

1, 1, 2, 3, 5, 8, 13, 21, 34..

*/

#include <stdio.h>

int main(void){
    int n, trenutni = 1, prosli = 0, temp; 
    
    
    printf("Upisite koliko brojeva zelite > ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++){
        printf("%d ", trenutni); 
        
        temp = trenutni;
        trenutni += prosli;
        prosli = temp;
        
    }
    printf("\n");
    return 0;
}


/*

n      trenutni         prosli

1         1               0
2         1               1
3         2               1
4         3               2
5         5               3

svaki put treba samo dodati trenutnom prosli i onda prosli promjenit na prijasnji trenutni.. koliko god zbunjujuce bilo

*/