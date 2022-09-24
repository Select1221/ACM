#include<stdio.h>

int main(int argc, char const *argv[])
{
    /* code */

    int arr[4];

    scanf("%d %d %d %d",&arr[0],&arr[1],&arr[2],&arr[3]);
    for (int i = 0; i < 3; i++)
    {
        /* code */
        if (arr[i]>arr[i+1])
        {
            /* code */
            arr[i+1]=arr[i];
        }
    }
    printf("%d",arr[3]);
    return 0;
}
