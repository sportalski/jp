CFLAGS = -Wall -pedantic -lm

all : test1 test2 test3 test4 test5

clean :
        @rm -f *~ zadanie1 zadanie2 zadanie3 zadanie4

autor :
        @echo "---------------------"
        @echo "|Sylwester Portalski|"
        @echo "---------------------"
help :
        @echo ""
        @echo "Dostepne opcje: all, clean, autor,"
        @echo "  zad1, zad2, zad3, zad4,"
        @echo "  test1, test2, test3, test4,"
        @echo ""

zad1 : zad1.c
        @gcc $(CFLAGS) -o zadanie1 elementarz3-3.c
zad2 : zad2.c
        @gcc $(CFLAGS) -o zadanie2 zad2.c
zad3 : zad3.c
        @gcc $(CFLAGS) -o zadanie3 zad3.c
zad4 : zad4.c
        @gcc $(CFLAGS) -o zadanie4 zad4.c

test1 : zad1
        @echo ""
        @echo "Zadanie 1."
        @echo ""
        @./zadanie1 
test2 : zad2
        @echo ""
        @echo "Zadanie 2."
        @./zadanie2
test3 : zad3
        @echo ""
        @echo "Zadanie 3."
        @echo ""
        @./zadanie3
test4 : zad4
        @echo ""
        @echo "Zadanie 4."
        @echo "Wpisz tekst po czym zakoncz wpisywanie kombinacją Ctrl+D"
        @./zadanie4
