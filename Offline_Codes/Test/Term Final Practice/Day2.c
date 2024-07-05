#include<stdio.h>
#include<stdlib.h>
#include<string.h>
union intChar {
    int i;
    unsigned char c[4];
}n;
void encrypt(union intChar *g)
{
    char t;
    t=g->c[0];
    g->c[0]=g->c[1];
    g->c[1]=t;

    t=g->c[2];
    g->c[2]=g->c[3];
    g->c[3]=t;
}

int add(int x, int y)
{
    return x+y;
}
char *gettext()
{
    char *s;
    s=malloc(10*sizeof(char));
    gets(s);
    return s;
}
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
void scpy(char *s, char *t)
{
    while(*t)
    {
        *s=*t;
        s++;
        t++;
    }
    *s=0;
}
int scmp(char *s, char*t)
{
    while(*s==*t && *s)
    {
        s++,t++;
    }
    return *s-*t;
}
int compare(const void *x,const void *y)
{
    int a=*((int*)x);
    int b=*((int*)y);
    if(a%2==0&&b%2==1) return 0;
    if(a%2==1&&b%2==0) return 1;
    return a-b;
}
//float add(float x, float y,float z)
//{
//    return x+y+z;
//}
//char * scpy(char *s, char *t)
//{
//    char *p=s;
//    while(*s++=*t++);
//    return p;
//}
#define tc 9
#define max(a,b) ((a)>(b)) ? (a):(b)
#define loop(n) for(int i=0;i<n;i++)printf("%d\n",i);
#define swap(x,y,t) t=x,x=y,y=t
int main()
{
    #if(tc==1)

    int i=10;
    printf("%d %d %d %d",i++,--i,i++,i);
    #elif(tc==2)
    char s[10]="Yo",p[10];
    scpy(p,s);
    printf("%s  %d",p,p[2]);
    #elif(tc==3)
    char *c;
    c=gettext();
    printf(c);
    #elif(tc==4)
    char **list;
    int n,i,j,l;
    scanf("%d",&n);
    list=malloc(n*sizeof(char*));
    char *s;
    s=malloc(20*sizeof(char));
    for(i=0;i<n;i++)
    {
        scanf("%s",s);
        l=slen(s)+1;
        *(list+i)=malloc(l*sizeof(char));
        scpy(*(list+i),s);

    }
    char *t,*t2,idx;
    t2=malloc(20*sizeof(char));
    for(i=0;i<n-1;i++)
    {
        t=*(list+i);
        idx=i;
        //printf("%s",t);
        for(j=i+1;j<n;j++)
        {
            if(scmp(t,*(list+j))>0)
            {
                idx=j;
                t=*(list+j);
                // printf("%d",idx);
            }
        }
       // printf("1.%s",*(list+i));
        t2=*(list+idx);
        *(list+idx)=*(list+i);
        *(list+i)=t2;
        //printf("2.%s",*(list+i));
    }
    for(i=0;i<n;i++)
    {
        printf("%s\n",*(list+i));
    }
    #elif(tc==5)
    int a=2,b=5,d;
    int c=max(a++,b++);
    //scanf("%d %d",&a,&b);
    printf("%d %d %d\n",a,b,c);
    loop(c);
    #elif(tc==6)
    int a[20];
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    qsort(a,n,sizeof(int),compare);
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    #elif(tc==7)
    int a=2,b=4,c;
    if(a<b) swap(a,b,c);
    printf("%d %d",a,b);
    #elif(tc==8)
    int **p,i,j;
    p=malloc(3*sizeof(int*));
    for(i=0;i<3;i++)
        *(p+i)=malloc(3*sizeof(int));
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            scanf("%d",(*(p+i)+j));
    char *q;
    //int a[3][3]={1,2,3,4,5,6,7,8,9};
    //p=a;
    q=*p;
    *p=*(p+2);
    *(p+2)=q;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",*(*(p+i)+j));
        }
        printf("\n");
    }
    //printf("%d",a[2][2]);
    #elif(tc==10)
    union intChar *d;
    d=&n;
//    scanf("%d",&n.i);
//    int p=n.c[1];
//    printf("%d",p);
    scanf("%x",&d->i);
    //printf("%d",p);
    encrypt(d);
    int p=d->c[1];
    printf("%x",d->i);
    #elif(tc==9)
    int a=3,b=6,c=0;
    c=a+++b++;
    printf("%d %d %d",c,a,b);

    #endif
}
/*4
Tanjmee
Farzin
Shovik
Shahik*/

