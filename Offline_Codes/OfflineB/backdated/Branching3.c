#include<stdio.h>
int main()
{
    int x1,x2,x3,y1,y2,y3;
    scanf("%d %d %d %d %d %d",&x1,&y1,&x2,&y2,&x3,&y3);
    if((x1-x2)*(y2-y3)==(y1-y2)*(x2-x3))
        printf("Invalid Triangle");
    else
        printf("Valid Triangle");
    return 0;
}
