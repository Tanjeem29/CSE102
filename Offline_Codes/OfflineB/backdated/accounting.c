#include<stdio.h>
int main()
{
    int n;
    float bill=0;
    scanf("%d",&n);
    if(n>100)
        bill+=50;
    else
        bill+=.5*n;
    n-=100;
    if(n>100)
        bill+=80;
    else if(n>0)
        bill+=n*.8;
    n-=100;
    if(n>0)
        bill+=n*1.2;
    printf("%.2f",bill);
}
