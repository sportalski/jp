#include <stdio.h>

int main()
{
    int i = 1;
    while (i <= 8) {

        if (i % 2 == 0)
            printf(" * * * * * * * *\n");
        else
            printf("* * * * * * * *\n");

        ++i;
    }
    return 0;
}
