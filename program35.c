//i/p=5
//o/p=5 * 4 * 3 * 2 * 1 *
#include<stdio.h>

void pattern(unsigned int ino)
{
    int icnt=0;
    printf("\n");
    for(icnt=ino;icnt<=ino;icnt--)
    {
        //printf("*\t#\t");
         //printf("#\t");
        printf("*\t%d\t",icnt);

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