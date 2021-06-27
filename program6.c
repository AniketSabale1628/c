//accept number from user and check whether the number that no is even or odd
//i/p  4
//o/p its odd
/*

*/
#include<stdio.h>
#include<stdbool.h>

bool checkEven(int iNo)
{
    if(iNo %2 ==0)
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
    bool bRet;

    printf("enter number");
    scanf("%d",&iValue);//checkEven(12)
    bRet=checkEven(iValue);
    if(bRet==true)
    {
        printf("%d even number  \n",iValue);
    }
    else
    {
      printf("%d odd number \n ",iValue);
    }
    return 0;
}