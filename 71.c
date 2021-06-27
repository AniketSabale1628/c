#include<stdio.h>
//#include<stdlib.h>
int strlenX(char str[])
{
    int icnt=0;
     while(*str!='\0')
    {
           
           //icnt++;
           if(*str>='a'&&*str<='z')
           {
           printf("%d : %c: %d\n",icnt,*str,*str);
           icnt++;
           }
           str++;
    }
    return icnt;
}
int main()
{
    char Arr[10];
    int iret=0;
    printf("enter your name \n");
scanf("%[^'\n']s",Arr);
//fgets(Arr,40,stdin);  
    iret=strlenX(Arr);
    printf("string length is:::::%d",iret);
    return 0;
}