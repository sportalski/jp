#include<stdio.h>

int main()
{

    int x, i, 
    zliczanie = 0, pierwsza;
    printf("Podaj liczbe calkowita: ");
    scanf("%d", &x);
    for (i = 2; i <= n/2; i++) {
        if (n % i == 0) {
            zliczanie++;
            break;
        }
    }
    if (zliczanie == 0 && n != 1)
        pierwsza = 1;
    else
        pierwsza = 0;

    printf("Podana liczba '%d' jest %s\n",
           x, jest_pierwsza ? "pierwsza" : "złożona");
    return 0;
}
