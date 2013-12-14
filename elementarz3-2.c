#include<stdio.h>
#include <math.h>



//  Napisz program, wypisujący w postaci tabelki pierwiastki z pierwszych 20 liczb naturalnych.
void pierwiastek(double ile);
int main()
{
    float a;

    a = 20;
    pierwiastek(a);

    return 0;
}


void pierwiastek(double x)
{
    ++x;            //zlicza ile pierwiastkow
    while (--x) {

        printf("%d\t%0.5f\n", (int) x, sqrt(x));

    }
}
