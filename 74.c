#include<stdio.h>
//#include<stdlib.h>
void strlwrX(char str[])
{
    if(str==NULL)
    {
        return;
    }
    while(*str!='\0')
    {
        if((*str>='a')&&(*str<='z'))
        {
            *str=*str-32;
        }
        str++;
    }
    }
int main()
{
    char Arr[10];
    int iret=0;
    printf("enter your name \n");
scanf("%[^'\n']s",Arr);
//fgets(Arr,40,stdin);  
    strlwrX(Arr);
    printf("string length is:::::%s\n",Arr);
    return 0;
}