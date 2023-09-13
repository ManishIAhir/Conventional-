// check whether no is positive or negative
/////////////////////////////////////////////
//
//Algorithm 
// start
// accept
// set conf=dtions for no to pass
// display output if no is fit in conditions
// return / exit
////////////////////////////////////////////

#include<stdio.h>

int main()
{
    int iNo = 0;

    printf("Enter the no =");
    scanf("\n%d\n",&iNo);
    if(iNo==0)
    {
        printf("iNo is 0");
    }
    
    if(iNo>0)
    {
        printf("%d is positive number",iNo);
    }
    else(iNo<0)
    {
        printf("%d is negative number",iNo);
    }
    
    return 0;
}