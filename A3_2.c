/*
print the following pattern
***
***
***
Algorithm
start 
Accept no of rows and columns
bussiness functon & Argument
use of nested loop
*/

#include<stdio.h>
void Display_Pattern(int i,int j)
{   
    int iCnt;
    for(iCnt=1; iCnt<=i; iCnt++)
    {
        for(iCnt=1; iCnt<=j; iCnt++)
        {
             printf("*");
        }
    }
}
int main()
{   int iRow = 0;
    int iCol = 0;

    printf("Enter number of rows\n");
    scanf("%d",&iRow);

    printf("Enter number of column\n");
    scanf("%d",&iCol);

    Display_Pattern(iRow,iCol);

    return 0;
}