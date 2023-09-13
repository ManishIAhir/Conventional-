/*
Write the program of division of two numbers 
display the diviosion if Divider is zero then display apropriate zero erroe message

Algorithm
 start 
 Accept numbers 
 perform division
 disigning 
 end

 Input 
 no1 =2 no2 =2 
 division = 1

 if no2 = 0
 cant perform divsion "Zero error"
*/
/*
#include<stdio.h>

int main()
{
   int iNo1 = 0;
   int iNo2 = 0; 

   printf("Enter first number\n");
   scanf("%d",&iNo1);

   printf("Enter first number\n");
   scanf("%d",&iNo2);

   int Ans;
   if(iNo2==0)
   {
     printf("Cant perform addition")
   }
   else
   {
     Ans = (iNo1/iNo2);
     printf("Divison is %d",Ans);
   }
   return 0;
}
*/
 
/*
write the program which compares two numbers
and print maximum of them 

Algorithm
start
declare variables that needed
if else condition
output display 
end
*/
/*
#include<stdio.h>
int main()
{
    int no1;
    int no2;

    printf("Enter first number\n");
   scanf("%d",&no1);

   printf("Enter first number\n");
   scanf("%d",&no2);

   if(no1>no1)
   {
    printf("%d is greater than %d",no1,no2);
   }
   else(iNo<iNo2)
   {
    printf("%d is greater than %d",no2,no1);
   }
   return 0;

}
*/
/*
#include<stdio.h>
int main()
{
    int no1;
    int no2;
    int no3;int iMax = 0;

    printf("Enter first number\n");
   scanf("%d",&no1);

   printf("Enter first number\n");
   scanf("%d",&no2);

   printf("Enter third number\n");
   scanf("%d",&no3);

   if(no1>no2)
   {
      iMAx = no1;
   }
   else if
   {
    iMax = no2;
   }
   else(no3>iMAx)
   {
      iMax = no3;
   }
   return 0;
   */
  /*
  #include<stdio.h>
int main()
{
    int no1;
    int no2;
    int no3;int iMax = 0;

    printf("Enter first number\n");
   scanf("%d",&no1);

   printf("Enter first number\n");
   scanf("%d",&no2);

   printf("Enter third number\n");
   scanf("%d",&no3);

   if(no1>no2)
   {
      iMAx = no1;
   }
   else if
   {
    iMax = no2;
   }
   else(no3>iMAx)
   {
      iMax = no3;
   }
   return 0;
   */

  /*
  Write a program which displays no of years
  if leap year show  year is leap

  */
 /*
 #include<stdio.h>
 int main()
 {
   int iYear = 0;
   printf("Enter the year");
   scanf("%d",&iYear);

   if(iYear%400==0)
   {
      prinff("Given year is leap year");
      printf("366 days");
   }
   else
   {
      printf("Year has 365 days");
   }
   return 0;
*//*
#include<stdio.h>

int F_calc(int iOp)
{
   int n1,n2;
   int iOput;

   printf("Enter numbers\n");
   scanf("%d%d",n1,n2);

   switch(iOp)
   {
      case Add:
      iOput=n1+n2;
      
      case Sub:
      iOput=n1-n2;

      default:
      printf("Invalid opertor");
   }
   return iOput;
}

int main()
{
   int iChoice = 0;

   printf("Enter the operation you want to perform\n");
   printf("1.Add\t2.Minus\t3.Multiply\n");
   
   printf("Enter choice of operation\n")
   scanf("%d",&iChoice)

   int iAns;
   iAns=F_calc(iChoice);
   
   return 0;
}*/

//write a program which prints table of given no using Do while loop
// A;lgorithm    Start Declare accept do-while loop print table End
#include<stdio.h>
int main()
{
   int iNum = 0;

   printf("Enter the number\n");
   scanf("%d",&iNum);

   int iCnt=1;
   while(iCnt<=10)
   {
      printf("%d\n",iNum*iCnt);
      iCnt++;
   }
   
   return 0;
}
  