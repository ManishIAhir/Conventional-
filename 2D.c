#include<stdio.h>

void Diss_Ele(int *p)
{
    int iCnt = 0;
    for(iCnt=0;iCnt<4;iCnt++)
    {
        printf("%d\n",*(p+iCnt));
    }
}
int main()
{   int arr[4]={1,2,3,4};
    
    Diss_Ele(arr);
    /*
    int iCnt=0;
    for(iCnt=0;iCnt<4;iCnt++)
    {
        printf("%d\n",*(p+iCnt));
    }
    */
    return 0;
}