#include <stdio.h>

int main(void){
    int a,b,c;
    
    printf("Upisite 2 cijela broja >");
    scanf("%d %d", &a, &b);
    c = a;
    a = b % 10;
    b = c % 10;
    printf("a = %d\nb = %d\n", a, b);
    return 0;
}