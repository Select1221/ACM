#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, sum = 0;

    scanf("%d", &n);

    sum = n;

    for (int i = 2; i <= n; i++)
    {
        sum += 2 * i * (n - i + 1);
    }

    printf("%d\n", sum);

    return 0;
}
