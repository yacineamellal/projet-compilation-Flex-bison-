flex projet.l
bison -d projet.y
gcc lex.yy.c  projet.tab.c TS.c RS.c Quad.c -o projet
projet.exe <test.txt