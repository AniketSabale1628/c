//accept number from user and return the largest digit

#include<stdio.h>
int difference(int ino)
{
    int icnt=0;
    int isum1=0;
   int isum2=0;
    for(icnt=1;icnt<=ino;icnt++)
    {
        if(ino%icnt==0)
        {
            isum1= isum1+icnt;
        }
        else
        {
            isum2= isum2+icnt;
        }

    }
    return isum1-isum2;
}
   
int main()
{
    int ivalue=0;
    int iret=0;
    printf("enter number");
    scanf("%d",&ivalue);
    iret=difference(ivalue);
    printf("%d\n",iret);
    return 0;

}
