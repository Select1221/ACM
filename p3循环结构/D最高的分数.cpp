#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n,max=0,cj;
    scanf("%d\n",&n);
    while (n--)
    {
        scanf("%d",&cj);
        if (cj>max)
        {
            max=cj;
        }
        
    }
    printf("%d",max);
    
    return 0;
}
