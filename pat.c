//Pattern printing
/*
****
****
****
****
Algorithm-start-print pattern function - logic inside using for loop-End
*/
#include<stdio.h>
void printReqPattern(int iR,int iC)
{   
    int i =0;
    int j =0;
    for(i=0;i<=iR;i++)
    {   
        for(j=0;j<=iC;j++)
        {   
            if(i=j)
            {
            printf("*");
            }
            else if (i==0&&j==0&&i==iR&&j==iC)
            {
            printf("*");
            }
            else
            {
            printf(" ");
            }
        }
        printf("\n");
    }
}
int main()
{   int iRow = 0;
    int iCol = 0;

    printf("Enter number of rows\n");
    scanf("%d",&iRow);

    printf("Enter number of columns\n");
    scanf("%d",&iCol);
    
    printReqPattern(iRow,iCol);

    return 0;
}
