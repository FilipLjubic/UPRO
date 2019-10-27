// Napisati program koji će ispisati prvih 25 prim brojeva.

#include <stdio.h>

int main(void){
    int count = 0, je_prost = 1;

    for (int i = 2;count < 25;i++) {
        for (int j = 2;j < i; j++) {
            if (i % j == 0){
                je_prost = 0;
            }
        }
        if (je_prost){
            printf("%d\n", i);
            count ++;
        }else {
            je_prost = 1;
        }
        
    }
    return 0;
}