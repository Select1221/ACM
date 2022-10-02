#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, arr[100];
    int minId = 0, temp;

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 1; i < n; i++)
    {
        if (arr[i] < arr[minId])
        {
            minId = i;
        }
    }

    temp = arr[0];
    arr[0] = arr[minId];
    arr[minId] = temp;

    for (int i = 0; i < n - 1; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("%d\n", arr[n - 1]);

    return 0;
}