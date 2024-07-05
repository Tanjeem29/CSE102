#include<stdio.h>
int par(int x)
{
    if(x==0) return 0;
    return ((x&1)+par(x>>1));
}
int main()
{
    int x;
    scanf("%d",&x);
    //printf("%d\n",par(x));
    if(par(x))
        printf("Odd");
    else
        printf("Even");
    return 0;
}
