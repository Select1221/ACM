#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n = 0;

    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int min, max, minI = 0, maxI = 0;

    min = max = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
            minI = i;
        }

        if (arr[i] > max)
        {
            max = arr[i];
            maxI = i;
        }
    }

    int temp;
    temp = arr[minI];
    arr[minI] = arr[0];
    arr[0] = temp;

    temp = arr[maxI];
    arr[maxI] = arr[n - 1];
    arr[n - 1] = temp;

    for (int i = 0; i < n - 1; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("%d\n", arr[n - 1]);

    return 0;
}
