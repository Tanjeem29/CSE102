//SWAPPING
#include<stdio.h>
struct lol{
    int i;
    char ch;
    double d;
} var1, var2;
int main()
{
    var1.i=100;
    var1.ch='a';
    var1.d=1.0;
    var2.i=90;
    var2.ch='b';
    var2.d=2.0;
    swap(&var1,&var2);
    struct lol var3;
    var3=var1;
    var1=var2;
    var2=var3;
    printf("%d %c %lf\n",var1.i,var1.ch,var1.d);
    printf("%d %c %lf\n",var2.i,var2.ch,var2.d);
    return 0;
}
void swap(struct lol *x,struct lol *y)
{
    struct lol z;
    z=*x;
    *x=*y;
    *y=z;
    return;
}
