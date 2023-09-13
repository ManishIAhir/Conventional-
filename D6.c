/*
write a simple calculartor code using 
menu driven way

*/
#include<stdio.h>
int main()
{
    enum menu_operators
    {
        Exit, Add, Minus, Multiply, Divide
    };
    
    int no1 =0;
    int no2 =0;
    int Ans =0;
    enum menu_operations choice;


    do
    {
        printf("Enter no1 =");
        scanf("%d",&no1);

        printf("Enter no2 =");
        scanf("%d",&no2);

        printf("Enter the choice\n");
        printf(" 1.Add\t2.minus\t3.multi\t4.Divide");

        printf("Enter choice\n");
        scanf("%d",&choice);

        switch (choice!=0)
        {
          case1: Ans = no1 +no2;
                break;
          case2: Ans = no1-no2;
                break;
          case3: Ans = no1*no2;
                break;
          case4: Ans = no1/no2;
                break;      
        
        default:printf("inValid choice\n");
            break;
        }

         printf("answer of given output is%d",Ans);
         printf("Enter 1 to continue 0 to exit\n");
         scanf("%d",&choice);


    }while (choice!=0);
    return 0;
}