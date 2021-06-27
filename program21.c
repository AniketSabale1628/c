#include<stdio.h>
int evenDigits(int ino)
{
     int idigit=0,isum=0;
     if(ino<0)
{ino=-ino;}
    while(ino>0)
    {
idigit=ino%10;
if(idigit%2==0)
{
isum++;
}
//isum=isum+idigit;
//isum=((ino%2)==0);
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

    iret=evenDigits(ivalue);
    printf("no of evendigits is : %d\n",iret);
    return 0;
}