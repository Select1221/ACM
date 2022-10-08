#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, m;
    double a[20][20], max;

    scanf("%d %d", &n, &m);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%lf", &a[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        max = a[i][0];
        for (int j = 1; j < m; j++)
        {
            if (a[i][j] > max)
            {
                max = a[i][j];
            }
        }

        printf("%g\n", max);
    }

    return 0;
}
