#include <stdio.h>

int main(int argc, char const *argv[])
{
    int c, m;
    scanf("%d %d", &c, &m);
    if ((c < 60 && m > 60) || (c > 60 && m < 60))
    {
        printf("1\n");
    }
    else
    {
        printf("0\n");
    }

    return 0;
}
