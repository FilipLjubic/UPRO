/*

Ispisati sve Pitagorine trojke čiji su članovi veći od 0 i manji ili jednaki 100.

Ispis treba izgledati ovako:

1. trojka: 3^2 + 4^2 = 5^2
2. trojka: 4^2 + 3^2 = 5^2
3. trojka: 5^2 + 12^2 = 13^2
... itd.
102. trojka: 84^2 + 13^2 = 85^2
103. trojka: 84^2 + 35^2 = 91^2
104. trojka: 96^2 + 28^2 = 100^2

Uputa: zadatak se može riješiti tako da se pomoću tri ugniježđene petlje testira svaka kombinaciju 3 cijela broja:
1 1 1;
1 1 2; 
1 1 3; 
... 
1 1 99; 
1 1 100; 
1 2 1; 
1 2 2; 
...; 
1 2 100; 
1 3 1; ... 
if i^2 + j^2 = k^2  s time da je i,j,k > 0 i <= 100
Ispisati samo one kombinacije 3 cijela broja koji zadovoljavaju "uvjet pitagorine trojke".
*/

#include <stdio.h>
#include <math.h>

int main(void){
    int count = 0;

    for (int i = 1;i <= 100; i++){
        for (int j = 1;j <= 100;j++){
            for (int k = 1;k <= 100;k++){
                if ((pow(i, 2)) + pow(j, 2) == pow(k, 2)){
                    count ++;
                    printf("%d trojka: %d^2 + %d^2 = %d^2\n", count, i, j, k);
                }
            }
        }
    }
    return 0;
}