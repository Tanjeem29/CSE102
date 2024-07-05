#include<stdio.h>
#include<stdlib.h>
int main( int argc, char* argv[])
{
    FILE *from, *to;
    if(( from = fopen(argv[1],"r"))==NULL)
    {
        printf("Error Opening File 1\n");
        exit(1);
    }
    if(( to = fopen(argv[2],"w"))==NULL)
    {
        printf("Error Opening File 2\n");
        exit(1);
    }
    char ch;
    while((ch=fgetc(from))!=EOF)
    {
        if(!strcmp(argv[3],"watch"))
            printf("%c",ch);
        fputc(ch,to);
    }
    fclose(from);
    fclose(to);

}
