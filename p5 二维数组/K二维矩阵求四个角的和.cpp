#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);

    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("%d\n",arr[0][0]+arr[0][n-1]+arr[n-1][0]+arr[n-1][n-1]);

    return 0;
}
