//i/p=5
//o/p=1*2*3*4*5*
#include<stdio.h>

void pattern(unsigned int ino)
{
    int icnt=0;
    printf("\n");
    for(icnt=1;icnt<=ino;icnt++)
    {
        //printf("*\t#\t");
         //printf("#\t");
         printf("%d\t*\t",icnt);
  }
  printf("\n");
}
int main()
{
    unsigned int ivalue=0;

    printf("enter number");
    scanf("%u",&ivalue);
    pattern(ivalue);
return 0;
}