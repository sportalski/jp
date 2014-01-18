6.
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int zgaduj() {
  int x, y, wynik;

  srand(time(NULL));
  x = rand() % 101;
  y = rand() % 101;
  printf("Podaj wynik mnożenia: %d*%d: ", x, y);
  scanf("%d", &wynik);
  if (wynik == x*y) {
    return 1;
  } else {
    return 0;
  }
}

int main () {
  int i, zgadl = 0, niezgadl = 0;

  for (i = 0; i <=5; i++) {
    if (zgaduj()) {
      printf("Zgadłeś\n");
      zgadl++;
    } else {
      printf("Nie zgadłeś\n");
      niezgadl++;
    }
  }

  printf("Udzieliłeś %d poprawnych odpowiedzi na 5 możliwych\n", zgadl);
  return 0;
}

7.

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int zgaduj() {
  int x, y, wynik;

  srand(time(NULL));
  x = rand() % 101;
  y = rand() % 101;
  printf("Podaj wynik mnożenia: %d*%d: ", x, y);
  scanf("%d", &wynik);
  if (wynik == x*y) {
    return 1;
  } else {
    return 0;
  }
}

int main () {
  int i, zgadl = 0, niezgadl = 0, wiadomosc = 0;

  for (i = 0; i <=5; i++) {
    if (zgaduj()) {
      zgadl++;
      srand(time(NULL));
      wiadomosc = rand() % 3;
      switch(wiadomosc) {
        case 0: 
          printf("Bardzo dobrze!\n"); 
        break;
        case 1: 
          printf("Świetnie\n");
        break;
        case 2: 
          printf("Dobra robota!\n");
        break;
        default:
          printf("Błąd\n"); 
      }
    } else {
      niezgadl++;
      srand(time(NULL));
      wiadomosc = rand() % 3;
      switch(wiadomosc) {
        case 0: 
          printf("Zła odpowiedź\n");
        break;
        case 1: 
          printf("Oj, niedobrze\n");
        break;
        case 2: 
          printf("Następnym razem może pójdzie Ci lepiej\n");
        break;
        default:
          printf("Błąd\n"); 
      }
    }
  }

  printf("Udzieliłeś %d poprawnych odpowiedzi na 5 możliwych\n", zgadl);
  return 0;
}

8.

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void instrukcje(void) {
  printf("Gra polega na odgadywaniu liczby z zakresu 1-1000,\n");
  printf("która została wylosowana przez komputer.\n");
}

void gra() {
  int number, guess, moves = 0;
  
  srand(time(NULL));
  number = rand() % 1001;

  while (1) {
    printf("Podaj liczbe: ");
    scanf("%d", &guess);
    moves++;

   if (guess == number) {
      printf("Brawo, wygrałeś! Potrzebowałeś do tego %d ruchow\n", moves);
      break;
    } else if (guess < number) {
      printf("Za mało\n");
    } else if (guess > number) {
     printf("Za dużo\n");
    }
  }
}

int main () {
  char tmp;
  int tmp2;

  printf("Czy podać instrukcje do gry? T/n\n");
  scanf("%c", &tmp);
  tmp2 = tmp;

  if ((tmp2 == 116) || (tmp2 == 84)) {
    instrukcje();
  } else {
    gra();
  }


   // while (TRUE) {
     //   PlayCrapsGame();
       // if (!GetYesOrNo("Czy chcesz zagrać jeszcz raz? ")) break;
    //}

  return 0;
}

