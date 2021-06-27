//accept number from user and whether it is palindrom or not
//5005=5005-true
//8475=false

#include<stdio.h>
#include<stdbool.h>
bool palindrom(int ino)
{
    int idigit=0;
    int imult=0;
    int itemp=0;
    if(ino<0)
    {
        ino=-ino;
    }
    itemp=ino;
    while(ino>0)
    {
        idigit=ino%10;
        
          imult=(imult*10)+idigit;
        
        ino=ino/10;
    }
if(itemp==imult)
{
    return true;
}
else
{
    return false;
}
}
int main()
{
    int ivalue=0;
    bool iret;
    printf("enter number");
    scanf("%d",&ivalue);
    iret=palindrom(ivalue);
    if(iret==true)
    {
    printf("palindrom");
    }
    else
    {
            printf("not");
    }
    return 0;

}
