#include <stdio.h>
int main()
{
    int i;
    while ((i = getchar()) != EOF)
        if (i == '\t')
            printf("\\t");
        else if (i == '\\')
            printf("\\\\");
        else
            putchar(c);
    return 0;
}
