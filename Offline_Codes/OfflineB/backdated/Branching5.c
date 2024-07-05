#include<stdio.h>
int main()
{
    int x,y1,y2,ans;
    scanf("%d",&x);
    if(x%4==1)
    {
        y1=x-1;
        y2=x+3;
    }
    else if(x%4==2)
    {
        y1=x-2;
        y2=x+2;
    }
    else if(x%4==3)
    {
        y1=x+1;
        y2=x-3;
    }
    else
    {
        y1=x;
        y2=x+4;
    }
    ans=y1;
    if(y1%100==0 && y1%400!=0)
        ans=y2;
    if(x==1)
        ans=4;
    printf("%d",ans);
}
