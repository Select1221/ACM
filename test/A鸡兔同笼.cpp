#include<stdio.h>
//4*m+2n=x
//n=y-m
//4m+2(y-m)=x

int main(int argc, char const *argv[])
{
    int x,y,m,n;
    scanf("%d %d",&x,&y);
    for (int i = 0; i < y; i++)
    {
        if (4.0*i+2.0*(y-i)==x)
        {
            printf("%d %d\n",y-i,i);
        }
    }
    
    return 0;
}
