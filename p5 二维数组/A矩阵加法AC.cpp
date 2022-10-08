#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, m;

    scanf("%d %d", &n, &m);

    int a[100][100], b[100][100], c[100][100];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m - 1; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("%d\n", c[i][m - 1]);
    }

    return 0;
}
