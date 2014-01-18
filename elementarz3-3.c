#include <stdio.h>

int main() {

int a, b, c;

for (a = 1; a <= 500; a++) {
  for (b = 1; b <= 500; b++) {
    for (c = 1; c <= 500; c++) {

      if ((a*a+b*b == c*c) || (a*a+c*c == b*b) || (b*b+c*c == a*a)) {
        if (a+b+c <= 1000) {
          printf("Trojkat o bokach %d\t%d\t%d\n", a, b, c);
        }
      }

    }
  }
}


return 0;
}
