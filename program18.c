//12=1 2 3 4 6
#include<stdio.h>
#include<stdbool.h>

bool check(int ino)
{
    int icnt=0;
    
    for(icnt=2;icnt<=ino/2;icnt++)
    {
        if(ino%icnt==0)
      {
          break;
      }
          }
          if(icnt==(ino/2)+1)
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
    int ivalue=0;
    
    bool iret;

    printf("enter ");
    scanf("%d",&ivalue);
    

     iret=check(ivalue);

     if(iret==true)
     {
    printf("prime %d\n",ivalue);
     }
     else
     {
         printf("not prime %d\n",ivalue);
     }
    return 0;
}