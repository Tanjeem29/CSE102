#include<stdio.h>
int main()
{
    int x;
    float c=0;
    scanf("%d",&x);
    if(x>50)
        c+=25;
    else
        c+=x*.5;
    x-=50;
    if(x>100)
        c+=75;
    else if(x>0)
        c+=x*.75;
    x-=100;
    if(x>100)
        c+=120;
    else if(x>0)
        c+=x*1.2;
    x-=100;
    if(x>0)
        c+=x*1.5;
    c*=1.2;
    printf("%f",c);

    return 0;
}
