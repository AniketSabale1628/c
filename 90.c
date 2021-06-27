#include<stdio.h>
int countone(unsigned int iNo)
{
    unsigned int idigit=0;
    int icnt=0;
    while(iNo>0)
    {
        idigit=iNo%2;
        icnt=icnt+idigit;
        iNo=iNo/2;
    }
    return icnt;
}
int main()
{
    int iret=0;
    unsigned int ivalue=0;
    printf("enter number\n");
    scanf("%u",&ivalue);
    iret=countone(ivalue);
    printf("number of on bits are :%d\n",iret);
    return 0;
}