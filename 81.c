#include<stdio.h>

void strcpyX(char src[],char dest[])
{
    int icnt=0;
    if(src==NULL||dest==NULL)
    {
        return;
    }
    while(*src!='\0')
    {
       //printf("%c\n",*str);
       src++;
       icnt++;
    }
    src--;
    while(icnt>0)
    {
        *dest=*src;
        src--;
        dest++;
        icnt--;
    }
    *dest='\0';
}
int main()
{
    char arr[20];
    char brr[20];
    printf("enter string\n");
    scanf("%[^'\n']s",arr);

strcpyX(arr,brr);
printf("After copy string : %s\n",brr);
    return 0;
}