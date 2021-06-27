//i/p=5
//o/p=* # * # * # * #
#include<stdio.h>

void pattern(unsigned int ino)
{
    int icnt=0;
    printf("\n");
    for(icnt=1;icnt<=ino;icnt++)
    {
        printf("*\t#\t");
         //printf("#\t");
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