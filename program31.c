//i/p=89451
//o\p=8(9-1)

#include<stdio.h>
int maxmin(int ino)
{
    int idigit=0;
    int imax=0;
    int imin=9;
    while(ino>0)
    {
        idigit=ino%10;
        if(idigit>imax)
        {
          imax=idigit;
        }
        else if(idigit<imin)
        {
          imin=idigit;
        }
        ino=ino/10;
    }
    return imax-imin;
}
int main()
{
    int ivalue=0;
    int iret=0;
    printf("enter number");
    scanf("%d",&ivalue);
    iret=maxmin(ivalue);
    printf("%d\n",iret);
    return 0;

}
