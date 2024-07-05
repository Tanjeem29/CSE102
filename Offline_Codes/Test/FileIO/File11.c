//SEARCHING A NUMBER
#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
    FILE *fp;
    fp=fopen(argv[1],"rb");
    unsigned char x;
    unsigned char y;
    y=atoi(argv[2]);
    while(!feof(fp))
    {
        x=fgetc(fp);
        if(x==y)
            printf("%d",ftell(fp));
    }
    fclose(fp);
    return 0;
}
