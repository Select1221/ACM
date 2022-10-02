#include <stdio.h>

int main(int argc, char const *argv[])
{
    double x, y;
    scanf("%lf %lf", &x, &y);
    if (x <= 1 && x >= -1 && y <= 1 && y >= -1)
    {
        printf("Yes.\n");
    }
    else
    {
        printf("No.\n");
    }

    return 0;
}
