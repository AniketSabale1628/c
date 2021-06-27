//i/p=5 A
//o/p=A B C D E
#include<stdio.h>

void pattern(unsigned int ino,char ch)
{
    int icnt=0;
    char c='\0';
    printf("\n");
    for(icnt=1,ch='A';icnt<=ino;icnt++,c++)
    {
      printf(" %c\n",c);
     }
  printf("\n");
}
int main()
{
    unsigned int ivalue=0;
    char cvalue='\0';

    printf("enter number");
    scanf("%u",&ivalue);
    printf("enter character");
    scanf(" %c",&cvalue);
    
    pattern(ivalue,cvalue);
return 0;
}