#include<stdio.h>
#include<string.h>
void cut(char *str1, char *str2, int l1, int l2)
{
    int i,j,s,k;
    for(i=0;i<l1;i++)
    {
        s=i;
        j=0;
        while(*(str1+i)==*(str2+j))
        {
            i++,j++;
            if(j==l2)
            {
                for(k=s;k<=l1-l2;k++)
                {
                    *(str1+k)=*(str1+k+l2);
                }
            }
        }

    }
    //return *str1;
}
int main()
{
    char s1[20],s2[20];
    scanf("%s %s",s1,s2);
    cut(s1,s2,strlen(s1),strlen(s2));
    printf(s1);
    return 0;
}
