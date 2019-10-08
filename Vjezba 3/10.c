#include <stdio.h>
int main(void){
    float xa, ya, xb, yb, xc, yc;
    
    printf("Upisite koordinate vrha trokuta A > ");
    scanf("%f %f", &xa, &ya);
    
    printf("Upisite koordinate vrha trokuta B > ");
    scanf("%f %f", &xb, &yb);
    
    printf("Upisite koordinate vrha trokuta C > ");
    scanf("%f %f", &xc, &yc);
    
    float xTezista = ( xa + xb + xc )/ 3;
    float yTezista = ( ya + yb + yc )/ 3;
    
    printf("Teziste trokuta A(%.1f,%.1f), B(%.1f, %.1f), C(%.1f, %.1f) jest T(%.2f, %.2f)\n",xa, ya, xb, yb, xc, yc, xTezista, yTezista);
    return 0;
}