#include<stdio.h> 
#include<stdbool.h>
unsigned int ToggleBit(unsigned int iNo) 
{ 
 // Logic
  unsigned int imask=0x00000001,iresult=0;
  int icnt=0,i=0;
  for(i=0;i<32;i++)
  {
      iresult=iNo&imask;
      if(iresult==imask)
      {
          icnt++;
      }
      imask=imask<<1;
  }

 /* unsigned int result=0;
  if((ipos<1)||(ipos>32))
  {
      return false;
  }
  imask=imask<<(ipos-1);
  if()
  result=iNo & imask;
  */
 return icnt;
} 
int main()
{
    unsigned int ivalue;

     int iret;
    printf("enter the number\n");
    scanf("%u",&ivalue);
    iret=ToggleBit(ivalue);
   printf("%d\n",iret);
    return 0;
}
