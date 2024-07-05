#include<stdio.h>
int main()
{
    float x,t=1,cos=1;
    int mx=10000000,i;
    scanf("%f",&x);
    x*=(3.141659/180);
    for(i=1;i<=mx;i++)
    {
        float d=(2*i)*(2*i-1);
        t=t*(-1*x*x)/d;
        cos+=t;
    }
    printf("%f",cos);
}
