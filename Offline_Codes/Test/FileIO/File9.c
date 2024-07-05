//IMPORTANT
//REVERSE COPYING A FILE
#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
    FILE *f1,*f2;
    f1=fopen(argv[1],"rb");
    f2=fopen("revcpy.txt","wb");
    fseek(f1,0,SEEK_END);
    int loc=ftell(f1);
    loc--;
    char ch;
    while(loc>=0)
    {
        fseek(f1,loc,SEEK_SET);
        ch=fgetc(f1);
        printf("%c",ch);
        fputc(ch,f2);
        loc--;
    }
    fclose(f1);
    fclose(f2);
    return 0;
}
