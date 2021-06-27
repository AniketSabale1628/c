#include<stdio.h>

int power(int ino1,int ino2)
{
    int i=0;
    int j=1;
    if(ino1<0)
    {
        ino1==-ino2;
    }
    if(ino2<0)
    {
        ino2==-ino1;

    }
    for(i=1;i<=ino2;i++)
    {
        j=j*ino1;
    }
    return j;
}
int main()
{
    int ivalue1=0;
    int ivalue2=0;
    int iret=0;

    printf("enter first");
    scanf("%d",&ivalue1);
    
    printf("enter second");
    scanf("%d",&ivalue2);
    iret=power(ivalue1,ivalue2);
    printf("result is : %d",iret);
    return 0;
}