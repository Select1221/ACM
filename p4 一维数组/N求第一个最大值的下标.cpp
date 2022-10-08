#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;

    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int max = arr[0], maxI = 0;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            maxI = i;
        }
    }

    printf("%d %d\n", maxI, max);

    return 0;
}
