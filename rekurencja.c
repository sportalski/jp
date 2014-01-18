1.

#include <stdio.h>

int potegaRekurencyjnie(x, x1, y) {
  if(y == 1){
    return x1;
  } else {
    potegaRekurencyjnie(x, x1*x, --y);
  }
}

int main() {
  int n, k;
  printf("Podaj liczbe n: ");
  scanf("%d", &n);
  printf("Podaj liczbe k: ");
  scanf("%d", &k);

  printf("%d podniesione do potegi %d rowna sie %d\n", n, k, potegaRekurencyjnie(n, n, k));
  return 0;
}

2.

#include <stdio.h>

odwracaj(int x) {
  if() {
    return 1;
  } else if (n > 0 && k > 0 && n > k) {
    return newtonRekurencyjnie(n-1, k-1) + newtonRekurencyjnie(n-1, k);
  }
}

int main() {
  int napis;
  printf("Podaj cyfre: ");
  scanf("%d", &napis);

  printf("Odwrocona cyfra: ", odwracaj(napis));
  return 0;
}

4.

#include <stdio.h>

int euklides(int x, int y) {
  if (y == 0){
    return(x);
  } else {
    return euklides(y, x%y);
  }
}

main() {
  int a, b;
  printf("Wpisz pierwsza liczbe: ");
  scanf("%d", &a);
  printf("Wpisz druga liczbe: ");
  scanf("%d", &b);
  printf("Ich najwiekszy wspolny dzielnik to: %d\n", euklides(a, b));
}
