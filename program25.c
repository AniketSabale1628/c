//accept number from user and rturn its reverse number
#include<stdio.h>
int reverse(int ino)
{
    int idigit=0;
    int imult=0;
    if(ino<0)
    {
        ino=-ino;
    }
    /*while(ino>0)
    {
        idigit=ino%10;
        if(idigit!=0)
        {
          imult=(imult*10)+idigit;
        }
        ino=ino/10;
    }*/
    for(;ino>0;ino=ino/10)
    {
        idigit=ino%10;
        imult=(imult*10)+idigit;
    }
return imult;
}
int main()
{
    int ivalue=0;
    int iret=0;
    printf("enter number");
    scanf("%d",&ivalue);
    iret=reverse(ivalue);
    printf("%d",iret);
    return 0;

}
