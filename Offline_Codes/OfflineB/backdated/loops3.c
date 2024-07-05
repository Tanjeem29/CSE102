#include<stdio.h>
int main()
{
    unsigned int x=10;
    if(x>-1)//-1 gets converted to (unsigned)-1 ie UINT_MAX. x!>UINT_MAX, so ans is N
        printf("Y");
    else
        printf("N");

}
