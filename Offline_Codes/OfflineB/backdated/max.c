#include<stdio.h>
int main()
{
    char x;
    int n,mx=-1,c=0;
    for(int i=0;;i++)
    {
        scanf("%c",&x);
        if(x=='\n')
            break;
        n=x-'0';
        if(n>mx)
        {
            mx=n;
            c=1;
        }
        else if(n==mx)
            c++;
    }
    printf("%d",c);
}
