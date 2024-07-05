#include "stdio.h"
#define PR 3
#include<stdlib.h>
int cmp(const void *a,const void *b)
{
    int x= *((int *)a);
    int y= *((int *)b);
    //printf("%d %d\n",x,y);
    if(x%2==1&&y%2!=1) return 1;
    if(x%2!=1&&y%2==1) return 0;
    return x-y;
}
int main()
{
    #if PR == 1
    int a=2,b=10;
    printf("%d\n",(a++>b++)?a++:b++);
    printf("%d %d",a,b);
    printf("% d ",a-++b);
    printf("%d %d",a,b);
    PR ("%c",'y');
    #endif // PR
    #if PR == 2
    int a[20];
    int n,i;
    int (*p)(const void *,const void *);
    p=cmp;
    scanf("%d ",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
//    for(i=0;i<n;i++)
//        printf("%d ",a[i]);
    qsort(a,n,sizeof(int),p);
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    #endif // PR
    #if PR == 3
    int diff;
    int a;
    double x=200;
    int *q;
    double *p;
    //a=10;
    //q=&a;
    p=&a;
    *p=100;
//    *q=10;
    p=p+2;
    p=p-2;
//    p=p*2;
//    p=p/2;
//    diff=p-q;
    printf("%lf",*p);
    return 0;
    #endif // PR

}
