#include<stdio.h>

int main(int argc, char const *argv[])
{
    /* code */
    
    //成绩
    int a;

    //输入成绩
    scanf("%d",&a);

    if (a>=85)
    {
        /* 成绩在85分及以上 */
        printf("A\n");
    }else if (a>=60 && a<85)
    {
        /* 成绩在60分到85分之间 */
        printf("P\n");
    }else if (a<60)
    {
        /* 成绩低于60分 */
        printf("E\n");
    }
    
    return 0;
}
