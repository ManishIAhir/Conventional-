/*/Write a progrm to print cube of given number
#include<stdio.h>
int main()
{  
    int Input = 0;

    printf("Enter the number\n");
    scanf("%d",&Input);

    printf("Cube of %d=%d",Input,Input*Input*Input);

    return 0;
}*//*
#include <stdio.h>  
int main()  
{  
 int k;   // variable declaration   
 for(int k=0;k<=255;k++)  // for loop from 0-255  
 {  
     printf("\nThe ascii value of %c is %d", k,k);  
 }  
return 0;  
}*/ 
//write a program which performes addition of all ascii values of letters in string 
/*
algorithm
String declaration 
accept
Variables decl
while loop
print sum
*/
#include<stdio.h>
int main()
{   
    char cName[20];
    int iSum = 0;
    
    printf("Enter the string\n");
    scanf("%s",cName);

    int iCnt = 0;
    while(cName[iCnt]=='\0')
    {   
        printf("Ascii value of %c is %d",cName[iCnt],cName[iCnt]);
        iSum=iSum+cName[iCnt];
        iCnt++;
    }
    printf("sum of the ascii value of string is:%d",iSum);
    return 0;
}