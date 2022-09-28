#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, s = 0, x;
    scanf("%d", &n);
    x = n;
    for (int i = 1; i < x; i++)
    {
        if (n % i == 0)
        {
            if (i == n / i)
            {
                s += i;
                x = n / i;
            }
            else
            {
                s += i;
                s += n / i;
                x = n / i;
            }
        }
    }
    printf("%d\n", s - n);

    return 0;
}
