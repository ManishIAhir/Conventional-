/*
Write program of calculating the factorial of given number 
*/

#include<stdio.h>

int Fact_(int iVAl)
{
    int ifact = 1;
    for(int iCnt=0;iCnt<=iVAl;iCnt++)
    {
        ifact =(ifact*iCnt);
    }   
    return ifact; 
}
int main()
{
    int iNum = 0;
    int iRet = 0;

    pritnf("Enter the number =\n");
    scanf("%d",&iNum);
    
    iRet=Fact_(iNum);
    printf("Factorial of %d is %d",iNum,iRet);

    return 0;
}