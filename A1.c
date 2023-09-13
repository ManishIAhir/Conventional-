/*
write a program which accepts number and prints its table

Algorithm
start
enter no 
accept no
arithmatic operation followed by printing
end
*/
/*
#include<stdio.h>
int main()
{
    int iNumber = 0;

    printf("Enter the number =");
    scanf("%d",&iNumber);

    int imult = 0;
    int iCnt = 0;

    for(iCnt = 1; iCnt<=10;iCnt++)
    {
        imult= iNumber*iCnt;

        printf("%d\n",imult);
    }
}
*/
/*
write A program which accepts number and print face value of all digits.

Algorithm 
start
Accept 
use while loop
end 
*/

#include<stdio.h>

int Display(int iNumber)
{
    int iCnt = 0;
    int iDigit = 0;

    while(iNumber != 0)
    {
        iDigit = iNumber%10;
        printf("\n%d",iDigit);
        iNumber = iNumber/10;
        iCnt++;
    }

}
int main()
{
    int IVAL = 0;

    printf("Enter the number =\n");
    scanf("%d",&IVAL);

    Display(IVAL);

    return 0;
}