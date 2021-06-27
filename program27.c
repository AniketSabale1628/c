//accept number from user and return the largest digit

#include<stdio.h>
int largedigit(int ino)
{
    int idigit=0;
    int imax=0;
   // int itemp=0;
    if(ino<0)
    {
        ino=-ino;
    }
    while(ino>0)
    {
        idigit=ino%10;
       // imax=(imax*10)idigit; 
        if(imax<idigit)
        {
            imax=idigit;
            if(imax==9)
            {
                break;
            }
        }

        ino=ino/10;
    }
    return imax;
}
int main()
{
    int ivalue=0;
    int iret=0;
    printf("enter number");
    scanf("%d",&ivalue);
    iret=largedigit(ivalue);
    printf("%d\n",iret);
    return 0;

}
