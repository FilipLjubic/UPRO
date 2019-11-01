/*

Pretinci u sefu označeni su šiframa (7-znamenkasti pozitivni brojevi). 
Za svaki pretinac, osim šifre, evidentiraju se njegove mjere izražene u centimetrima: visina, širina i dubina(cijeli brojevi),
 te volumen u litrama (realni broj).
 
Učitati cijeli broj n koji predstavlja broj pretinaca koje treba evidentirati, a zatim za svaki od n pretinaca učitati šifru pretinca,
 njegovu visinu, širinu i dubinu, a volumen izračunati i pohraniti u podatke tog pretinca.
Nakon toga, u poretku od najvećih prema najmanjim pretincima,ispisati šifru pretinca i njegov volumen izražen u litrama.

*/

#include <stdio.h>

int main(void){
    int n;
    

    struct pretinac_s{
        int sifra;
        int visina;
        int sirina;
        int dubina;
        float volumen;
    };
    
    printf("Upisite broj pretinaca > ");
    scanf("%d", &n);
    float najveci;
    struct pretinac_s p[n];

    printf("Upisite podatke za pretince (%d)\n", n);
    for (int i = 0; i < n; i++){
        printf("%d. pretinac > ", i + 1);
        scanf("%d %d %d %d", &p[i].sifra, &p[i].visina, &p[i].sirina, &p[i].dubina);
        p[i].volumen = (p[i].visina * p[i].sirina * p[i].dubina) / 1000.f;
    }
    struct pretinac_s novo[n];
    printf("Sortirani pretinci:\n");
    //sortiranje
    //trebam odredit najveci u pretincu i onda usprediti sve pretince s tim najvecim, ako su isti i nije iskoristen isprintat ga,
    

    for (int i = 0; i < n; i++){
        najveci = p[0].volumen;
        for (int j = 0; j < n; j++){
            if (p[j].volumen > najveci){
                najveci = p[j].volumen;
            }
        }

        for (int j = 0; j < n; j++){
            if (najveci == 0.f){
                break;
            }
            if (p[j].volumen == najveci){
                novo[i].volumen = p[j].volumen;
                novo[i].sifra = p[j].sifra;
                printf("%d = %.2f litara\n", novo[i].sifra, novo[i].volumen);
                p[j].volumen = 0;
            }
        }
    }

    return 0;
}