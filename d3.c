
//write the program which gives decimal number from user and convert it into hexa and octal number

#include<stdio.h>

int main()
{  
    int iNo = 0;
    
    printf("Enter the number to convert\n");
    scanf("%d(Decimal)",&iNo);

    printf("\niNo=%x(o\n",iNo);
    printf("\niNo=%o\n",iNo);

    return 0;
}