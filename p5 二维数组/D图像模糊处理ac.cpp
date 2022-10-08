#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int n, m;
    int a[100][100], b[100][100];

    scanf("%d %d", &n, &m);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
            b[i][j] = a[i][j];
        }
    }

    for (int i = 1; i < n - 1; i++)
    {
        for (int j = 1; j < m - 1; j++)
        {
            b[i][j] = round((a[i][j] + a[i - 1][j] + a[i][j + 1] + a[i + 1][j] + a[i][j - 1]) / 5.0);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m - 1; j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("%d\n", b[i][m - 1]);
    }

    return 0;
}