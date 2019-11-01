/*

10011011 u dekadskom

*/

#include <stdio.h>
#include <math.h>

int main(void){
    int dek = 0;
    int n[8] = {1, 0, 0, 1, 1, 0, 1, 1};
    
    for (int i = 0; i < 8; i++){
        dek += pow(n[7 - i] * 2, i);
    }
    printf("%d\n", dek);
    return 0;
}