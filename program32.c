//i\p=5
//o\p *****
#include<stdio.h>

void pattern(unsigned int ino)
{
    int icnt=0;
    for(icnt=1;icnt<=ino;icnt++)
    {
        printf("*\t");
    }
}
int main()
{
    unsigned int ivalue=0;

    printf("enter number");
    scanf("%u",&ivalue);
    pattern(ivalue);
return 0;
}