#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i;j++)//j<=1 gives 1st pic, j<n-i gives 2nd pic
            printf("*\t");
        printf("\n");
    }
}
