// Napisati program koji će ispisati prim brojeve iz zatvorenog intervala [1000, 10000]

#include <stdio.h>

int main(void){
    int je_prost = 1;

    for (int i = 1000;i <= 10000;i++) {
        for (int j = 2;j < i; j++) {
            if (i % j == 0){
                je_prost = 0;
            }
        }
        if (je_prost){
            printf("%d\n", i);
        }else {
            je_prost = 1;
        }
        
    }
    return 0;
}