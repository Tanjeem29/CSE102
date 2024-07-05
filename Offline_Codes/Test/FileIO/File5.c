//FILE SIZE
#include<stdio.h>
#include<stdlib.h>
int main(int argc, char* argv[])
{
    FILE *fp;
    if((fp=fopen(argv[1],"r"))==NULL)
    {
        printf("Error Opening file\n");
        exit(0);
    }
    int count=0;
    char ch;
    do
    {
        ch=fgetc(fp);
        if(ferror(fp))
        {
            printf("Error while reading");
            exit(0);
        }
        count++;
    }while(ch!=EOF);
    fclose(fp);
    fp=fopen(argv[1],"r");
    char s[20];
    fgets(s,20,fp);
    fseek(fp,0,SEEK_END);
    int c=ftell(fp);
    printf("The file is %d (%d) bytes in size\n",count-1,c);
    printf(s);
    return 0;
}
