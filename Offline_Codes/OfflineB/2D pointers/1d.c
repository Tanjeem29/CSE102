#include<stdio.h>
#include<string.h>
void transpose(char **p,int l)
{
    int i,j;
    int t;
    for(i=0;i<l-1;i++)
    {
        for(j=1+i;j<l;j++)
        {
            t=*(*(p+i)+j);
            *(*(p+i)+j)=*(*(p+j)+i);
            *(*(p+j)+i)=t;
        }
    }

}
int main()
{
    int len;
    char **arr;
    scanf("%d",&len);
    arr=malloc(len* sizeof(char* ));
    int i,j;
    for(i=0;i<len;i++)
        *(arr+i)=malloc(len*sizeof(char));
    for(i=0;i<len;i++)
        for(j=0;j<len;j++)
            scanf("%d",(*(arr+i)+j));
    transpose(arr,len);
    for(i=0;i<len;i++)
    {
        for(j=0;j<len;j++)
            printf("%d\t",*(*(arr+i)+j));
        printf("\n");
    }



}
