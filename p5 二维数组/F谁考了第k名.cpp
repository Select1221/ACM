#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, k;
    double a[100][2];

    scanf("%d %d", &n, &k);

    for (int i = 0; i < n; i++)
    {
        scanf("%lf %lf", &a[i][0], &a[i][1]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            double temp;
            if (a[j][1] < a[j + 1][1])
            {
                temp = a[j][0];
                a[j][0] = a[j + 1][0];
                a[j + 1][0] = temp;

                temp = a[j][1];
                a[j][1] = a[j + 1][1];
                a[j + 1][1] = temp;
            }
        }
    }

    printf("%.0lf %g\n", a[k - 1][0], a[k - 1][1]);

    return 0;
}
