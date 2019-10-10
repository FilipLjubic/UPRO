#include <stdio.h>

int main(void){
    int n;
    
    printf("Upisite 5-znamenkasti cijeli broj > ");
    scanf("%d", &n);

    printf("%d %d %d\n", n/10000, (n/100)%10, (n%10));
    return 0;
}