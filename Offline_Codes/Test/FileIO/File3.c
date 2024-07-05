#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int count[30];
int main(int argc, char *argv[])
{
    FILE *fp;
    if((fp=fopen(argv[1],"r+"))==NULL)
    {
        printf("Error Opening File 1\n");
        exit(1);
    }
    char ch;
    while((ch=fgetc(fp))!=EOF)
    {
        ch=toupper(ch);
        if(ch>='A'&&ch<='Z')count[ch-'A']++;
    }
    int i;
    for(i=0;i<26;i++)
    {
        printf("%c Occurs:  %2d times\n",('A'+i), count[i]);
    }
    fclose(fp);
}
