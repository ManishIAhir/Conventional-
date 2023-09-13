/*write a program which prints faboncii series
Input-10   Output-  0 1 1 2 3 5 8 13 21 34

Algorithm
Main                  a a
bF  dec;aration
accept
function call
bfs logic return series elements
end
#include<stdio.h>
int iFaboncii(int iF__Lim)
{   
    int iAd =0;
    int iReturn = 0;
    for(int iCnt=0;iCnt<=iF__Lim;iCnt++)
    {  
       if(iAd==0)
       {
        iReturn = iAd;
        iAd++;
       }
       else
       {
         iReturn=iReturn+iAd;
       }
    }
    return iReturn;
}
int main()
{   
    int iF_Lim = 0;
    int iRet = 0;

    printf("Enter the series limit\n");
    scanf("%d",&iF_Lim);

    iRet = iFaboncii(iF_Lim);

    printf("%d\t",iRet);

    return 0;
}*//*
#include<stdio.h>
int Fabconiii_Fun(int iNum)
{
  int n1=0;
  int n2=1;
  if(n1==0)
  {
    return n1;
  }
  else if(n2==1) 
  {
     return n2;
  }
  else
  {
    for(int iCnt=2;iCnt<iNum;iCnt++)
    {
      iNum=n1+n2;
      n1=n2;
      n2=iNum;
    }
    return iNum;
  }
}
int main()
{ 
  int iFab_Lim = 0;
  int iRet = 0;
  
  printf("Enter the number..\n");
  scanf("%d",&iFab_Lim);

  iRet=Fabconiii_Fun(iFab_Lim);
  printf("%d\t",iRet);

  return 0;
}*/
// write aprogram which checks if number is prime or not 
// Algorithm start-- enter -- if statement -- if condition(n%i==0)-- print msg -- end
/*#include<stdio.h>
void Check_prime(int iNO)
{
  int i = 1;
  int flag = 0;
  for(i=0;i<iNO/2;i++)
  {
  if(iNO%i==0)
  {
    printf("%d is not prime number\n",iNO);
    flag = 1;
    break;
  }
  if(flag==0)
  {
    printf("%d is prime number\n",iNO);
  }
  }
}
int main()
{
  int iNUM = 0;

  printf("Enter the number..\n");
  scanf("%d",&iNUM);

  Check_prime(iNUM);
  return 0;
}*//*
//pallindrome number
#include<stdio.h>
int Check_pallin(int iNo)
{
  int Temp=0;
  int r;
  int sum=0;
  Temp=iNo;
  while(iNo!=0)
  {
    r=iNo%10;
    sum=(sum*10)+r;
    iNo=iNo/10;
  }
  if(Temp==sum)
  {
    return 1;
  }else{
    return 0;
  }
}
int main()
{
  int iNum = 0;
  int iRet = 0;

  printf("Enter the number\n");
  scanf("%d",&iNum);

  iRet=Check_pallin(iNum);
  
  if(iRet==1)
  {
    printf("%d is pallindrome number\n",iNum);
  }else
  {
    printf("%d is not pallindrome number\n",iNum);
  }
  return 0;
}*///write a program which gives factorial of given number
/*#include<stdio.h>
int Count_Factorial(int iNUM)
{
  int iCnt = 1;
  int iFact=1;
  for(iCnt=iNUM;iCnt>0;iCnt--)
  {
    iFact=iFact*iCnt;
  }
  return iFact;
}
int main()
{
  int iNum = 0;
  int iRet = 0;

  printf("Enter the number\n");
  scanf("%d",&iNum);

  iRet=Count_Factorial(iNum);
  printf("factorial of %d is %d",iNum,iRet);

  return 0;
}*/
///Reverse number
#include<stdio.h>
int Reverse_num(int iNo)
{  int r;
   int iRev=0;
   
   while(iNo!=0)
   {
     r=iNo%10;
     iRev=(10*iRev)+r;
     iNo/10;
   }
  return iRev;
}
int main()
{
  int iNum = 0;
  int iRet = 0;

  printf("Enter the number\n");
  scanf("%d",&iNum);

  iRet=Reverse_num(iNum);
  printf("%d is reverse number of %d",iRet,iNum);

  return 0;
}