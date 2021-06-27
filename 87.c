#include<stdio.h>
int countone(iNo)
{
    int icnt=0;
    while(iNo>0)
    {
        
        icnt+=(iNo%2);
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