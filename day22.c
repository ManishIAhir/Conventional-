#include<stdio.h>

int main()
{
    char ch1, ch2, ans;

    printf("Enter the first characher\n");
    scanf("%c",&ch1);

    printf("Enter the second characher\n");
    scanf("%*c%c",&ch2);

    ans = ch1+ ch2;

    printf("addition of %c & %c is %d", ch1 , ch2, ans);
    printf("\n %d + %d =%d", ch1, ch2,ans );


    return 0;
}