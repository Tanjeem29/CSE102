#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int slen(char *s)
{
    int l=0;
    while(*s)
    {
        s++;
        l++;
    }
    return l;

}
int main()
{
    char *x, *y, s[20],*t;
    t=s;
    scanf("%s",s);
    x=malloc(slen(s)*sizeof(char));
    //printf("1");
    strcpy(x,s);
    scanf("%s",s);
    y=malloc(slen(s)*sizeof(char));
    strcpy(y,s);
    t=y+slen(y);
    t--;
    char *t2, m;
    t2=y;
    //printf(t2);
    while(y<t)
    {

        m= *y;
        //printf("%d %d %d",t2,y,m);
        *y = *t;
        *t = m;
        t--;
        y++;
    }
    y=t2;
    t=y+strlen(y);
    while(*x)
        *t++=*x++;
    *t=0;
    printf(y);

        //printf(y);
    //printf("%d %d",t,y);
}
