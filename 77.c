#include<stdio.h>
//#include<stdlib.h>
void display(char str[])
{
    int rev=0;
    int icnt=0;
    if(str==NULL)
    {
        return;
    }

    while(*str!='\0')
    {
       //printf("%c\n",*str);
       icnt++;
       str++;
    }
    str--;
    while(icnt>0)
    {
printf("%c",*str);
icnt--;
str--;
    }
    printf("\n");
}
int main()
{
    char Arr[10];
    int iret=0;
    printf("enter your name \n");
scanf("%[^'\n']s",Arr);
    display(Arr);
    printf("%s",Arr);
    return 0;
}