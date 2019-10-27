/*

Cjelobrojno polje napuniti s prvih 500 primbrojeva. 

Koristiti činjenicu da je neki broj n prim broj ako nije djeljiv s niti jednim prim brojem manjim od n. 
Nakon punjenja polja ispisati sadržaj polja. 

Uputa:
u polje kao prvi član ubaciti prvi prim broj, broj 2. 
Zatim redom zasvaki neparni broj veći od 2 ("broj kandidat") ispitivati je li
djeljiv s bilo kojim prim brojem koji se do tada već nalazi u polju prim brojeva 
(pri tome uvijek preskočiti prvi član, tj.
2). U vanjskoj petlj i povećava se "broj kandidat" sve dok se ne popuni 500 prim brojeva,
a unutarnjom petljom se testira djeljivost "broja-kandidata" sa svim prethodno upisanim prim brojevima osim 
1. člana.
Kada se za neki broj utvrdi da jest prim broj, dodaje ga se u polje.
Na kraju ispisati sve prim brojeve, zajedno s rednim brojevima.

1.·····2
2.·····3
3.·····5
4.·····7

...
498.··3557
499.··3559
500.··3571

*/

#include <stdio.h>

int main(void){
    int n[500] = {0}, je_prim = 1, k = 1;
    n[0] = 2;
    printf("%d.  %d\n", 1, n[0]);
    for (int i = 3; n[499] == 0 ; i += 2){
        
        for (int j = 0; j < k; j++) {
            
            if (i % n[j] == 0) {
                je_prim = 0;
            } 
        }

        if (je_prim) {
             n[k] = i;
             printf("%d.  %d\n", k + 1, n[k]);
             k++;
        }else {
            je_prim = 1;
        }
    }
    return 0;
}