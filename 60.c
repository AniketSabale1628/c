//n number //
#include<stdio.h>
#include<stdlib.h>
int frequency(int Arr[],int iSize)
{
    int i=0;
    int imax=0;
    imax=Arr[0];
    for(i=0;i<iSize;i++)
    {
    if((Arr[i])>imax)
    {
    imax=Arr[i];
    }
    }
    return imax;
}
int main()
{
    int *arr =NULL;
    int iLength=0;
    int i=0;
    int iret=0;
    printf("enter number  :\n");
    scanf("%d",&iLength);
   

    arr=(int*)malloc(iLength*sizeof(int));
    printf("enter");
   
        for(i=0;i<iLength;i++)
        {
            scanf("%d",&arr[i]);
        }
    iret=frequency(arr,iLength);
    printf("%d\n",iret);
    free(arr);
    return 0;
}