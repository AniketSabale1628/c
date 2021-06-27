#include<stdio.h>

int fact(int ino)
{
    int j=1;
   if(ino<0)
    {
        ino==-ino;
    }
    while(ino>0)
    {
        j=j*ino;
        ino--;
    }
     return j;
}
int main()
{
    int ivalue=0;
    
    int iret=0;

    printf("enter first");
    scanf("%d",&ivalue);
    

    iret=fact(ivalue);
    printf("result is : %d",iret);
    return 0;
}