#include<stdio.h>
#include<string.h>
int palcheck(char *s, int l)
{
    if (l<=0)
        return 1;
    if(*(s)==*(s+l-1))
        return palcheck((s+1),l-2);
    return 0;
}
int main()
{
    char s1[20];
    scanf("%s",s1);
    if(palcheck(s1,strlen(s1)))
        printf("Palindrome");
    else
        printf("Not a Palindrome");
    return 0;
}
