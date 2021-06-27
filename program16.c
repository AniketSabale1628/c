//12=1 2 3 4 6
#include<stdio.h>

int fact(int ino)
{
    int i=0;
    int j=0;
    for(i=1;i<=ino;i++)
    {
        if(ino%i==0)
      {
        j=j+i;
      }
        return j;
    }
}
int main()
{
    int ivalue=0;
    
    int iret=0;

    printf("enter ");
    scanf("%d",&ivalue);
    

     iret=fact(ivalue);
    printf("addition %d\n",iret);
    return 0;
}