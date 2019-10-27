#include <stdio.h>

#define GRANICA_1 10
#define GRANICA_2 30

int main(void) {
    int m, n;
    
    printf("Upisite m, n > ");
    scanf("%d %d", &m, &n);
    
    do {
        linija:
        m = m -1;
        n = n + 1;
        if (m < GRANICA_1 || n > GRANICA_2)
            goto kraj;
        printf("\nm=%d, n=%d\n", m, n);
        if (m < n) {
            printf("prekidam\n");
            goto kraj;
        }
        printf("%d + %d = %d\n", m, n, m + n);
        if (m % 2 == 0 || n % 5 == 0) {
                printf("nastavljam\n");
                goto linija;
        }
            
        printf("%d * %d = %d\n", m, n, m * n);
    }
    while (m > GRANICA_1 && n < GRANICA_2);
    kraj:
    return 0;
}