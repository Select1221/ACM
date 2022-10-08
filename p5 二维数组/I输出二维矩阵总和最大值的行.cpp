#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, m, maxI = 0;
    double a[100][20], max = 0;

    scanf("%d %d", &n, &m);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%lf", &a[i][j]);
        }
    }

    for (int i = 0; i < m; i++)
    {
        max += a[0][i];
    }

    for (int i = 1; i < n; i++)
    {
        double sum = 0;
        for (int j = 0; j < m; j++)
        {
            sum += a[i][j];
        }

        if (sum > max)
        {
            max = sum;
            maxI = i;
        }
    }

    printf("%d ", maxI);

    for (int i = 0; i < m; i++)
    {
        printf("%g ", a[maxI][i]);
    }

    printf("%g\n", max);

    return 0;
}
