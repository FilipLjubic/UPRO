// Dekadski broj 29 prikazati u obliku binarnog broja

#include <stdio.h>

int main(void){
    int n = 29, i = 0;
    int broj[32];
    while (n > 0){
        broj[i] = n % 2;
        n = n / 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j -= 1){
        printf("%d", broj[j]);
    }
    return 0;
}