//n number //
#include<stdio.h>
#include<stdlib.h>
int firstoccurance(int Arr[],int iSize,int ivalue)
{
    int i=0;
    int isum=0;
   // printf("even");
     for(i=0;i<iSize;i++)
         {
             if((Arr[i])==ivalue)
             {
            //isum=isum+Arr[i];
           // i;
           //ivalue++;
           break;
           // printf("%d\n",isum);
        }

        }
        if(i==iSize)
        {
            return -1;
        }
        else
        {
            return i;
        }
       // return Arr[i];
}
int main()
{
    int *arr =NULL;
    int iLength=0;
    int i=0;
    int iret=0;
    int ino=0;
    printf("enter number  :\n");
    scanf("%d",&iLength);
   

    arr=(int*)malloc(iLength*sizeof(int));
    printf("enter");
   
        for(i=0;i<iLength;i++)
        {
            scanf("%d",&arr[i]);
        }
         printf("enter element  :\n");
    scanf("%d",&ino);
    iret=firstoccurance(arr,iLength,ino);
    if(iret==-1)
    {
        printf("no such a number");
    }
    else
    {
           printf("%d\n",iret);
    }
    free(arr);
    return 0;
}