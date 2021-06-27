
#include<stdio.h>
unsigned int ofbit(unsigned int iNo)
{
    unsigned int imask=0xFFFFFFFB;
     unsigned int result=0;
    result= iNo & imask;
    return result;
}
int main()
{
    unsigned int ivalue=0;
    unsigned int iret=0;

    printf("enter number\n");
    scanf("%u",&ivalue);
    iret=ofbit(ivalue);
    printf("number updatation :%d\n",iret);
    return 0;
}