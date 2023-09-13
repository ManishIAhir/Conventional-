/*
write Addition program by using calll by value

Algorithm
start
variable declaration 
Accept
business function declaration 
business function definition
function calling 
ptrinting results 
End
*/

#include<stdio.h>

int Addition(int Val1,int Val2)
{
    int Ans = 0;
    Ans = (Val1 + Val2);
    return Ans;
}
int main()
{
    int No1;
    int No2;
    int IRet =0;

    printf("Enter first no = ");
    scanf("%d",&No1);

    printf("Enter second no = ");
    scanf("%d",&No2);
     
    IRet=Addition(No1,No2);
    printf("Addition of %d And %d is %d",No1,No2,IRet); 

    return 0;
}