/*

Napisati program koji će ispisati tablicu kao u priloženom primjeru izvršavanja programa. 

Napomena: 
očekuje se zadatak riješiti pomoću dvije programske petlje, a ne npr. ovako:
printf("A. a b c d e f .F\n");
printf("B. b c d e f g .G\n");
printf("C. c d e f g h .H\n");
printf("D. d e f g h i .I\n");

*/

#include <stdio.h>

int main(void){
    char granica = 'A';
    char mala_granica;

    while (granica <= 'U'){
        printf("%c. ", granica);

        mala_granica = granica + 32;
        while (mala_granica <= granica + 5 + 32){
            printf("%c ", mala_granica);
            mala_granica ++;
        }
        printf(".%c\n", granica + 5);
        granica ++;
    }

}