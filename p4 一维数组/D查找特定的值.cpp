#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, arr[10000], x;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &x);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            printf("%d\n", i);
            return 0;
        }
    }

    printf("-1\n");

    return 0;
}