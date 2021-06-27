#include<stdio.h> 
#include<stdbool.h>
unsigned int ToggleBit(unsigned int iNo,int ipos) 
{ 
 // Logic
  unsigned int imask=0x00000001;
 // unsigned int imask1=0x11111111;
  unsigned int result=0;
  if((ipos<1)||(ipos>32))
  {
      return false;
  }
  imask=imask<<(ipos-1);
  //imask1=imask1<<(ipos-1);
  imask=~imask;
  
  result=iNo & imask;
  
 return result;
} 
int main()
{
    unsigned int ivalue;
    unsigned int ipos=0;

    unsigned int bret;
    printf("enter the number\n");
    scanf("%u",&ivalue);
    printf("enter the position\n");
    scanf("%d",&ipos);
    bret=ToggleBit(ivalue,ipos);
   printf("%u\n",bret);
    return 0;
}
