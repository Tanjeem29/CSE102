#include<stdio.h>
int setbits(int n)
{
    if(n)
        return ((1&n)+setbits(n>>1));
    else
        return 0;

}
int cntvowel(char *s)
{
    if(*s)
    {
        *s=tolower(*s);
        if(*s=='a'||*s=='e'||*s=='i'||*s=='o'||*s=='u')
            return (1+cntvowel(s+1));
        return (cntvowel(s+1));
    }
    return 0;
}
int main()
{
    int num;
//    scanf("%d",&num);
//    printf("%d",setbits(num));
    char s[20];
    scanf("%s",s);
    printf("%d",cntvowel(s));
    return 0;
}
