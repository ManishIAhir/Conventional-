/*#include<stdio.h>
int main()
{
    char c;

    printf("Enter the characher c");
    scanf("%c",&c);

    if(c<=65 && c<=90)
    {
        printf("%c is a capital letter",c);
    }
    else if(c>=97&&c<=122)
    {
       printf("%c is a small letter",c); 
    }
    else(c<=57&&c>=48)
    {
        printf("%c is a digit",c);
    }
    return 0;

}
*/
/*
Problem Write the program which prints prime numbers from 1 to 100

Algortithm 
accept
pass argument 
write logic of business function 
End
*//*
  #include<stdio.h>
  int main()
  {
    int iQty = 0;
    int iBill = 0;
    int iDisc_Bill =0;

    printf("Enter the Quantity\n");
    scanf("%d",&iQty);

    switch (iQty!=0)
    {
        case1:
           if(iQty<30)
           {
             iBill=5*iQty;
             iDisc_Bill= iBill*0.10;
             printf("Discounted bill is %d",iDisc_Bill);
           }
        case2:
        if(iQty<50)
           {
             iBill=5*iQty;
             iDisc_Bill= iBill*0.15;
             printf("Discounted bill is %d",iDisc_Bill);
           }

    }
    return 0;
  }

  #include<stdio.h>

  int main()
  {
    int c_o1=0;
    int c_o2=0;

    printf("Enter the Co-ordinates\n");
    scanf("%d\n%d\n",c_o1,c_o2);

    if(c_o1<0&&c_o2<0)
    {
        printf("point lies in first quadrant");
    }
    else(c_o1>0&&c_o2<0)
    {
        printf("point lies in second quadrant");

    }
    return 0;
  }*//*
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int size = 0;
    
    int *Arr = NULL;

    printf("Enter the size of array\n");
    scanf("%d",&size);
    int ar[size];

    Arr = (int *)malloc(sizeof(int) * size);
  

    for(int iCnt=0;iCnt<size;iCnt++)
    {
      scanf("%d",&*(ar+iCnt);
      printf("%d",*(ar+iCnt));
    }    
    free(Arr);

    return 0;
}*/
//
/* Infinite loops 
#include<stdio.h>
int main()
{
  for(;;)
  {
     printf("Manieee\n");
     break;
  }
  return 0;
}
#include<stdio.h>
int main()
{
  int i = 0;
  while(1)
  {
    printf("%d\n",i);
    i++;
  }
}*/// Factorial code using recursive approach
/*
#include<stdio.h>
int fact_fun(int iNo)
{
  if(iNo==0)
  {
    return 0;
  }
  else if (iNo==1)
  {
    return 1;
  }
  else
  {
    return iNo*fact_fun(iNo-1);
  } 
}
int main()
{
  int iNum = 0;
  int iRet = 0;

  printf("Enter the number whose factorial\n");
  scanf("%d",&iNum);
  
  iRet=fact_fun(iNum);
  printf("Factorial of %d is %d",iNum,iRet);
  
  return 0;
}*//*
//Traversing 2d array
#include<stdio.h>
int main()
{ 
  int i = 0;
  int j = 0; 
  int Arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};

  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      printf("Arr[%d][%d]=%d\n",i,j,Arr[i][j]);
    }
  }
  return 0;
}*/
//returning array using malloc function 
/*Algorithm Start - array declaration - malloc - accept fun - display fun - free - End
#include<stdio.h>
int Accept()
int main()
{  
  int InUm[]
   return 0;
}
*/
#include<stdio.h>  
 int main(){    
   printf("File :%s\n", __FILE__ );    
   printf("Date :%s\n", __DATE__ );    
   printf("Time :%s\n", __TIME__ );    
   printf("Line :%d\n", __LINE__ );    
   printf("STDC :%d\n", __STDC__ );      
   return 0;  
 }    
