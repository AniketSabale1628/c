#include<stdio.h>
#include<stdbool.h>

bool ChkEvenDivisible(int iNo)
{
    if(iNo % 3==0&&iNo % 5==0)
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
    int iValue=0;
    bool bRet=false;

    printf("enter number");
    scanf("%d",&iValue);//checkEven(12)
    
    bRet=ChkEvenDivisible(iValue);
    if(bRet==true)
    {
        printf("%d divi\n",iValue);
    }
    else
    {
        printf("%d not divi\n",iValue);
    }
    return 0;
}