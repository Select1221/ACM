#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, a[20][20];

    for (int i = 0; i < 20; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            if (j == 0 || j == i )
            {
                a[i][j] = 1;
            }
            else
            {
                a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
            }
        }
    }

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
