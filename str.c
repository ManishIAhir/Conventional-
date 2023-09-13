/*
write a program which accepts string and traversing it and count number of vowels in it
*/
/*
#include<stdio.h>
#include<string.h>
int main()
{  char Name[7]="Manish";
   int iCnt = 0;
   int i = 0;

   while(i<=7)
   {
    if(Name[i]=='a'||Name[i]=='i'||Name[i]=='o'||Name[i]=='e')
    {
        iCnt++;
    }
    i++;
   }
   printf("Number of vowels in string are%d",iCnt);  
   return 0;
}*//*
#include<stdio.h>
#include<string.h>
int main()
{   char s[20];
    printf("Enter the string\n");
    scanf("%s",s);
    printf("Entered string is%s\n",s);
    return 0;
}*//* 
Write a program which declares strings in both aproache
print the each character and traverse it by using loop
*//*
#include<stdio.h>
int main()
{   
    int i;
    char arr[]={'m','a','n','i','s','h','\0'};
    char str[] = "Manish";

    //pritning the size of both strings
    printf("Size of arr:-%d",sizeof(arr));
    printf("Size of str:-%d",sizeof(str));

    //string input methods 
    char str[100];
    scanf("%s",str);     //accepting string using %s format specifier.
    scanf("%[^\n]s",str); // Accepting string using [^\n] with spaces.
    scanf(%[a-z A-Z],str); // accepting all character in between and spaces.
    get(str);               // Accepting strings using get() library function in string.h header file.

    //Traversing both strings 
    for(i=0;arr[i]!='\0';i++)
    {
        printf("%c",arr[i]);
    }
     for(i=0;str[i]!='\0';i++)
    {
        putchar(str[i]);
    }
    return 0;
}
*/
//Passing string to function 
/*
declare string
Accept string from user 
pass it to businesss function
perform operation on it
*//*
#include<stdio.h>
#include<string.h>
void str_Op(char a[])
{   
    int iCnt=0;
    for(iCnt=0;a[iCnt]!='\0';iCnt++)
    {
    if(a[iCnt]=='a'||a[iCnt]=='i')
    {
        printf("vowels in string are\n");
        printf("%c\n",a[iCnt]);
    }
    }
}
int main()
{   char str[50];
    
    printf("Enter the string\n");
    scanf("%s",str);

    str_Op(str);
    return 0;
}*/
/*
Declare character array and use putchar function to display all elements of array

#include<stdio.h>
int main()
{
    char arr[]={'M','A','N','i','S','H','\0'};
    int i = 7;
    for(i=0;i<7;i++)
    {
        putchar(arr[i]);
    }
    printf("\n");
    i=0;
    while(arr[i]!='\0')
    {
        putchar(arr[i]);
        i++;
    }
    return 0;
}*/
/*Write a program which accept string using string lateral
#include<stdio.h>
int main()
{   
    char str[]="Manish";
    printf("%s\n",str);
    
    char st[64];
    printf("Enter the string\n");
    scanf("%s",st);
    printf("%s\n",st);

    return 0;
}*//*
//Pass string to function and print capital and samll letters 
//Algorithm start-declare string- pass to function nd print capital and small letters from it
#include<stdio.h>
char printChar(char str[])
{   int i=0;
    for(i=0;str[i]!='\0';i++)
    {   
        if(str[i]=='A'-'Z')
        {
            printf("Capital letters in string are\n");
            printf("%c\n",str[i]);
        }
        else
        {
            printf("Small case letters in string are\n");
            printf("%c\n",str[i]);  
        }
    
    }   
}
int main()
{   
    char string[64];
    char iRet='\0';

    printf("Enter String\n");
    scanf("%s",string);
    
    printChar(string);
    return 0;
}*//*
#include<stdio.h>
void StrManupulation(char *s)
{
    int i=0;
    while (*(s+i)!='\0')
    {
      printf("%c\n",*(s+i));
      i++; 
    }   
}
int main()
{
    char str[64];

    printf("Enter String\n");
    scanf("%s",str);

    StrManupulation(str);
    return 0;
}*/
