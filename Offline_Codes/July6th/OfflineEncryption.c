#include<stdio.h>
#include<stdlib.h>
typedef long long ll;
int main()
{
    char *p;
    int n,i;
    scanf("%d",&n);
    p=malloc((n+1)*sizeof(char));
    getchar();
    for(i=0;i<n;i++)
        scanf("%c",p+i);
//    for(i=0;i<n;i++)
//        printf("%c",*(p+i));
    char *q;
    ll *x;
    x=malloc((n/8)*sizeof(ll));
    q=(char *)x;
    for(i=0;i<n;i++)
    {
        *(q+i)=*(p+i);

    }
    for(i=0;i<n/8;i++)
    printf("%lld ",*(x+i));

}
