#include<stdio.h>
#include<stdbool.h>

bool ChkEvenDivisible(int iNo1,int iNo2)
{
    if((iNo1 % iNo2) ==0)
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
    int iValue1=0;
    int iValue2=0;
    bool bRet=false;

    printf("enter first number");
    scanf("%d",&iValue1);//checkEven(12)
    
    printf("enter second number");
    scanf("%d",&iValue2);
    
    bRet=ChkEvenDivisible( iValue1, iValue2);
    if(bRet==true)
    {
        printf("%d divi %d\n",iValue1,iValue2);
    }
    else
    {
        printf("%d not divi %d\n",iValue1,iValue2);
    }
    return 0;
}