// simple calculator
//accept two numbers and operator and perform operation on it.
/////////////////////////////////////////////////////////
//
//Algorithm
// start
// declare two numbers and operator 
// accept 
// write if else conditons as per arithmatic operations 
// write if condiotion for invallid operator
///////////////////////////////////////////////


#include<stdio.h>

int main()
{
    int iNo1 = 0; 
    int iNo2 = 0;
    int Ans = 0;

    printf("Enter number 1 =");
    scanf("%d",&iNo1);

    printf("Enter number 2 =");
    scanf("%d",&iNo2);

    char op;
    printf("Enter operator =");
    scanf("%*c%c",&op);


    if(op=='+')
    {
        Ans= iNo1+iNo2;
        printf("Addition is %d",Ans);
    }
    else if(op=='-')
    {     
        Ans= iNo1-iNo2;
        printf("Substration  is %d",Ans);
    }
    return 0;
} 

