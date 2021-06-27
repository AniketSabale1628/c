//accept number from user and return multiplication of digits
#include<stdio.h>
int mult(int ivalue)
{
    int idigit=0;
    int imul=1;
    if(ivalue<0)
    {
        ivalue=-ivalue;
    }
    while(ivalue>0)
    {
        idigit=ivalue%10;
        if(idigit!=0)
        {
        imul=imul*idigit;
        }
        ivalue=ivalue/10;
    }
    return imul;
}
int main()
{
    int ino=0;
    int iret=0;
    printf("enter number");
    scanf("%d",&ino);
    iret=mult(ino);
    printf("%d",iret);
    return 0;

}
