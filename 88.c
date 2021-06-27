#include<stdio.h>
void displayBinary(unsigned int iNo)
{
    unsigned int idigit=0;
    while(iNo>0)
    {
        idigit=iNo%2;
        
        printf("%u\t",idigit);
        iNo=iNo/2;
    }
}
int main()
{
    unsigned int ivalue=0;
    printf("enter number\n");
    scanf("%u",&ivalue);
    displayBinary(ivalue);
    return 0;
}