#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n,arr[1000],tmp;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                tmp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=tmp;
            }
        }
    }
    printf("%d",arr[n-1]-arr[0]);
    
    return 0;
}
