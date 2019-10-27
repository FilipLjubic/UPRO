/*

Algoritam za provjeru je li neki broj primbroj, koji se koristio u dosadašnjim primjerima,može se na jednostavan način znatno unaprijediti:

ako cijeli broj n nije djeljiv niti jednim brojem manjim ili jednakim od n^1/2, tada nije djeljiv niti jednim brojem većim od n^1/2. 

To znači da nema potrebe testirati djeljivost s brojevima sve do n-1, dovoljno je testirati djeljivost s brojevima do n1/2.

•ako cijeli broj nije djeljiv s 2, tada nije djeljiv niti jednim parnim brojem većim od 2. 

To znači da je dovoljno testirati djeljivost s 2, a zatim testirati djeljivost samo neparnim brojevima 

Napisati program kojim će se učitati prirodni broj n. Nije potrebno provjeravati je li upisan ispravan broj.
Provjeriti je li broj prim broj testiranjem njegove djeljivosti s 2 i sljedećim neparnim brojevima (dakle 3, 5, 7, ...) manjim ili jednakim n^1/2.

*/

#include <stdio.h>
#include <math.h>

int main(void){
    int je_prost = 1, n;

    printf("Upisite neki cijeli broj > ");
    scanf("%d", &n);

    if (n % 2 == 0){
        je_prost = 0;
    }
    for (int j = 3;j <= sqrt(n); j+= 2) {
        if (n % j == 0){
            je_prost = 0;
        }
    }
    if (je_prost){
        printf("Broj je prost\n");
    }else{
        printf("Broj nije prost\n");
    }
    return 0;
    
}