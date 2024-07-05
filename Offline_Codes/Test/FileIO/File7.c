//Array of doubles input and output
#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    int i,n;
    scanf("%d",&n);
    double d[n];
    for(i=0;i<n;i++)
    {
        scanf("%lf",&d[i]);
    }
    if((fp=fopen("array.txt","wb"))==NULL)
    {
        printf("Error Opening\n");
        exit(0);
    }
    //fwrite(d,sizeof(d),1,fp);
    fwrite(d,sizeof(double),n,fp);
    memset(d,sizeof(d),0);
    fclose(fp);
    fp=fopen("array.txt","rb");
    double d2[n];
    //fread(d2,n*sizeof(double),1,fp);
    fread(d2,sizeof(d2),1,fp);
    for(i=0;i<n;i++)
    {
        printf("%lf ",d2[i]);
    }
    fclose(fp);
    return 0;
}
