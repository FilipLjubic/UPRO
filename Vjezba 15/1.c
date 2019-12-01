/*

Napisati rekurzivnu funkciju naziva fibonacci. Matematički izraz kojim je definirana funkcija je:
𝑓𝑖𝑏𝑜𝑛𝑎𝑐𝑐𝑖(𝑛)={1 𝑧𝑎 𝑛=1,2
           𝑓𝑖𝑏𝑜𝑛𝑎𝑐𝑐𝑖(𝑛−1)+𝑓𝑖𝑏𝑜𝑛𝑎𝑐𝑐𝑖(𝑛−2) 𝑧𝑎 𝑛 > 2
U glavnom programu s tipkovnice učitati cijeli broj n koji predstavlja redni broj člana niza, pozivom funkcije izračunati, a zatim ispisati n-ti član niza.

*/

#include <stdio.h>

int fibonacci(int n){
    if (n == 1 || n == 2){
        return 1;
    }
    else{
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main(void){
    int n;
    printf("Upisite redni broj clana niza > ");
    scanf("%d", &n);

    printf("fibonacci(%d) = %d\n", n, fibonacci(n));
    return 0;
}