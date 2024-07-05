#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    char a[50]="Not a leap year", b[50]="Leap year";
    char *fl=((n%4)||(n%100==0)&&(n%400))?a:b;
    printf(fl);
}
