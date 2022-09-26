#include <stdio.h>

int main(int argc, char const *argv[])
{
    int m, n, amunty = 0;
    scanf("%d %d", &m, &n);
    if (m % 2 == 0)
    {
        m++;
    }
    if (n % 2 == 0)
    {
        n--;
    }

    for (int i = m; i <= n; i+=2)
    {
        amunty += i;
    }
    printf("%d", amunty);

    return 0;
}
