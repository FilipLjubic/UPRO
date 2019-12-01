/*

Napisati funkciju naziva fibonacci15 koja na zaslon,u jednom retku, odijeljene zarezima, ispisuje prvih 15 Fibonaccijevih brojeva. 
Sami odredite odgovarajući tip funkcije, broj i tip parametara.

*/

#include <stdio.h>

void fibonacci15(void){
    int prvi = 1, drugi = 1, temp;
    for (int i = 0; i < 15; i++){
        if (i < 2){
            printf("%d", 1);
            if (i == 0){
                printf(", ");
            }
        }
        else{
            temp = prvi;
            prvi += drugi;
            drugi = temp;
            printf(", %d", prvi);
        }
    }
}

int main(void){
    fibonacci15();
    printf("\n");
    return 0;
}