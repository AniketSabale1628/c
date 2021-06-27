#include<stdio.h>
void displayDigits(int ino)
{
    int idigit=0;
    if(ino<0)
{ino=-ino;}
while(ino>0)
{
    idigit=ino%10;
    printf("%d\n",idigit);
    ino=ino/10;
}
}
int main()
{
    int ivalue=0;

    printf("enter");
    scanf("%d",&ivalue);

    displayDigits(ivalue);
    return 0;
}