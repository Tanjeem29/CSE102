//PRINTING ALTERNATE BYTES FSEEK
#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
    FILE *fp;
    fp=fopen(argv[1],"r");
    int loc=0,last;
    fseek(fp,0,SEEK_END);
    last=ftell(fp);
    last--;
    fseek(fp,0,SEEK_SET);
    char c;
    while(loc<=last)
    {
//        c=fgetc(fp);
        //printf("%c",c);
        fread(&c,sizeof(char),1,fp);
        printf("%c",c);
        loc+=2;
        fseek(fp,loc,SEEK_SET);
    }
    fclose(fp);
    return 0;


}
