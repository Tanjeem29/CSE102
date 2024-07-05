//PHONES AND NAMES FPRINTF
#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *f1;
    f1=fopen("phone.txt","w");
    int loc;
    char names[5][20];
    char numbers[5][20];
    char names2[5][20];
    char numbers2[5][20];
    int i;
    for(i=0;i<3;i++)
    {
        scanf("%s %s",names[i],numbers[i]);
        if(*names[i]=='\n')
            break;
        fprintf(f1,"%s %s \n",names[i],numbers[i]);
        printf("%s %s\n",names[i],numbers[i]);
    }
    fclose(f1);
    f1=fopen("phone.txt","r");
    i=0;
    char x;
    while(!feof(f1))
    {
        fscanf(f1, "%s %s",names2[i],numbers2[i]);
        printf("%s %s\n",names2[i],numbers2[i]);
        i++;
        if((x=fgetc(f1))==EOF) break;
        //if(i==3)break;
    }

}
