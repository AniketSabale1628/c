//accept number from user and return the largest digit

#include<stdio.h>
int smalldigite(int ino)
{
    int idigit=0;
    int imin=9;
   // int itemp=0;
    if(ino<0)
    {
        ino=-ino;
    }
    while(ino>0)
    {
        idigit=ino%10;
       // imax=(imax*10)idigit; 
        if(imin>idigit)
        {
            imin=idigit;
            if(imin==0)
            {
                break;
            }
        }

        ino=ino/10;
    }
    return imin;
}
int main()
{
    int ivalue=0;
    int iret=0;
    printf("enter number");
    scanf("%d",&ivalue);
    iret=smalldigite(ivalue);
    printf("%d\n",iret);
    return 0;

}
