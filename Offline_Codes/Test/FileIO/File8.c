//chapter 9.5 Entering values using fread
#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *f1, *f2;
    f1=fopen("VALUES.txt","wb");
    f2=fopen("COUNT.txt","wb");
    int c,i;
    double x;
    for(i=0;i<32500&&x;i++)
    {
        scanf("%lf",&x);
        fwrite(&x,sizeof(x),1,f1);
    }
    fwrite(&i,sizeof(i),1,f2);
    fclose(f1);
    fclose(f2);
    f1=fopen("VALUES.txt","rb");
    f2=fopen("COUNT.txt","rb");
    int j;
    double y;
    fread(&j,sizeof(int),i,f2);
    j--;
    while(j--)
    {
        fread(&y,sizeof(double),1,f1);
        printf("%lf ",y);
    }
    fclose(f1);
    fclose(f2);
    return 0;
}
