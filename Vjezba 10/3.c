/*

3.
Registar od 8 bitova koristi se za prikaz brojeva tehnikom dvojnog komplementa. 
Koja dekadska vrijednost je prikazana u registru, ako je sadržaj registra 00011011?
1 + 2 + 8 + 16 = 27

4.
Registar od 8 bitova koristi se za prikaz brojeva tehnikom dvojnog komplementa. 
Koja dekadska vrijednost je prikazana u registru, ako je sadržaj registra 10011011?

B - 1 kompl. = 01100100
B kompl. = 01100101 
=> - (1 + 4 + 32 + 64) = -101

5.
Dekadski broj -14 prikazati kao binarni broj u registru od 5 bitova, korištenjem tehnike dvojnog komplementa.

14 = 01110
B - 1 kompl. = 10001
B kompl. = 10010
-14 = 10010

6.
Dekadski broj -14 prikazati kao binarni broj u registru od 10 bitova, korištenjem tehnike dvojnog komplementa

14 = 00000 01110
B - 1 kompl. = 11111 10001
B kompl. = 11111 10010
-14 = 11111 10010

7.
Koji se najveći i najmanji broj (izraziti u dekadskom obliku) može pohraniti u registru od 12 bita?
a)
ako se ne koristi tehnika dvojnog komplementa (pohranjuju se samo pozitivni brojevi)

2^12 = 4096 brojeva se moze pohraniti, najmanji je 0, najveci je 4095

b)
ako se koristi tehnika dvojnog komplementa (pohranjuju se i pozitivni i negativni brojevi)
4096 / 2 = 2049 - 1(nula) = 2048 pozitivnih i 2049 negativnih

8.
Koliko najmanje bitova treba imati registar ako je u njega potrebno pohraniti dekadski broj 38?
a) 
ako se ne koristi tehnika dvojnog komplementa (pohranjuju se samo pozitivni brojevi) 
6 (raspon [0, 63])

b)
ako se koristi tehnika dvojnog komplementa (pohranjuju se i pozitivni i negativni brojevi)
7 (raspon [-64, 63])


9.
U binarnom brojevnom sustavu, uz primjenu tehnike dvojnog komplementa, koristeći registre veličine 5 bitova, obaviti operacije:
a) 4 + 7
b) 12 - 5 
c) 7 + 11
d) 12 - 16

a) 00100 + 00111 = 01011
b) 01100 - 00101 = 01100 + 11011 = 1(ne gleda se)  00111 
c) 00111 + 01011 = 10010  (u dvojnom komplementu se ne moze pokazati 18, barem u slucaju s 5 bitnim registrom)
d) 01100 - 10000 = 01100 + 10000 = 11100 = 00100  (-4)

10.
Dekadski broj 110 pretvoriti u oktalni broj:
a)direktno (uzastopnim dijeljenjem s 8)
110 / 8 = 13   6
13 / 8 = 1     5
1 / 8 = 0      1

=152

b)indirektno, grupiranjem znamenaka binarnog broja

110 = 001 101 110  => 1 5 6

11.
Dekadski broj 94 pretvoriti u heksadekadski broj:
a)direktno (uzastopnim dijeljenjem s 16)
94 / 16 = 5   14 (E)
5 / 16 = 0    5

= 5E

b)indirektno, grupiranjem znamenaka binarnog broja

94 = 0101 1110 = 5 E

12.
Heksadekadske brojeve F2C i 4E napisati u obliku binarnih i oktalnih brojeva.

F 2 C = 1111 0010 1100  == 111 100 101 100 == 7 4 5 4
4 E = 0100 1110 == 001 001 110 == 1 1 6

13.
Oktalni broj 76431 napisati u obliku heksadekadskog broja.

7 6 4 3 1 = 0111 1101 0001 1001 == 7 D 1 9

14.
Dekadski broj -9 pohraniti u registar od 5 bitova (tehnikom dvojnog komplementa). 
Rezultat prikazati kao:
a) binarni broj
b) heksadekadski broj
c) oktalni broj

9 = 01001 
== 10111 (-9) 
== 1 7 
== 2 7 

*/