#include<stdio.h>
int main()
{
    char x,y,z,a;
 /*   x='a';
    y='z';
    z='Z';
    a='A';
    printf("%d %d %d %d",x,y,a,z);*/
    scanf("%c",&x);
    if(x>=48&&x<=57)
        printf("Digit");
    else if((x>=65&&x<=90)||(x>=97&&x<=122))
        printf("Alphabet");
    else
        printf("Special Character");
    return 0;
}
