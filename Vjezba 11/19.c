/*

Učitati int n. 
Nakon toga za n oglasa za prodaju nekretnina učitati šifru oglasa (int), cijenu nekretnine (int) i površinu nekretnine (int). 

Ispisati oglase poredane po cijeni (od većih prema manjim), 
unutar toga poredano po površini (od većih prema manjim), 
a unutar toga poredano prema šifri oglasa (od manjih prema većim).

*/

#include <stdio.h>

int main(void){
    int n;

    printf("Upisite broj oglasa > ");
    scanf("%d", &n);

    struct ad_s {
        int id;
        int price;
        int area;
    } ad[n], temp;

    for (int i = 0; i < n; i++){
        printf("%3d. oglas > ", i + 1);
        scanf("%d %d %d", &ad[i].id, &ad[i].price, &ad[i].area);
    }
    printf("\n");

    // sortiranje
    for (int i = 0; i < n - 1; i++){
        for (int j = i + 1; j < n; j++){
            //ako je cijena jednaka prvom checkam dalje, ako je veca ih zamjenim odmah
            if (ad[j].price > ad[i].price){
                temp = ad[i];
                ad[i] = ad[j];
                ad[j] = temp;
            }
            else if (ad[j].price == ad[i].price){
                //ako je povrsina jednaka checkam dalje, ako je veca ih zamjenim odmah
                if (ad[j].area  > ad[i].area){
                    temp = ad[i];
                    ad[i] = ad[j];
                    ad[j] = temp;
                }
                else if (ad[j].area == ad[i].area){
                    //ako je id manji ih zamjenim
                    if (ad[j].id < ad[i].id);
                    temp = ad[i];
                    ad[i] = ad[j];
                    ad[j] = temp;
                }
            }
        }
    }

    for (int i = 0; i < n; i++){
        printf("%8d EUR     %4d m2    %5d\n", ad[i].price, ad[i].area, ad[i].id);
    }
    return 0;    
}