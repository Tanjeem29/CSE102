#include<stdio.h>
int ispf(int y)
{
    if(y==5)
        return 1;
    if(y%5)
        return 0;

    return ispf(y/5);
}
int GCD(int m, int n)
{
    if(m==0)
        return n;
    return GCD(n%m,m);
}
int main()
{
#define x 5
#if(x==1)
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int x=(a>b)?(a>c?a:c):(b>c?b:c);
    printf("%d",x);
#elif(x==2)
    int n,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
            printf(" ");
        {
            for(j=1;j<=2*i-1;j++)
            {
                if(j==1||j==2*i-1||i==n)
                    printf("*");
                else
                    printf("^");
            }
        }
        printf("\n");
    }
#elif(x==3)
    int y;
    scanf("%d",&y);
    printf("%d",ispf(y));
    return 0;
#elif(x==4)
    int a[5],i,gcd=0;
    for(i=0;i<5;i++)
        scanf("%d",a+i);
    for(i=0;i<5-1;i++)
    {
        gcd=(a[i]>gcd)?GCD(gcd,a[i]):GCD(a[i],gcd);
    }
    printf("%d",gcd);

#elif(x==5)
    int ***a,i,j,k;
    a=malloc(4*sizeof(int **));
    for(i=0;i<4;i++)
         {
             *(a+i)=malloc(3*sizeof(int *));
             for(j=0;j<3;j++)
                *(*(a+i)+j)=malloc(2*sizeof(int));
         }
    //printf("...1");
    for(i=0;i<4;i++)
    {
        //printf("...2");
        for(j=0;j<3;j++)
        {
            //printf("...3");
            for(k=0;k<2;k++)
            {
                scanf("%d",(*(*(a+i)+j)+k));
                //printf("...4");
            }

        }
    }
    for(i=0;i<4;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0;k<2;k++)
                printf("%d ",*(*(*(a+i)+j)+k));
            printf("\n");
        }
        printf("\n\n\n");
    }

#endif

}

