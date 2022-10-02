#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    int xi_arr[1000];
    int max, day[3];

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &xi_arr[i]);
    }

    max = xi_arr[0] + xi_arr[1] + xi_arr[2];
    day[0] = 1;
    day[1] = 2;
    day[2] = 3;

    for (int i = 1; i < n - 2; i++)
    {
        if (xi_arr[i] + xi_arr[i + 1] + xi_arr[i + 2] > max)
        {
            max = xi_arr[i] + xi_arr[i + 1] + xi_arr[i + 2];
            day[0] = i + 1;
            day[1] = i + 2;
            day[2] = i + 3;
        }
    }

    printf("%d %d %d\n", day[0], day[1], day[2]);

    return 0;
}