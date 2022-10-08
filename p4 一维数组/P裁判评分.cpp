#include <stdio.h>

int main(int argc, char const *argv[])
{
    double arr[10], sum = 0;

    for (int i = 0; i < 10; i++)
    {
        scanf("%lf", &arr[i]);
        sum += arr[i];
    }

    double min, max;

    min = max = arr[0];

    for (int i = 0; i < 10; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }

        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    printf("%.2lf\n", (sum - max - min) / 8);

    return 0;
}
