#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, m, sum = 0;
    int a[100][100];

    scanf("%d %d", &m, &n);

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
            if (i == 0 || j == 0 || i == m - 1 || j == n - 1)
            {
                sum += a[i][j];
            }
        }
    }

    printf("%d\n", sum);

    return 0;
}
