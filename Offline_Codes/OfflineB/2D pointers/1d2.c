#include<stdio.h>
int main()
{
    int r1,r2,c1,c2;
    scanf("%d %d %d %d",&r1,&c1,&r2,&c2);
    int b[r1][c1],c[r2][c2];
    int i,j,k;
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            scanf("%d",&c[i][j]);
        }
    }
    if(c1==r2)
    {
        int a[r1][c2];
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                a[i][j]=0;
            }
        }
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                for(k=0;k<c1;k++)
                {
                    a[i][j]+=b[i][k]*c[k][j];
                }
            }
        }
        printf("Product:\n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                printf("%d\t",a[i][j]);
            }
            printf("\n");
        }

    }
    else
    {
        printf("Multiplication is not possible");
    }
    return 0;
}
