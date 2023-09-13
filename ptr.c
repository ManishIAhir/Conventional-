/*
#include<stdio.h>
int main()
{
    int a;
    a = 10;
    printf("a=%d\n%u\n",a,&a);

    int *p=NULL;
    p=&a;

    printf("p=%u\n&p=%u\n%d\n",p,&p,*p);

    return 0;
}*/
//Write a prograam which accepts two numbers and perform their multiplication and sum in seperate function
/*
#include<stdio.h>
void Sum_Prod(int iN1,int iN2,int *Sum,int *prod)
{  
    *Sum = iN1+iN2;
    *prod = iN1*iN2;
}
int main()
{   
    int iNum1,iNum2;
    
    printf("Enter the numbers\n");
    scanf("%d",&iNum1);
    scanf("%d",&iNum2);
    
    int iSum=0;
    int iProd=0;

    Sum_Prod(iNum1,iNum2,&iSum,&iProd);
    printf("Sim is %d,Mult is %d",iSum,iProd);
    return 0;
}*/
#include<stdio.h>
int main()
{ 
    int a = 10;
    int b = 20;

    //int *ptr;
    //ptr = &a;

    int *ptr=&a;
    
    int *q;
    q=&b;

    printf("value at %d",*q);
    printf("\nAdress strored in ptr=%u",&b);

    //long int Adress;
    //Adress=&a;

    return 0;
}