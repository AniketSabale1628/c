#include<stdio.h>

void pattern(int irow,int col)
{
    int i=0;
    int j=0;
    if(irow!=col)
    {
        return;
    }
    for(i=1;i<=irow;i++)
    {
        for(j=1;j<=col;j++)
        {
           if(i==j)
           {
               printf("%d\t",j);
           }
        else if(i>j)
        
           {
               printf("*\t");
           }    
           // if(i<j)
           else
           {
               printf("$\t");
           }    
               }
        printf("\n");
    }    
}
int main()
{
   int ivalue1=0;
int ivalue2=0;
    printf("enter number");
    scanf("%u",&ivalue1);
     printf("enter number");
    scanf("%u",&ivalue2);
    
    pattern(ivalue1,ivalue2);
return 0;
}