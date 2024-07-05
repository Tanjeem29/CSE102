#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n-1;i++)
    {
        for(int z=1;z<=n-i;z++)
            printf(" \t");
        for(int j=1;j<=2*i-1;j++)
        {
            if(j==1||j==2*i-1)
                printf("*\t");
            else
                printf(" \t");
        }
        printf("\n");
    }
    for(int i=1;i<=2*n-1;i++)
        printf("*\t");
}
