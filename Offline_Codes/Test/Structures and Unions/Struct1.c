#include<stdio.h>
struct lol{
    int x;
    char s[20];
    double d[3];
}v1,v2;
int main()
{
    struct lol v3;
    v1.x=3;
    v1.d[2]=3;
    v1.d[1]=2;
    v1.d[0]=1;
    char s[20]="Imma kill you";
    strcpy(v1.s,s);
    printf("%d %s %f %f %f\n",v2.x,v2.s,v2.d[1],v2.d[0],v2.d[2]);
    v2=v1;
    printf("%d %s %f %f %f\n",v2.x,v2.s,v2.d[1],v2.d[0],v2.d[2]);



}
