#include<stdio.h>

int main(int argc, char const *argv[])
{
    int y,m,c;
    scanf("%d %d",&y,&m);
    c=(y%4==0 && y%100!=0) || (y%400==0);
    switch (m)
    {
    case 1:
        printf("31\n");
        break;
    case 2:
        printf("%d",28+c);
        break;
    case 3:
        printf("31\n");
        break;
    case 4:
        printf("30\n");
        break;
    case 5:
        printf("31\n");
        break;
    case 6:
        printf("30\n");
        break;
    case 7:
        printf("31\n");
        break;
    case 8:
        printf("31\n");
        break;
    case 9:
        printf("30\n");
        break;
    case 10:
        printf("31\n");
        break;
    case 11:
        printf("30\n");
        break;
    case 12:
        printf("31\n");
        break;
    default:
        break;
    }
    return 0;
}
