/*
Declare structure named student
containing roll no
           name
           marks 
*/

#include<stdio.h>
struct stdnt
    {   
       int iRoll;
       //char CName[20];
       float iScore;
    };
int main()
{
    
    struct stdnt s1;
    s1.iRoll=1;
    //s1.CName = "Rahul";
    s1.iScore=75.5;

    /printf("Roll no of s1 is %d",s1.iRoll);
    // printf("Roll no of s1 is %s",s1.CName);
     ///printf("Roll no of s1 is %f",s1.iScore);
    return 0;
}