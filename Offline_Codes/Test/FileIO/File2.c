#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
    FILE *fp;
    if((fp=fopen(argv[1],"r+"))==NULL)
    {
        printf("Error Opening File 1\n");
        exit(1);
    }
    char ch;
    int fl=0;
    while(fl==1)
    {
        scanf("%c",&ch);
        if(ch=='q')
            break;
        fputc(ch,fp);
    }
    while((ch=fgetc(fp))!=EOF)
        printf("%c",ch);
    fclose(fp);

}
