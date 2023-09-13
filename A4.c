/*
write a program calculating factorial of number
*//*
#include<stdio.h>
int Calculate_Fact(int iNum)
{   
    int iFact=1; 
    for(int iCnt =1;iCnt<=iNum;iCnt++)
    {
        iFact=iCnt*iFact;
    }
    return iFact;
}
int main()
{   
    int iNumber;
    int iRet;

    printf("Enter the number which factorial is needed\n");
    scanf("%d",&iNumber);

    iRet=Calculate_Fact(iNumber);
    printf("FActorial of %d is %d",iNumber,iRet);
    return 0;
}
*//*
write a function which accepts number and prints character no of times
*//*
#include<stdio.h>
void Display(int iNo,char char)
{
    for(int iCnt=0;iCnt<-=iNo;iCnt++)
    {
        printf("%c",char);
    }
}
int main()
{  
    int iNum=0;
    printf("Enter the no of times u want to print\n");
    scanf("%d",&iNum);

    char ch;
    printf("Enter the characher you want to print\n");
    scanf("%c",&ch);

    Display(iNum,ch)
}*/

