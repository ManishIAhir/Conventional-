/* 
check whether number id is even or odd usinfg trinery operator.

algorithm
 start 
 accept 
 use trinery operator 
 print results 
 end

*/

#include<stdio.h>
int main()
{
    int No1 = 0;
    
    printf("Enter the number =\n");
    scanf("%d",&No1);

    No1%2==0? printf("%d is even number",No1):printf("%d is odd number",No1);

    return 0;
}