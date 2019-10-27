#include <stdio.h>

int main(void) {
    int granica,  i = 1;

    pocetak:

    printf("Upisite granicu > ");
    scanf("%d", &granica);
    if (granica < 0){
        return 0;
    }
    
    
    printf("granica = %d\n", granica);
    
    linija:
    printf("%4d", i);

    i += 1;
    if (granica == 1){
        printf("\n");
        goto pocetak;
    }
    else if (i == granica + 1){
        printf("\n");
        granica -= 1;
        i = 1;
        goto linija;
    }
    else {
        goto linija;
    }
    
}
