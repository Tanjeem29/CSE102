//INTERCHANGING CONTENT OF 2 FILES
#include<stdlib.h>
#include<stdio.h>
int main(int argc, char *argv[])
{
    FILE *f1,*f2,*f3;
    if(argc!=3)
    {
        printf("Wrong code");
        exit(0);
    }
    if((f1=fopen((argv[1]),"r"))==NULL)
    {
        printf("Error opening File 1\n");
        exit(1);
    }
    if((f2=fopen((argv[2]),"r"))==NULL)
    {
        printf("Error opening File 2\n");
        exit(1);
    }
    if((f3=fopen("temp.txt","w+"))==NULL)
    {
        printf("Error opening File 3\n");
        exit(1);
    }
    char ch;
    while(!feof(f1))
    {
        ch=fgetc(f1);
        if(ferror(f1))
        {
            printf("Error reading File 1\n");
            exit(1);
        }
        if(!feof(f1)) fputc(ch,f3);
        if(ferror(f3))
        {
            printf("Error writing File 3\n");
            exit(1);
        }
    }
    if(fclose(f1)==EOF)
    {
        printf("Error closing File 1\n");
        exit(1);
    }
    if(fclose(f3)==EOF)
    {
        printf("Error closing File 3\n");
        exit(1);
    }
    if((f1=fopen((argv[1]),"w"))==NULL)
    {
        printf("Error opening File 1\n");
        exit(1);
    }
    while(!feof(f2))
    {
        ch=fgetc(f2);
        if(ferror(f2))
        {
            printf("Error reading File 2\n");
            exit(1);
        }
        if(!feof(f2)) fputc(ch,f1);
        if(ferror(f1))
        {
            printf("Error writing File 1\n");
            exit(1);
        }
    }
    if(fclose(f1)==EOF)
    {
        printf("Error closing File 1\n");
        exit(1);
    }
    if(fclose(f2)==EOF)
    {
        printf("Error closing File 3\n");
        exit(1);
    }
    if((f2=fopen((argv[2]),"w"))==NULL)
    {
        printf("Error opening File 2\n");
        exit(1);
    }
    if((f3=fopen("temp.txt","r"))==NULL)
    {
        printf("Error opening File 3\n");
        exit(1);
    }
    while(!feof(f3))
    {
        ch=fgetc(f3);
        if(ferror(f3))
        {
            printf("Error reading File 3\n");
            exit(1);
        }
        if(!feof(f3))fputc(ch,f2);
        if(ferror(f2))
        {
            printf("Error writing File 2\n");
            exit(1);
        }
    }
    if(fclose(f2)==EOF)
    {
        printf("Error closing File 1\n");
        exit(1);
    }
    if(fclose(f3)==EOF)
    {
        printf("Error closing File 3\n");
        exit(1);
    }





}
