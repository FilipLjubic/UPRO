/*

Učitavati cijele brojeve iz zatvorenog intervala [1, 20000] dok god se ne upiše broj izvan tog intervala. 

Prebrojati koliko je upisano brojeva iz intervala [1, 100], 
koliko iz intervala [101, 200], koliko iz intervala [201, 300], ..., koliko iz intervala [19901, 20000]. 

Pronaći i ispisati interval u kojem ima najviše upisanih brojeva.

Ako ima više intervala u kojima ima jednak broj (najveći) upisanih brojeva, ispisati sve takve intervale.

*/

/*
int brojevi[bo], x = 0, intervali[200]

do
    scanf (&brojevi[x])
    x++
while ( 0 < brojevi[x-1] < 20001)

for loop za prebrojati koliko je upisano brojeva iz intervala [j = 101; j < 200002; j+= 100]
    for loop za prolaziti po brojevi za svaki interval isponova
        if (brojevi[i] > j - 101 && brojevi[i] < j)


*/