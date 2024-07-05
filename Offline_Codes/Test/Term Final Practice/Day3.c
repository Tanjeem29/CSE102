#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define tc 3
int main()
{
    #if(tc==1)
    FILE *fp;
    int t[26]={0};
    fp=fopen(__FILE__,"rb+");
    char c;
    while((c=fgetc(fp))!=EOF)
    {
        putchar(c);
        c=tolower(c);
        if(c>='a'&&c<='z')
            t[c-'a']++;

    }
    for(int i=0;i<26;i++)
    {
        printf("%c occured %d times\n",i+'a',t[i]);
    }
    fseek(fp,-2,SEEK_END);
    printf("\n\n%c",fgetc(fp));
    #elif(tc==2)
    FILE *fpfrom,*fpto;
    fpfrom=fopen("From.txt","w+");
    char ch;
    do{
        scanf("%c",&ch);
        //ch=getchar();
        if(ch=='\\')
            break;
        fputc(ch,fpfrom);
    }while(1);
    //fpto=fopen("To.txt","rb+");
    fclose(fpfrom);
    #elif(tc==3)
    FILE *fpto,*fpfrom;
    fpto=fopen("To.txt","w+");
    fpfrom=fopen(__FILE__,"rb+");
    char ch;
    fseek(fpfrom,-1,SEEK_END);
    int at=ftell(fpfrom),i;
    for(i=at;i>=0;i--)
    {
        fseek(fpfrom,i,SEEK_SET);
        ch=fgetc(fpfrom);
        fputc(ch,fpto);
    }
    fclose(fpfrom);
    fclose(fpto);
    #elif(tc==4)
    FILE *fp1,*fp2;
    fp1=fopen(argv[1],"rb+");
    fp2=fopen(argv[2],"rb+");
    int i;
    int m=0,w=0,v=0,c=0;
    char ch;
    int fl=1;
    do{
        //printf("run1\n");
        fscanf(fp1,"%c",&ch);
        ch=tolower(ch);
        if(feof(fp1))
            break;
        if(ch==' '||ch=='\n'||ch=='\r'||ch=='\t')
        {
            if(fl==1)
                w++;
            fl=0;

        }
        else if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
            v++,fl=1;
        else if(ch>='a'&&ch<='z')
            c++,fl=1;
        else
            m++,fl=1;
    }while(1);
    printf("File %s:\nWords: %d\nVowels: %d\nConsonants: %d\nMiscellaneous: %d\n",argv[1],w,v,c,m);
    fl=1,w=0,v=0,c=0,m=0;
    do{
        //printf("run1\n");
        fscanf(fp2,"%c",&ch);
        ch=tolower(ch);
        if(feof(fp2))
            break;
        if(ch==' '||ch=='\n'||ch=='\r'||ch=='\t')
        {
            if(fl==1)
                w++;
            fl=0;

        }
        else if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
            v++,fl=1;
        else if(ch>='a'&&ch<='z')
            c++,fl=1;
        else
            m++,fl=1;
    }while(1);
    printf("File %s:\nWords: %d\nVowels: %d\nConsonants: %d\nMiscellaneous: %d\n",argv[2],w,v,c,m);
    fclose(fp1);
    fclose(fp2);
    #elif(tc==5)
    FILE *fp1,*fp2;
    fp1=fopen("From.txt","rb+");
    fp2=fopen("To.txt","rb+");
    int i;
    int m=0,w=0,v=0,c=0;
    char ch;
    int fl=1;
    do{
        //printf("run1\n");
        fscanf(fp1,"%c",&ch);
        ch=tolower(ch);
        if(feof(fp1))
            break;
        if(ch==' '||ch=='\n'||ch=='\r'||ch=='\t')
        {
            if(fl==1)
                w++;
            fl=0;

        }
        else if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
            v++,fl=1;
        else if(ch>='a'&&ch<='z')
            c++,fl=1;
        else
            m++,fl=1;
    }while(1);
    printf("File %s:\nWords: %d\nVowels: %d\nConsonants: %d\nMiscellaneous: %d\n","From",w,v,c,m);
    fl=1,w=0,v=0,c=0,m=0;
    do{
        //printf("run1\n");
        fscanf(fp2,"%c",&ch);
        ch=tolower(ch);
        if(feof(fp2))
            break;
        if(ch==' '||ch=='\n'||ch=='\r'||ch=='\t')
        {
            if(fl==1)
                w++;
            fl=0;

        }
        else if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
            v++,fl=1;
        else if(ch>='a'&&ch<='z')
            c++,fl=1;
        else
            m++,fl=1;
    }while(1);
    printf("File %s:\nWords: %d\nVowels: %d\nConsonants: %d\nMiscellaneous: %d\n","To",w,v,c,m);
    fclose(fp1);
    fclose(fp2);
    #elif(tc==6)
    float x=4.5;
    int *p;
    p=(int *)(&x);
    (*p)=(*p)<<2;
    printf("%f",*p);
    #elif(tc==6)
    char p[4][3][2]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24};
    printf("%d %d %d %d",p+1,*(p+1),**(p+1),***(p+1));
    #elif(tc==0)
    char *p="League of Shadows";
    //p[2]='u';
    printf(p);
    #endif
}
