#include <stdio.h>

int main() {
   int c, nb = 0, nt = 0, nl = 0;

   while ((c=getchar()) != EOF) {
      switch(c) {
         case 32:
         nb++;
         break;

         case 9:
         nt++;
         break;

         case 10:
         nl++;
         break;
      }
   }
   printf("liczba znaków odstępu = %d, tabulacji = %d, nowego wiersza = %d\n", nb, nt, nl);
   return 0;
}
