#include<stdio.h> 
#include<stdbool.h>
bool ChkBit(unsigned int iNo,int ipos) 
{ 
 // Logic
  unsigned int imask=0x00000001;
  unsigned int result=0;
  if((ipos<1)||(ipos>32))
  {
      return false;
  }
  imask=imask<<(ipos-1);
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
    int ipos=0;
    bool bret;
    printf("enter the number\n");
    scanf("%u",&ivalue);
    printf("enter the position\n");
    scanf("%d",&ipos);
    bret=ChkBit(ivalue,ipos);
    if(bret==true)
    {
        printf(" bit is onn\n ");
    }
    else
    {
        printf(" bit is off \n");
    }
    return 0;
}
