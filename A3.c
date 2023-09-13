/*
#include<stdio.h>
int main()
{
    char c = '\0';
    int Nos = 0;

    printf("enter the character \n);
    scanf("%c",&ch);

    for(int iCnt=0;iCnt<=Nos;iCnt++)
    {
        printf("%c",ch);
    }  

}
*/
/*
Accept number and reverse number
algorithm
Start
Accept
declare b_f
Define B_f


*/
/*
#include<stdio.h>
int rev_Digits(int INo)
{   int iRev = 0;
    int iCnt = 0;
    int PLace = 1;
    while (INo != 0)
    {
        iRev=iNo%10; //if  iN0 = 321 iRev = 3
        
        iRev= iRev*PLace;
        PLace = PLace*10;
        INo=iNo/10   
        iCnt++
    }
    
    return iRev; 
}
int main()
{   int iNum = 0;
    int iret = 0;

    printf("Enter the number\n");
    scanf("%d",&iNum);
    
    iret = rev_Digits(iNum);
    return 0;
}
*/
/*
#include<stdio.h>
void Check_Pallin(int INo)
{   int iRev = 0;
    int iCnt = 0;
    int PLace = 1;
    while (INo != 0)
    {
        iRev=iNo%10; //if  iN0 = 321 iRev = 3
        
        iRev= iRev*PLace;
        PLace = PLace*10;
        INo=iNo/10 ;  
        iCnt++;
    }
    
    If(iRev=INo)
    {
        printf("NUmber is pallindrome number\n");
    } 
}
int main()
{   int iNum = 0;

    printf("Enter the number\n");
    scanf("%d",&iNum);
    
    Check_Pallin(iNum);
    return 0;
}
*/
/*
#include<stdio.h>
int iFact(int INo)
{
    int iFact = 1;
    for(int iCnt=1;iCnt<=INum;iCnt++)
    {
        iFact=iCnt*iFact;
    }
    return iFact;
}
int main()
{   
    int iNum = 0;
    int iRet = 0;
    
    printf("Enter the number\n");
    scanf("%d",&iNum);

    iRet=iFact(iNum);
    printf("Facctorial of %d is %d",iNum,iRet);

    return 0;
}
*/
/*
unique pair
start
Accept number
Write business function
Arguement
use loop

Dry run
no --- 24

1* no =no
2* no =no
4* no =no
*//*
#include<stdio.h>
void Display_(int iNum)
{
    int iCnt=1;

    for(iCnt=1; iCnt<=(iNum/2);iCnt++)
    {
        if((iNum/iCnt)==0)
        {
            printf("%d*%d=%d",iCnt,iNum,iNum);
        }
    }
}
int main()
{
    int iNumber=0;
    printf("Enter the number\n");
    scanf("%d",&iNumber);
    Display_(iNumber);
    return 0
}
*//*
Accept the number and print prime factors 
Input =180
Output = 2*2*2*3*5
*//*
#include<stdio.h>
void DiSplay_Prime(int iNum)
{
   for(int icnt=0; iCnt<=iNum; icnt++)
   {
    if(iNum*iCnt==0)
    {
       printf("\t");
    }
    else
    {
        printf("%d",icnt);
    }
   }
}
int main()
{
    int iNumber=0;
    printf("Enter the number\n");
    scanf("%d",&iNumber);
    Display_Prime(iNumber);
    return 0
}
*//*
Write a program and display fibonacci series 
Input = 6
Output =1, 1, 2, 3, 5, 8

Algorithm
start
accept 
formal argument
6
print iCnt 1,2,4,8
iCnt+iCnt  1=1
*//*
#include<stdio.h>
void Display_Fabonacci(int iFabLim)
{
    int iCnt = 1
    printf("%d,",iCnt);
    for(int iCnt=1;iCnt<iFabLim:iCnt++)
    {
        printf("%d,",iCnt);
        iCnt+iCnt;
    }
}
int main()
{
    int iNumber=0;
    printf("Enter the number\n");
    scanf("%d",&iNumber);
    Display_Fabonacci(iNumber);
    return 0
}
*/