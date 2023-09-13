/*
Write program which accepts marks of 5 subject and find average

algorithm
declare Array
Input elements 
perform sum and find average.
*//*
#include<stdio.h>

int Accept_Marks(int a[])
{
    int iCnt = 0;
    for(iCnt=0;iCnt<=5;iCnt++)
    {
        scanf("%d",a[iCnt]);
    }
}
int Avg_Array(int a[])
{
   int iCnt = 0;
   int iSum = 0;
   for(iCnt=0;iCnt<=5;iCnt++)
   {
       iSum = iSum+a[iCnt];
   }
   return(iSum/5);
}
int main()
{
    int Marks[5];
    float avg = 0.00f;

    printf("Enter marks of 5 subjects:\n");
    Accept_Marks(Marks);

    avg = Avg_Array(Marks);
    printf("average of 5 subjects is %f",avg);
    
    return 0;
}
*//*
Write a program which reverse array elements 
Algorithm
start
declare array
accept array function
reverse array function
print reverse elements

Intput array elements 10, 20, 30, 40, 50.
Output ;- Reverse array eleemts are 50,40,300,20,10.
*//*
#include<stdio.h>
void accept(int A[],int iIndex)
{
    int iCnt=0;
    for(iCnt=0;iCnt<iIndex;iCnt++)
    {
        scanf("%d",&A[iCnt]);
    }
}

int reverse_Arr(int arr[],int iInd)
{
    int icnt =0;
    int irev =0;
    for(icnt=(iInd-1);icnt<iInd;icnt--)
    {
       irev = arr[icnt];
    }
    return irev;
}
int main()
{  
    int iSize = 0;
    int iRev_El=0;

    printf("Enter the size of array\n");
    scanf("%d",&iSize);

    int Arr[iSize];

    printf("Enter the elements of array\n");
    accept(Arr,iSize);

    iRev_El=reverse_Arr(Arr,iSize);
    printf("reverse elements of array are %d\n",iRev_El);

    return 0;
}*//*
write a program to find max element of array;
algorithm 
declare array 
accept elements
write special function to find max of array 

#include<stdio.h>
void accept(int A[],int iIndex)
{
    int iCnt=0;
    for(iCnt=0;iCnt<iIndex;iCnt++)
    {
        scanf("%d\n",A[iCnt]);
    }
}
int Array_Max(int A[],int iIndex)
{
    int iCnt = 0;
    int A_Max = 0;
    for(iCnt=0;iCnt<iIndex;iCnt++)
    {
        if(A[iCnt]>A_Max)
        {
            A_Max=A[iCnt];
        } 
    }
    return A_Max;
}
int Array_Min(int A[],int iIndex)
{
    int iCnt = 0;
    int A_Min = 0;
    for(iCnt=0;iCnt<iIndex;iCnt++)
    {
        if(A[iCnt]<A_Min)
        {
            A_Min=A[iCnt];
        } 
    }
    return A_Min;
}
int main()
{  
    int iSize = 0;
    int iMax = 0;
    int iMin = 0;

    printf("Enter the size of array\n");
    scanf("%d",&iSize);

    int Arr[iSize];

    printf("Enter the elements of array\n");
    accept(Arr,iSize);
    
    iMax=Array_Max(Arr,iSize);
    printf("Maximun element of array is %d\n",iMax);

    iMin=Array_Min(Arr,iSize);
    printf("Minimum element of array is %d\n",iMin);

    return 0;
}/*
write the program which accepts elemets of array and search required elememt and print it on screen

algorithm
aceeept elements ;
write Sort function


*/
/*
#include<stdio.h>

void accept_Arr(a[],int iInd)
{
    int iCnt=0;
    for(iCnt=0;iCnt<iIndex;iCnt++)
    {
        scanf("%d\n",A[iCnt]);
    }
}
int Arr_sort(int A[],int iInd,int sort)
{   
    int Result=0;
    for(int iCnt=0;iCnt<iInd;iCnt);
    {
        if(sort==A[iCnt])
        {
            Result=1;
        }
        else
        {
            Result=-1;
        }
    }
    return result;
}
int main()
{   int iSize = 0;
    
    printf("Enter elements of array\n");
    scanf("%d",&iSize);

    int Arr[];
    accept_Arr(Arr,iSize);

    int Sort_El=0;
    printf("Enter the elemet which should be sorted\n");
    scanf("%d",&Sort_El);

    int Res = Arr_sort(Arr,iSize,Sort_El)
    
    if(Res==1)
    {
        Printf("Given element is present in array\n");
    }
    else
    {
        Printf("Given element is not present in array\n");
    }
    return 0;
}*/
/*
Write a program which accepts array elements and sort particular element aand return adress of that elemnt otherwise print -1

Algorithm
Accept array 
write sorting d=function 
return adress 
acccept adresss
print
end

#include<stdio.h>
int ret = -1;
void accept_Arr(a[],int iInd)
{
    int iCnt=0;
    for(iCnt=0;iCnt<iIndex;iCnt++)
    {
        scanf("%d\n",A[iCnt]);
    }
}
int Arr_sort(int A[],int iInd,int sort)
{   
    int *Result=NULL;
    for(int iCnt=0;iCnt<iInd;iCnt);
    {
        if(sort==A[iCnt])
        {
            Result=&A[iCnt]
        }
        else
        {
            Result=&ret;
        }
    }
    return Result;
}
int main()
{   int iSize = 0;
    
    printf("Enter elements of array\n");
    scanf("%d",&iSize);

    int Arr[];
    accept_Arr(Arr,iSize);

    int Sort_El=0;
    printf("Enter the elemet which should be sorted\n");
    scanf("%d",&Sort_El);

    int *Res = Arr_sort(Arr,iSize,Sort_El)
    printf("sorted element is"):
    
    return 0;
}   */ /*
#include<stdio.h>
int main()
{
    int a[]={1,2,3};
    printf("%d\n",a);
    ++a;
    printf("%d\n",a);
    
    printf("%d",a[2]);
    return 0;
}*/
#include<stdio.h>
void f(int a[])
{
    ++a;
    printf("%d",a);
    printf("-----------------------");
    printf("%d",a[-1]);   
}
int main()
{
    int a[]={1,2,3};
    printf("%p\n",a);
    printf("-----------------------");
    printf("%d\n",a[2]);
    
    f(a);
    return 0;
}   