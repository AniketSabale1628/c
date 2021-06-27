#include<stdio.h> 
#include<stdbool.h>
bool ChkBit(unsigned int iNo) 
{ 
 // Logic
  unsigned int imask=0x00000054;
  unsigned int result=0;
  result=iNo & imask;
 if(result==imask)
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
    unsigned int ivalue;
    bool bret;
    printf("enter the number");
    scanf("%u",&ivalue);
    bret=ChkBit(ivalue);
    if(bret==true)
    {
        printf("15th bit is on ");
    }
    else
    {
        printf("15th bit is off ");
    }
    return 0;
}
