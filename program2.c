//accept two no from user and return the maximum and minimum nol̥
/*
algorithm for maximum 
start  
        accept first no as no1
        accept second no as no2
        if no1 is greater than no2
        then no1 is maximum
        othetrwise 
        no2 is maximum
     stop
*/
#include"header1.h"
int main()
{
    int ino1 = 0;
    int ino2 = 0;
    // int iret =0;
     int iret1=0;
    printf("enter first number ");
    scanf("%d",&ino1);
    printf("enter second number ");
    scanf("%d",&ino2);

 //iret=maximum(ino1,ino2) ;
 iret1=minimum(ino1,ino2);
 //printf("%d maximum no is : \n",iret);  
  printf("%d minimum no is : \n",iret1);  

    return 0;
}
