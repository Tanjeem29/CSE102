#include<stdio.h>
#include<stdlib.h>
#define p 1
#if p==2
int pc(char *s,char *f)
{
    if(s>=f)
        return 1;
    if(*s==*f)
        return pc(s+1,f-1);
    return 0;
}
void strcat(char *s,char *t)
{
    if(*s) {strcat(s+1,t);return;}
    *s=*t;
    if(*s==0) return;
    strcat(s+1,t+1);
    return;
}
int main()
{
    char str1[]="Hello";
    char str2[10]="Hello";
    char *str3;
    char *str4="Hello";

    char str5[]={'H','e','l','l','o'};
    //str5="Hello";
    //printf("%s\n%s\n%s\n%s%d\n%s\n",str1,str2,str3,str4,sizeof(str3),str5);
    scanf("%s",str1);
    str3=str2;
    while(*str3)
        str3++;
    str3--;
    //str4[1]='a';
    //strcat(str4,str2);
    printf("%d",str1[10]);
   // return 0;
    int i=0;
    printf("\n%c",str4[1]);

}
#endif
//#elif
#include<stdio.h>
//typedef struct{
//    char a[10];
//    int b;
//}test;
//typedef struct {
//struct Point{
//int x;
//int y;
//}g;
//int r;
//} Circle;
//struct rand{
//    int p;
//
//}r1;
//struct x{
//    int a:10;
//    int b:10;
//    int c:13;
//    //double 2:1;
//
//
//};
//int main()
//{
//    struct rand r2;
//Circle c={1};
//struct Point p;
//printf("%d",sizeof(struct x));
//
//
//    }
//    test x,y;
//    char b[10]="Hello";
//    strcpy(x.a,b);
//    x.b=2;
//    //y=x;
//    printf("%s %d",y.a,y.b);


//#endif
#if p==3
void hanoi(char A,char B,char C,int n)
{
    if(n==1)
    {
        printf("Move %d from %c to %c\n",n,A,C);
        return;
    }
    hanoi(A,C,B,n-1);
    printf("Move %d from %c to %c\n",n,A,C);
    hanoi(B,A,C,n-1);
    return;
}
double pow(double x, int n)
{
    if(n<0)
        return 1/pow(x,-n);
    if(n==0)
        return 1;
    if(n%2)
        return x*pow(x*x,(n-1)/2);
    return pow(x*x,n/2);

}
int main()
{
    int n=3;
    double x;
    char a='A',b='B',c='C';
    char p=-1;
    //hanoi(a,b,c,n);
    scanf("%lf %d",&x,&n);
    printf("%.2lf to the power %d is : %.6lf %c",x,n,pow(x,n),p);
    printf("\na%d",p);
}
#elif p==1
int main(int argc, char  *argv[])
{
    if(argc!=3)
    {
        printf("ARGC!!!");
        exit(1);
    }
    FILE *fp1, *fp2;
    if((fp1=fopen(argv[1],"rb+"))==NULL)
    {
        printf("FILE1!!!");
        exit(1);
    }
    if((fp2=fopen(argv[2],"wb+"))==NULL)
    {
        printf("FILE2!!!");
        exit(1);
    }
    char x;
    fseek(fp1,0,SEEK_END);
    int n=ftell(fp1);
    printf("%d",n);
    n--;
    while(n>=0)
    {
        fseek(fp1,n,SEEK_SET);
        //printf("\n%d\n",i);
        if((x=fgetc(fp1))==EOF)
        {
            printf("READ!!!");
            exit(1);
        }
        //fread(x,sizeof(char),1,fp1);
        //fwrite(x,sizeof(char),1,fp2);
        fputc(x,fp2);
        putchar(x);
        //i++;
        n--;
    }
    fclose(fp1);
    fclose(fp2);
}
#endif // p
