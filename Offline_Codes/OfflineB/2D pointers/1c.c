#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int **mul( int **a1, int **a2, int r1, int c1, int r2, int c2)
{
    int **a;
    a=malloc(r1*sizeof(int*));
    int i,j,k,l;
    for(i=0;i<r1;i++)
        *(a+i)=malloc(c2*sizeof(int));
    //memset(a,0,sizeof(a));
    //printf("ok");
    for(i=0;i<r1;i++)
    {
        //printf("ok");
        for(j=0;j<c2;j++)
        {
            *(*(a+i)+j)=0;
        }
        //printf("\n");
    }
    for(i=0;i<r1;i++)
    {
        //printf("ok");
        for(j=0;j<c2;j++)
        {
            //printf("ok");
            for(k=0;k<c1;k++)
            {
                    //printf("ok");
                   *(*(a+i)+j)+=((*(*(a1+i)+k))*(*(*(a2+k)+j)));
                   printf("%d %d %d %d %d\n",i,j,*(*(a+i)+j)),*(*(a1+i)+k),*(*(a2+k)+j);
            }


        }

    }
    printf("oooo\n");
    for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
                printf("%d\t",*(*a+i)+j);
            printf("\n");
        }
        printf("xxxxx\n");

    return a;

}
int main()
{
    int r1,c1,r2,c2;
    scanf("%d %d %d %d",&r1,&c1,&r2,&c2);
    int **s1,**s2;
    s1=malloc(r1*sizeof(int*));
    s2=malloc(r2*sizeof(int*));
    int i,j;
    for(i=0;i<r1;i++)
        *(s1+i)=malloc(c1*sizeof(int));
    for(i=0;i<r2;i++)
        *(s2+i)=malloc(c2*sizeof(int));
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            scanf("%d",(*(s1+i)+j));}}
    for(i=0;i<r2;i++){
        for(j=0;j<c2;j++){
            scanf("%d",(*(s2+i)+j));}}
    int **ans;
    //printf("ok");
    if(c1==r2)
    {
        //printf("ok");
        ans=mul(s1,s2,r1,c1,r2,c2);
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
                printf("%d\t",*(*ans+i)+j);
            printf("\n");
        }
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
                printf("%d\t",*(*s1+i)+j);
            printf("\n");
        }
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
                printf("%d\t",*(*s2+i)+j);
            printf("\n");
        }
    }
    else
        printf("The matrices cannot be multiplied");
    return 0;


/*3 3 3 3
1 0 0
0 1 0
0 0 1
1 2 3
4 5 6
7 8 9*/

}
