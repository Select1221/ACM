#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    long long num = 1;
    double e = 2.0;
    scanf("%d", &n);
    for (int i = 2; i <= n; i++)
    {
        num *= i;
        e += 1.0 / num;
    }

    printf("%.10lf\n", e);
    return 0;
}
