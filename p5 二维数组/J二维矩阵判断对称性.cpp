#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, arr[100][100];
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[i][j] != arr[j][i])
            {
                printf("No.\n");
                return 0;
            }
        }
    }

    printf("Yes.\n");

    return 0;
}