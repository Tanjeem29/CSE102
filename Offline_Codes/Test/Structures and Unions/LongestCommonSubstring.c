#include<stdio.h>
#include<string.h>
int main()
{
    int maxlen=0,len, mstart1=0,mstart2=0,start,c=0;
    char s1[30],s2[30];
    int i,j,k, l1,l2;
    scanf("%s %s",s1,s2);
    l1=strlen(s1);
    l2=strlen(s2);
    for(j=0;j<l2;j++)
    {
        len=0;
        start=j;
        for(i=0;i<l1;i++)
        {
            if(s2[j]==s1[i])
            {
                for(k=0;(k+i)<l1&&(k+j)<l2;k++)
                {
                    if(s2[j+k]==s1[i+k])
                        {
                            len++;
                            if(len>maxlen)
                            {
                            maxlen=len;
                            mstart1=i;
                            mstart2=j;
                            //printf("%d",c++);
                            }
                        }
                    else
                    {
                        break;
                    }
                }
            }
        }
    }
    for(i=mstart1;i<maxlen+mstart1;i++)
        printf("%c",s1[i]);
        //printf("\n%d %d",maxlen,mstart1);
    return 0;
}
