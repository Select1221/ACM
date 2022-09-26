#include<stdio.h>

int main(int argc, char const *argv[])
{
    double x,y;
    scanf("%lf %lf",&x,&y);
    if(x<=1 && x>=-1){
        if (y<=1 && y>=-1)
        {
            printf("Yes.");
        }else{
            printf("No.");
        }
    }else{
        printf("No.");
    }
    
    return 0;
}