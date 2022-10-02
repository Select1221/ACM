#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    int sum = 0;
    int a[1000], b[1000];

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
    }

    for (int i = 0; i < n; i++)
    {
        sum += a[i] * b[i];
    }

    printf("%d\n",sum);

    return 0;
}
