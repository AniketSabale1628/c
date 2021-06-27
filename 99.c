#include<stdio.h> 
#include<stdbool.h>
bool ChkBit(unsigned int iNo,int ipos,int ipos1) 
{ 
 // Logic
  unsigned int imask=0x00000001;
  unsigned int imask1=0x00000001;

  unsigned int result=0;
  if((ipos<1)&&(ipos>32))
  {
      return false;
  }
  imask=imask<<(ipos-1);
  imask1=imask1<<(ipos1-1);

  result=iNo & imask;
 if(result==imask||
 result==imask1)
 {
     return true;
 }
 /*if(result==imask1)
 {
     return true;
 }*/
 else
 {
     return false;
 }
} 
int main()
{
    unsigned int ivalue;
    int ipos=0;
    int ipos1=0;
    bool bret;
    printf("enter the number\n");
    scanf("%u",&ivalue);
    printf("enter the position\n");
    scanf("%d",&ipos);
    printf("enter the position\n");
    scanf("%d",&ipos1);
    bret=ChkBit(ivalue,ipos,ipos1);
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
