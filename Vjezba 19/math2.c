#include "math2.h"

// bin. koeficijent C(m, n) multiplikativnom formulom
int binKoef(int m, int n){
    int rez = 1;
    if (n == 0)
        return 1;
    if (n > m / 2)  
        return binKoef(m, m - n);
    return m / n * binKoef(m - 1, n - 1);
}

// x na potenciju n, n >= 0
double eksp(float x, int n){
    double rez = 1.;
    for (int i = 0; i < n; i++){
        rez *= x;
    }
    return rez;
} 

// apsolutna vrijednost od x
float fabsolut(float x){
    if (x < 0){
        return -x;
    }
    return x;
} 

// apsolutna vrijednost od x
double dabsolut(double x){
    if (x < 0){
        return -x;
    }
    return x;
} 

// apsolutna vrijednost od n
int iabsolut(int n){
    if (n < 0){
        return -n;
    }
    return n;
} 

// n!
unsigned long long fakt(unsigned int n){
    if (n == 1 || n == 0) return 1;
    else{
        return n * fakt(n - 1);
    }
}


