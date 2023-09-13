/*
Take input of marks of 6 subjects print marks.
And display marks along with average.
Algorithm 
start
array declaration 
storing marks 
sumation of marks
display marks 
display average
*//*
#include<stdio.h>
int main()
{
    int Marks[6];
    int sum =0;
    double avg;

    for(int iCnt=0;iCnt<=6;iCnt++)
    {
        scanf("%d",&Marks[iCnt]);
    }
    for(int iCnt=0;iCnt<=6;iCnt++)
    {
        sum = sum + Marks[0];
    }
    for(int iCnt=0;iCnt<=6;iCnt++)
    {
        printf("Elements of array are %d",Marks[0]);
    }   
    avg = (sum/6);

    printf("Average of all subjects is %if",avg);
    return 0;
}
*//*
#include<stdio.h>
int main()
{   double arr[5]={1.1,2.2,3.3,4.4,5.5};
    double *ptr = NULL;

    ptr=&arr[0];

    printf("%if\n",*ptr);
    printf("%if",*(ptr+1));
    printf("%if",(*ptr+1));

    return 0;
}*/
#include<stdio.h>
int main()
{
    int Arr[5]={1,2,3,4,5};
    int *ptr = NULL;
    ptr=&Arr;
    printf("%u\n,%u\n,%d\n",&Arr,Arr,*(ptr+1));
    return 0;
}