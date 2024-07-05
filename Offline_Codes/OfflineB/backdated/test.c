#include<stdio.h>
#include<stdlib.h>
/*int main(int argc, char *argv[])
{
    char *p;

    if(argc!=4)
    {
        printf("Error\n");
        exit(0);
    }
    //(strcmp(argv[1],argv[2])<0)?printf("%s",argv[1]):printf("%s",argv[2]);
    double x=atof(argv[2]);
    double y=atof(argv[3]);
    double z;
    if(!strcmp(argv[1],"add"))
        z=x+y;
    else if(!strcmp(argv[1],"subtract"))
        z=x-y;
    else if(!strcmp(argv[1],"multiply"))
        z=x*y;
    else if(!strcmp(argv[1],"divide"))
        z=x/y;
    printf("%f",z);


}*/
int main(int argc, char *argv[])
{
    if(argc!=2)
    {
        printf("Error\n");
        exit(0);
    }
    int l=strlen(argv[1]);
    int i;
    for(i=0;i<l;i++)
        (*(*(argv+1)+i))++;
    printf("%s",argv[1]);
    return 0;

}
