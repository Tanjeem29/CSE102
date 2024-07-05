#include<stdio.h>
void Pbits(unsigned x, int n)
{
    if(n)
    {
        Pbits(x>>1, n-1);
        if(x&1) printf("1");
        else printf("0");
        //return ;

    }
    return;
}
int main()
{
    int x,n;
    scanf("%d %d",&x,&n);
    Pbits(x,n);
    return 0;
}
