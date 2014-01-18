0.
#include <stdio.h>

int main() {
    int y, x = 1, wynik = 0;

    while (x<=10) {
        y = x*x;
        printf("%d\n", y);
        wynik += y;
        ++x;
    }
    
    printf("wynik = %d\n", wynik);
    return 0;
}

3.

#include <stdio.h>

main() {
        int n;

        printf("Podaj liczbe n: ");
        scanf("%d", &n);

        if(n >= 1) {
                for(++a; a < b; a++) {
                        printf("%d\n", a);
                }
        } else {
                printf("n nie moze byc mniejsze od 1!\n");
        }
}

4.

#include <stdio.h>

main() {
        int n, i, suma = 0;

        printf("Podaj liczbe n: ");
        scanf("%d", &n);

        if(n >= 1) {
                for(i = 1; i <= n; i++) {
                        suma += i;
                }
                printf("Suma liczb od 1 do %d wynosi %d\n", n, suma);
        } else {
                printf("n nie moze byc mniejsze od 1!\n");
        }
}

5.

#include <stdio.h>

main() {
        int tab[6], i;

        printf("Podaj kolejno 6 liczb\n");
        for(i = 0; i <= 5; i++) {
                scanf("%d", &tab[i]);
        }

        printf("\nTablica od poczatku do konca:\n");
        for(i = 0; i <= 5; i++) {
                printf("%d ", tab[i]);
        }

        printf("\nTablica od konca do poczatku:\n");
        for(i = 5; i >= 0; i--) {
                printf("%d ", tab[i]);
        }
        printf("\n");
}

6.

#include <stdio.h>

main() {
        float tab[6], max, min;
        int i;

        printf("Podaj kolejno 6 liczb rzeczywistych\n");
        for(i = 0; i <= 5; i++) {
                scanf("%f", &tab[i]);
        }

        max = tab[0];
        for(i = 1; i <= 5; i++) {
                if(tab[i] > max) {
                        max = tab[i];
                }
        }
        printf("Najwieksza liczba w tablicy to %2.3f\n", max);

        min = tab[0];
        for(i = 1; i <= 5; i++) {
                if(tab[i] < min) {
                        min = tab[i];
                }
        }
        printf("Najmniejsza liczba w tablicy to %2.3f\n", min);

}

7.

#include <stdio.h>

main() {
        int i, dodatnie, tab[6];

        printf("Podaj kolejno 6 liczb rzeczywistych\n");
        for(i = 0; i <= 5; i++) {
                scanf("%f", &tab[i]);
        }

        for(i = 0; i <= 5; i++) {
                if(tab[i] > 0) {
                        dodatnie++;
                }
        }
        printf("Tablica zawiera %d liczb dodatnich\n", dodatnie);

}

8.

#include <stdio.h>

main() {
        int i, i2, spacje;

        for(i = 1; i <= 4; i++) {
                for(i2 = i; i2 > 0; i2--) {
                        putchar(42);
                }
                printf("\n");
        }
        printf("\n");
        for(i = 4; i >= 1; i--) {
                for(i2 = i; i2 > 0; i2--) {
                        putchar(42);
                }
                printf("\n");
        }
        printf("\n");
        for(i = 4; i >= 1; i--) {
                spacje = i - 4;
                for(spacje; spacje < 0; spacje++) {
                        putchar(32);
                }
                for(i2 = i; i2 > 0; i2--) {
                        putchar(42);
                }
                printf("\n");
        }
        printf("\n");
        for(i = 1; i <= 4; i++) {
                spacje = i - 4;
                for(spacje; spacje < 0; spacje++) {
                        putchar(32);
                }
                for(i2 = i; i2 > 0; i2--) {
                        putchar(42);
                }
                printf("\n");
        }
}

9.

#include <stdio.h>

main() {
        int a, b, i, suma = 0, tab[100], tab2[100];
        printf("Podaj liczbe a: ");
        scanf("%d", &a);
        printf("Podaj liczbe b: ");
        scanf("%d", &b);

        for(i = 0; i <= 99; i++) { //zerowanie tablic
                tab[i] = 0;
                tab2[i] = 0;
        }

        i = 0; 
        while(a >= 1) { //dzielenie na dwa bez reszty pierwszej liczby
                tab[i] = a;
                a = a / 2;
                i++;
        }

        i = 0;
        while(tab[i] > 0) { //podwajanie drugiej
                tab2[i] = b;
                b *= 2;
                i++;
        }

        for(i = 0; i <= 99; i++) {
                if(tab[i] > 0 && tab[i] % 2 > 0) {
                        suma += tab2[i]; //sumowanie tylko tych linijek gdzie liczba a jest nieparzysta
                }
        }

        printf("Wynik mnozenia wynosi %d\n", suma);
}

