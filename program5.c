//
//i/p 4
//o/p 10(1+2+3+4)
#include<stdio.h>
int sum(int ino)
{
    int icnt=0;
    int isum=0;
    if(ino==0)
    {
        return 0;
    } 
    if(ino<0)
    {                                    // dry run  ino|4|         icnt|0,1,2,3,4,(5)|   isum|0,1,3,6,10|
        ino=-ino;
    }
    for(icnt=1;icnt<=ino;icnt++)
    {
        isum=isum+icnt;
    }
    return isum;
}
int main()
{
    int ino=0;
    int iret=0;
    printf("enter number");
    scanf("%d\n",&ino);
    iret=sum(ino);
    printf("addition ia : %d\n",iret);
    return 0;
}