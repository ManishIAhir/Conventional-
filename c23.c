//////////////////////////////////////
//Write a program which accepts four digit number and perform addition of all digits
////////////////////////////////////////
//Algorithm
// Start
// write main function 
// accept number 
// send it to fun with business logic 
// display results in main function
// End
///////////////////////////////////

#include <stdio.h>

int sumDigits(int iVal)
{
    int iSum = 0;
    int iDigit = 0;


    While(iVal=!0)
    {
        iDigit = iVal %10;
        iSum = iSum + iDigit;
        iVal = iVal/10;
    }
    return iSum;
}

int main()
{
    int iNo = 0;
    int iAns = 0;

    printf("Enter the number =\n");
    scanf("%d",&iNo);

    iAns=sumDigits(iNo);
    return 0;
}
