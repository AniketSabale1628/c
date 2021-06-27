//Accept no from user and display all the nos till that number
//i/p 8
//o/p 1 2 3 4 5 6 7 8
//i/p -6
//o/p 1 2 3 4 5 6
/*
start:
      accept 1 no as no
      if no is negative then conver it to positive
      create one couner as cnt and set it to 1
      iterate til the counter is less than or equal to the number
       print the value of countr on the screen
       increament the value of counter by 1
       continue
 stop;     
*/
#include<stdio.h>
 void display(int ino)
 {
     int icnt=0;
     if(ino<0)//input updator 
     {
         ino = -ino;
     }
     /*if(ino==0)
     {
         return;
     }*/
     //1 2 3 4 5
     //start  1
     //end   5                                               //dry run   ino|5|   icnt|0,1,2,3,4,5,(stop6)|
     //differance  1
     //1 initialization
     //2 condition
     //3 increament or decreament
     //4 loop body
     //   1      2         3
    for(icnt=1;icnt<=ino;icnt++)
    {
        printf("%d\n",icnt);//4
    }
    //1 (2 4 3) ( 2 4 3) (2 4 3) (2 4 3) )(2 4 3)2stop 
    //o/p  1 2 3 4 5
 }
int main()//entry point funtion
{
    int ivalue=0;
    printf("enter the number\n");
    scanf("%d",&ivalue);
     display(ivalue);
    return 0;
}