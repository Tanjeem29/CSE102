#include<stdio.h>
int main()
{
    int *a;
    int n,i,t,j;
    scanf("%d",&n);
    a=malloc(n*sizeof(int));
    for(i=0;i<n;i++)
        scanf("%d",a+i);
    int *p,min,idx;
    for(i=0;i<n-1;i++)
    {
        min=*(a+i);
        idx=i;
        for(j=i+1;j<n;j++)
        {
            if(*(a+j)<*(a+idx))
                idx=j;
        }
        t=*(a+idx);
        *(a+idx)=*(a+i);
        *(a+i)=t;
    }
    printf("%d",*(a+n/2));





}
