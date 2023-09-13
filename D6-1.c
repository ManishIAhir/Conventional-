/*
Write A code for addition of n numbers

Algorithm
start
Accept n 
Decide loop as per requirements 
counter declaaration
loop
display output 
end 
*/
/*
#include<stdio.h>

int Add_n(int iNum)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt=0;iCnt<=iNum;iCnt++)
    {
       iSum= iSum + iCnt ;//iSum=+iCnt;
    }
     /*
    while(iNum!=0)
    {
        iSum = iSum + iCnt;
        iCnt++; 
    }
    */
    //return iSum;
//}
*/
/*

int main()
{
    int n = 0;
    int iRet = 0;

    printf("Enter n\n");
    scanf("%d",&n);

    iRet=Add_n(n);

    printf("Sumation of n numbers is%d",iRet);
    return 0;
}
*/
///////////////////////////////////////////////////////
//write a program of addition of all digits of number 
// Algorithm
// start 
// Accept number 
// in Businees function 
// write lopgic 
// declare varible to store sumation 
// Display sumation
/////////////////////////////////////////

#include<stdio.h>
{
   int iNum = 0;
   int isum = 0;
   int iDigit = 0;

   printf("Enter number\n");
   scanf("%d",&iNum);

   int iCnt = 0;

   white(iNum!=0)
   {
     iDigit= iNum%10;
     iSum = iSum + iDigit;
     iCnt++;
   }
   printf("Sum of Digits of %d is %d",iNum,isum);
   return 0;
}