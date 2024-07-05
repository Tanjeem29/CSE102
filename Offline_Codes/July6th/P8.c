#include<stdio.h>
#include<string.h>
int main()
{
    char *a,*b,s[50];
    int l1,l2,xs,xe,w=0;
    scanf("%s",s);
    l1=strlen(s);
    a=malloc(l1*sizeof(char));
    strcpy(a,s);
    scanf("%s",s);
    l2=strlen(s);
    b=malloc(l2*sizeof(char));
    strcpy(b,s);
    int c,mc=0;
//    printf(a);
//    printf(b);
    //char *a2,*b2;
    int i,j,k;
    for(i=0;i<l1;i++)
    {
        for(j=0;j<l2;j++)
        {
            if(*(a+i)==*(b+j))
            {
                //printf("%d ",i);
                c=1;
                while((*(a+i+c)==*(b+j+c))&&((i+c)<l1)&&(j+c)<l2)
                {
                    c++;
                }
                //mc=c;
                if(c>=mc)
                {
                    xs=i;
                    xe=i+c-1;
                    mc=c;
                }
                //printf("%d %d\n",c,mc);
            }

        }
    }
    //printf("%d %d\n",xs,xe);
    for(i=xs;i<=xe;i++)
        printf("%c",*(a+i));
}
