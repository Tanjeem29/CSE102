#include<stdio.h>
int main()
{
    int x;
    long long int sum;
    scanf("%d",&x);
    sum=((long long)x*(x+1))/2;
    printf("%lld %d",sum,x);
}
