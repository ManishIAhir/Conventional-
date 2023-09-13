/*
Write a program which accepts Array of 6 elements 
Display elements 

*//*
#include<stdio.h>
#include<stdlib.h>
#define SIZE 6
void Accept_Arr(int *a,int Arr_len)
{
    for(int iCnt=0;iCnt<Arr_len;iCnt++)
    {
        printf("Enter %dth element=\n",iCnt);
        scanf("%d",*(a+iCnt));
    }
}
void Display_Arr(int *a,int Arr_len)
{   
    for(int iCnt=0;iCnt<Arr_len;iCnt++)
    {
       printf("%dth indexed El is %d\n",iCnt,*(a+iCnt));
    }
}    
int main()
{
    int Arr[SIZE];

    int *ptr = NULL;
    ptr=(int*)malloc(SIZE*sizeof(int));
    
    Accept_Arr(Arr,SIZE);
    Display_Arr(Arr,SIZE);

    return 0;


*//*
#include<stdio.h>
#define SIZE 5
void Accept_Arr(int a[],int size)
{   
    int Index=0;
    for(Index=0;Index<size;Index++)
    {
        printf("\na[%d]=",Index);
        scanf("%d",&a[Index]);
    }
}
void Display_Arr(int a[],int size)
{
    int Index=0;
    for(Index=0;Index<size;Index++)
    {
        printf("\na[%d]=%d",Index,a[Index]);
    }
}
void swap(int *n1,int *n2)
{
    int Temp = 0;
    Temp = *n1;
    *n1 = *n2;
    *n2 = Temp;
}
void selection_sort_Asc(int a[],int size)
{
    int i,j,Temp;
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<=size;j++)
        {   
            printf("\n a[%d] %d a[%d] %d", i, a[i], j, a[j]);
            if(a[i]>a[j])
            {
                swap(&a[i],&a[j]);
            }
        }
    }
}
int main()
{
    int Arr[SIZE];

    printf("Entering elements of array...");
    Accept_Arr(Arr,SIZE);

    printf("Displaying elements of Array...\n");
    Display_Arr(Arr,SIZE);

    selection_sort_Asc(Arr,SIZE);
    printf("Elements of array after sorting...");
    Display_Arr(Arr,SIZE);

    return 0;
}*/
/*
#include<stdio.h>
#define SIZE 5                                     //Using typedef for array size
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
        printf("a[%d]=%d",iCnt,a[iCnt]);
    }
}
void swap(int *i,int *j)                     //seperate swap function to swap elements
{
    int Temp =0;
    Temp=*i;
    *i=*j;
    *j=Temp;
}
void selection_sort_desc(int a[],int S)       // slection sort function defination starts here
{
    int i,j;
    for(i=0;i<S;i++)
    {
        for(j=i+1;j<S;j++)
        {
            if(a[i]<a[j])
            {
                swap(&a[i],&a[j]);      // calling swap function and sending Adresses as actual araguement;
            }

        }
    }
}
int main()
{   
    int Arr[SIZE];                         // Array declaration

    printf("Enter elements of array\n"); //storing array elements
    Accept(Arr,SIZE);                    // fun call sending 

    printf("Displaying array elements before sorting...")
    Display(Arr,SIZE);                    //Displaying Input

    selection_sort_desc(Arr,SIZE);        // function sorting in descending order

    printf("Elements in descending order\n");

    Display(Arr,SIZE);                    //Diplsying sorted elements of array

    return 0;
} */
//binary sort
/*
Array declaration
storing elements of array
display array

*/
#include<stdio.h>
#include<stdlib.h>
#define SIZE 7

void acceptArr(int a[],int S)
{
    for(int iCnt=0;iCnt<S;iCnt++)                  //for loop for accepting array elements(Iterative approach)
    {
        printf("a[%d] =",iCnt);
        scanf("%d\n",a[iCnt]);
    }
}
void Display_Arr(int Ar[],int S)
{
    for(int iCnt=0;iCnt<S;iCnt++)                 //for loop for Displaying Array elements
    {
        printf("Ar[%d]=%d",iCnt,Ar[iCnt]);
    }
}
void swap(int *n1,int *n2)
{
    int Temp = 0;
    Temp = *n1;
    *n1 = *n2;
    *n2 = Temp;
}
void selection_sort_Asc(int a[],int size)
{
    int i,j,Temp;
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<=size;j++)
        {   
            printf("\n a[%d] %d a[%d] %d", i, a[i], j, a[j]);
            if(a[i]>a[j])
            {
                swap(&a[i],&a[j]);
            }
        }
    }
}
void  BinarySearch(int A[],int Key,int S)
{   
  
    int iLeft=0;
    int iRight=S-1;
    int iMid=((iLeft+iRight)/2);
    
    /*while(iLeft!=iRight)
    {
        if(Key==A[iMid])
        {
            return -1;
        }else if (key>A[iMid])
        {
            iLeft=iMid;
            iRight=S-1;
        } else
        {
            iLeft=0;
            iRight=iMid;
        } 
    }*/ 
}
int main()
{   
    int Arr[SIZE];
    int iRet = 0;

    printf("Entering elements in array..\n");
    acceptArr(Arr,SIZE);

    printf("displaying Array elements that stored...\n");
    Display_Arr(Arr,SIZE);
    
    selection_sort_Asc(Arr,SIZE);
    printf("Displaying Array in ascending order...\n");
    Display_Arr(Arr,SIZE);

    int iKey = 0;
    printf("Enter the key we want to search..\n");
    scanf("%d",&iKey);
    
    BinarySearch(Arr,iKey,SIZE);
     
    return 0;
}