#include<stdio.h>

int main()
{
    int no1, no2, ans;

    printf("Enter the first number");
    scanf("%d",&no1);

    printf("Enter the second number");
    scanf("%d",&no2);

    ans = no1 + no2 ;

    printf("Addition of %d & %d is %d", no1, no2,ans);
    return 0;

}