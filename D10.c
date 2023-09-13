/*
swaping of two numbers using call by adress

Algorithm 

start 
main
swap function declaration
arguement 
performance 
return 
exit

*/
/*
#include<stdio.h>
void swap(int *N1,int *N2)
{
    int Temp = 0;

    Temp = *N1;
    *N1 = *N2;
    *N2 = Temp;
}    
int main()
{
    int iNo1;
    int iNo2;

    printf("Enter both numbers\n");
    scanf("%d\n%d",&iNo1,&iNo2);

    swap(&iNo1,&iNo2);
    printf("%d and %d are",iNo1,iNo2);  
    return 0; 
}
*/


//Write special sum and multiplication function use call by adresss

#include<stdio.h>
void sum_Prod(int N1,int N2,int*sum,int*Prod)
{
    *sum = N1+N2;
    *Prod = N1*N2;
}
int main()
{
    int iNo1,iNo2,iSum,iProd;

    printf("Enter both numbers\n");
    scanf("%d,\n%d\n",&iNo1,&iNo2);

    sum_Prod(iNo1,iNo2,&iSum,&iProd);

    printf("addiition and multiplication%d,%d",iSum,iProd);
    return 0;
}
    


