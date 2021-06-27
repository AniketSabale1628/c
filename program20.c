#include<stdio.h>
int sumDigits(int ino)
{
     int idigit=0,isum=0;
     if(ino<0)
{ino=-ino;}
    while(ino>0)
    {
idigit=ino%10;
isum=isum+idigit;
ino=ino/10;
    }
    return isum;
}
int main()
{
    int ivalue=0;
    int iret=0;

    printf("enter");
    scanf("%d",&ivalue);

    iret=sumDigits(ivalue);
    printf("sum is : %d\n",iret);
    return 0;
}