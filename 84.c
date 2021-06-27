#include<stdio.h>

void strcpyX(char src[],char dest[])
{
    if(src==NULL||dest==NULL)
    {
        return;
    }
    while(*dest!='\0')
    {
        dest++;
    }
    
    *dest=' ';
    dest++;
    while(*src!='\0')
    {
        *dest=*src;
        src++;
        dest++;
    }
    *dest='\0';
}
int main()
{
    char arr[20];
    char brr[20];
    printf("enter first string\n");
    scanf("%[^'\n']s",arr);//demo
    
    printf("enter second string\n");
     scanf(" %[^'\n']s",brr);//hello

strcpyX(arr,brr);
printf("after copy string : %s\n",brr);
    return 0;
}