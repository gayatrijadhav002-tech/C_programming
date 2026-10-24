
#include <stdio.h>

int Display()
{
    int i = 0;

    i = 5;
    while (i >= 1)
    {
        printf("%d", i);
        i--;
    }

    return 0;
}

int main()
{
    Display();
    return 0;
}

