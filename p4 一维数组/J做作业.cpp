#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    int a[100000];

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            int temp;
            if (a[j] < a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < n-1; i++)
    {
        printf("%d ", a[i]);
    }

    printf("%d\n", a[n-1]);

    return 0;
}
