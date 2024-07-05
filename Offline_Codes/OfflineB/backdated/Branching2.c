#include<stdio.h>
int main()
{
    int a1,a2,a3,a4;
    scanf("%d %d %d %d",&a1,&a2,&a3,&a4);
    int x=a1;
    if(x<a2)
        x=a2;
    if(x<a3)
        x=a3;
    if(x<a4)
        x=a4;
    printf("Max Number is %d",x);

    return 0;
}
