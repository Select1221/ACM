#include <stdio.h>

int main(int argc, char const *argv[])
{
    double arr[101];
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

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            int temp;
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < n - 1; i++)
    {
        printf("%.0lf ", arr[i]);
    }

    printf("%.0lf\n", arr[n - 1]);

    return 0;
}
