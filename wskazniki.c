1.

#include <stdio.h>

int main () {
  int ref[] = {8, 4, 0, 2};
  int *wsk;
  int indeks;

  for (indeks = 0, wsk = ref; indeks < 4; indeks++, wsk++)
    printf("%d %d\n", ref[indeks], *wsk);
}

2.

#include <stdio.h>

int main () {
  int tab[2][2] = {{12}, {14, 16}};
  int *wsk;
  int indeks;

  wsk = tab[0];

  printf("%d, %d\n", *wsk, *(wsk+2));
}

3.

#include <stdio.h>

void podnies_do_kwadratu(int *n) {
  *n *= *n;
}

void wczytaj_liczbe(int *n) {
  printf("Wpisz liczbę naturalną: ");
  scanf("%d", n);
}

int main() {
  int liczba = 0;
  wczytaj_liczbe(&liczba);
  podnies_do_kwadratu(&liczba);
  printf("Kwadrat wczytanej liczby to %d\n", liczba);
  
  return 0;
}
