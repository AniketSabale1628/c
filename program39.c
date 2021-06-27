
#include<stdio.h>

void pattern(unsigned int irow,unsigned int icol)
{
    int i=0,j=0;
    printf("\n");
for(j=1;j<=irow;j++)
    {
        for(i=1;i<=icol;i++)
    {
        printf("*\t");
    }
    printf("\n");
    }
}
int main()
{
    unsigned int ivalue1=0;
    unsigned int ivalue2=0;
    char cvalue='\0';

    printf("enter first number");
    scanf("%u",&ivalue1);
    printf("enter second number");
    scanf("%u",&ivalue2);
    pattern(ivalue1,ivalue2);
return 0;
}