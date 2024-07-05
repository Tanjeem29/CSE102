#include<stdio.h>
int main()
{
    int n,m,c=0;
    scanf("%d",&n);
    for(m=2;m<n;m++)
    {
        int s=m,l=n,r,gcd;
        for(int j=0;;j++)
        {
            if(l%s==0)
            {
                gcd=s;
                break;
            }
            else
            {
                r=l%s;
                l=s;
                s=r;
            }
        }
        if(gcd==1)
            c++;
    }
    printf("%d",++c);
}
