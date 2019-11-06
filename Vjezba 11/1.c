#include <stdio.h>

int main(void){
    char c = 'A' + '0'; // 113, q
    printf("%d\n", c); // 113
    printf("%c\n", c); // q
    printf("%c\n", 'D' -'A' + '0'); //68 - 65 + 48 == 51 ==> '3'
    printf("%d\n", 'D' -'A' + '0'); // 51
    printf("%d\n", '7' -'5'); // 55 - 53 = 2
    printf("%d\n", '7' -5); // 55 -5 = 50
    printf("%c\n", '7' -5); // '2'
    printf("%d\n", '0' % 10); // 8
    return 0;
}