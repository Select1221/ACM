#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    int p = 1, q = 2, t;
    double s = 0;
    scanf("%d", &n);
    while (n--)
    {
        s += 1.0 * q / p;
        t = q;
        q += p;
        p = t;
    }
    printf("%.4lf", s);
    return 0;
}
