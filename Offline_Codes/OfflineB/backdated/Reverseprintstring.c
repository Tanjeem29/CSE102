#include<stdio.h>
void print(char *p)
{
    if(*p==0)
        return ;
    print(p+1);
    printf("%c",*p);
    return;


}
float sqrt(float n, float x)
{
    float x2= (x+n/x)/2;
    if(((x-x2)*(x-x2))<=.0000000001)
        return x;
    return sqrt(n,x2);
}
int main()
{
    char s[20];
    float x;
    //scanf("%s",s);
    //print(s);
    //int p=0;
    scanf("%f",&x);
    printf("%.3f",sqrt(x,x/2));
    //(p)? printf("Y"):printf("N");

    return 0;
}
