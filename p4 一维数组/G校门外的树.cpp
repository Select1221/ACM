#include <stdio.h>

int main(int argc, char const *argv[])
{
    int L, M;
    int arr[100][2], s, e, remainder;

    scanf("%d %d", &L, &M);

    remainder = L + 1;

    for (int i = 0; i < M; i++)
    {
        scanf("%d %d", &arr[i][0], &arr[i][1]);
    }

    for (int i = 0; i < M - 1; i++)
    {
        for (int j = 0; j < M - 1 - i; j++)
        {
            if (arr[j][0] > arr[j + 1][0])
            {
                int temp;
                temp = arr[j + 1][0];
                arr[j + 1][0] = arr[j][0];
                arr[j][0] = temp;

                temp = arr[j + 1][1];
                arr[j + 1][1] = arr[j][1];
                arr[j][1] = temp;
            }
        }
    }
    s = arr[0][0];
    e = arr[0][1];
    for (int i = 1; i < M; i++)
    {
        if ((e > arr[i][0] && e < arr[i][1]) || e==arr[i][0])
        {
            e = arr[i][1];
        }
        else if (e < arr[i][0])
        {
            remainder -= e - s + 1;
            s = arr[i][0];
            e = arr[i][1];
        }
    }

    remainder -= e - s + 1;

    printf("%d\n", remainder);

    return 0;
}