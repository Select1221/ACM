#include <stdio.h>

int main(int argc, char const *argv[])
{
    int l;
    double b = 0, w = 0;
    scanf("%d", &l);
    b = 27 + 23 + (l / 3.0);
    w = l / 1.2;
    if (b < w)
    {
        printf("Bike\n");
    }
    else if (b == w)
    {
        printf("All\n");
    }
    else if (b > w)
    {
        printf("Walk\n");
    }

    return 0;
}
