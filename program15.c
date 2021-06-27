//12=1 2 3 4 6
#include<stdio.h>

void fact(int ino)
{
    int i=0;
    for(i=1;i<ino;i++)
    {
        if(ino%i==0)
        {
            printf("%d\n",i);
        }
    }
}
int main()
{
    int ivalue=0;
    
    

    printf("enter ");
    scanf("%d",&ivalue);
    

    fact(ivalue);
    
    return 0;
}