#include<stdio.h>
void Display(int iNo)
{
    int i=1;
   /*while(i<=10)
   {
       printf("table %d*%d\n",iNo,i,iNo*i);
       i++;
   }*/
   if(iNo<0)
   {
       iNo=-iNo;
   }
   for(i=1;i<=10;i++)
   {
       printf("%d\n",iNo*i);
   }
   
}
int main()
{
    int iValue=0;
   

    printf("enter number");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}