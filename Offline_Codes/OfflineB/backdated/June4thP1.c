#include<stdio.h>
int bigdig(int x)
{
    int d,md=0;
    while(x)
    {
        d=x%10;
        if(d>md)
            md=d;
        x/=10;
    }
    return md;
}
int main()
{
    int num;
    scanf("%d",&num);
    printf("%d",bigdig(num));
    return 0;
}
