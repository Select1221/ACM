#include<stdio.h>

int main(int argc, char const *argv[])
{
    int N,sum=0;
    scanf("%d",&N);
    while (true)
    {
        if (N==0)
        {
            printf("%d\n",sum);
            return 0;
        }else
        {
            sum+=N%10;
            N/=10;
        }
    }
    
    return 0;
}
