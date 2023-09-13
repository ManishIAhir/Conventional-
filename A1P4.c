/*
Write a program which prints following pattern 
*
**
***
****
*****

Algorithm
 start 
 aceept no of times we want to print * in increaesing order
 print using non repetition of print statement.
 end
*/



#include<stdio.h>

int main()
{
    int IPrNo = 0;

    printf("enter no of lines of *s want to print\n");
    scanf("%d",&IPrNo);

    int iCnt = 0;

    for(iCnt=0;iCnt<=IPrNo;iCnt++)
    {
        printf("*\n");
    }
    return 0;
}