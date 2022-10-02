#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, arr[1000];
    double sum = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("%.3lf\n", sum / n);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > sum / n)
        {
            printf("%d\n", arr[i]);
        }
    }

    return 0;
}