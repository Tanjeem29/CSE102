#include<stdio.h>
#include<stdlib.h>
#include<string.h>
double sroot(double y, double r)
{
    if((r-y/r)*(r-y/r)<.0000000000001)
        return r;
    return sroot(y,(r+(y/r))/2);
}
int sc(char *s, char *w, int ls, int lw)
{
    int idx=-1,i,j;
    for(i=0;i<ls;i++)
    {
        for(j=0;j<lw;j++)
        {
            if(*(s+i+j)!=*(w+j))
                break;

        }
        if(j==lw)
            return i;
    }
    return 0;
}

int ispf(int y)
{
    if(y==5)
        return 1;
    if(y%5)
        return 0;

    return ispf(y/5);
}
int revnum(int n,int m)
{
        if(n)
        {
            m*=10;
            m+=(n%10);
            return revnum(n/10,m);
        }
        return m;
    //printf("%d",n%10);
    //return ;
}
int GCD(int m, int n)
{
    if(m==0)
        return n;
    return GCD(n%m,m);
}
int main()
{
#define x 7
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
#elif(x==6)
    int y,z;
    scanf("%d",&y);
    z=revnum(y,0);
    printf("%d",z);
#elif(x==8)
    int a=4;
    double b=-3.6;
    a=b;
    printf("%d",a);
#elif(x==9)
    double p;
    scanf("%lf",&p);
    printf("%.16lf",sroot(p,2));
    return 0;
#elif(x==10)
char *p,c;
p=malloc(10*sizeof(char));
//gets(p);
//puts(p);
//scanf("%10[^\n]",p);
scanf("%10[^\n]%*[^\n]",p);
scanf("%*c%c",&c);
printf("%s %c",p,c);
return 0;
#elif(x==11)
char *a,*b;
a=malloc(20*sizeof(char));
b=malloc(10*sizeof(char));
gets(a);
gets(b);
int l1=strlen(a),l2=strlen(b);
printf("%d",sc(a,b,l1,l2));
return 0;


#endif

}

