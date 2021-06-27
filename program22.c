#include<stdio.h>
int Digitsfrequency(int ino,int i)
{
     int idigit=0,icnt=0;
     if(ino<0)
{ino=-ino;}
if((i<0)||(i>9))
{
    printf("invalid");
    return 0;
}
    while(ino>0)
    {
idigit=ino%10;
if(idigit==i)
{
icnt++;
}
//isum=isum+idigit;
//isum=((ino%2)==0);
ino=ino/10;
    }
    return icnt;
}
int main()
{
    int ivalue1=0;
    int ivalue2=0;

    int iret=0;

    printf("enter\n");
    scanf("%d",&ivalue1);
    printf("ener digit\n");
    scanf("%d",&ivalue2);

    iret=Digitsfrequency(ivalue1,ivalue2);
    printf("no of evendigits is : %d\n",iret);
    return 0;
}