/*
linear search 

Algorithm
start 
main
array declaration
Accept
Display


*//*
#include<stdio.h>
#define SIZE 5

void Accept(int a[],int S)
{
    for(int iCnt=0;iCnt<S;iCnt++)                  //for loop for accepting array elements(Iterative approach)
    {
        printf("a[%d] =",iCnt);
        scanf("%d\n",a[iCnt]);
    }
}
void Display(int a[],int S)
{
    for(int iCnt=0;iCnt<S;iCnt++)                 //ffor loop for Displaying Array elements
    {
        printf("a[%d]=%d\n",iCnt,a[iCnt]);
    }
}
void Linear_Search(int A[];int Size,int iFou)
{   
    int iCnt = 0;
    for(iCnt=0;iCnt<Size;iCnt++)
    {
        if(A[iCnt]==iFou)
        {
            return iCnt;
        }
        else
        {
            return -1;
        }
    }
}
int main()
{   
    int Arr[SIZE];                         // Array declaration
    int iAns = 0;
    printf("Enter elements of array\n"); //storing array elements
    Accept(Arr,SIZE);                    // fun call sending 

    printf("Displaying array elements ...")
    Display(Arr,SIZE); 

    int iReq = 0;
    printf("Enter the element want to search");
    scanf("%d",&iReq);
    
    iAns=Linear_Search(Arr,SIZE,iReq);
    
    if(iAns==-1)
    {
      printf("%d is not there in array\n",iReq);
    }
    else
    {
      printf("Output is %dth element of array",iAns);
    }

    return 0;
}*/