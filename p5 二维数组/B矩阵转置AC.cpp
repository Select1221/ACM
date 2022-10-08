#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, m;
    int a[100][100];

    scanf("%d %d", &n, &m);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            printf("%d ", a[j][i]);
        }
        printf("%d\n", a[n - 1][i]);
    }

    return 0;
}