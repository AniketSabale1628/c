//n number //
#include<stdio.h>
#include<stdlib.h>
int lastoccurance(int Arr[],int iSize,int ivalue)
{
    int i=0;
    int isum=0;
   // printf("even");
     for(i=iSize-1;i<0;i--)
         {
             if((Arr[i])==ivalue)
             {
            //isum=isum+Arr[i];
           // i;
          // i=isum+i;
           break;
           // printf("%d\n",isum);
        }

        }
       
            return i;
        
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
    iret=lastoccurance(arr,iLength,ino);
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