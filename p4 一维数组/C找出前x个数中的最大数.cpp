#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, m, arr[20000], x, max;

    scanf("%d %d", &n, &m);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < m; i++)
    {
        scanf("%d", &x);
        max = arr[x - 1];
        while (x--)
        {
            if (arr[x] > max)
            {
                max = arr[x];
            }
        }
        printf("%d\n",max);
    }

    return 0;
}
