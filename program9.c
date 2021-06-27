#include<stdio.h>
void checkresult(int imarks)
{
  
       if((imarks<0)||(imarks>100))
       {
           printf("invalid mark\n");
           return;
       }
       if((imarks>0)&&(imarks<35))
       {
           printf("you are failed\n");
       }
       
       else if((imarks>=35)&&(imarks<50))
       {
           printf("you are pass class\n");
       }
       else if((imarks>=50)&&(imarks<60))
       {
           printf("you are firstclss\n");
       }
       
       else if((imarks>=60)&&(imarks<75))
       {
           printf("you are second\n");
       }
       
       else
       {
           printf("you are high \n");
       }
  
   
}
int main()
{
    int iValue=0;
   

    printf("enter marks");
    scanf("%d",&iValue);

    checkresult(iValue);
    return 0;
}