#include <stdio.h>

int main(int argc, char const *argv[])
{
    double arr[101], average = 0, sum = 0;
    int n = 0, count = 0;

    while (true)
    {
        scanf("%lf", &arr[n]);
        if (arr[n] == -1)
        {
            break;
        }
        n++;
    }

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    average = sum / n;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= (int)average)
        {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}
