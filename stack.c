/*
Algorithm
1->header inclusion->typedef MAX 5->Array declaration->Top element declaration->
init stack()   //fun to initialize stack all stack elements get -1 value
print stack()  //print all dataa currently stored in stack
void push(Arg)  //function to push data in stack
void pop()       // fun to delete last data element from stack

void peek()      //fun to see topmost data element from stack
int is_full()    //To check if stack is full or empty
int is_empty()

int menu_choice()   function called to give menu to user for choice of operation wnt to perform on data

int main(void) // Entry point function





*/

#include<stdio.h>

#define MAX 5   //typedef
int Arr[MAX];   //Array declaration

int top;

void init_stack();
void print_stack();
void push();
void pop();
void peek();
int is_full();
int is_empty();
int menu_choice();

void init_stack()
{
    top = -1;
    for(int iCnt=0;iCnt<MAX;iCnt++)
    {
        Arr[iCnt]=-1;
    }
    return;
}
void print_stack()
{
    int iCnt = 0;
    for(iCnt=MAX-1;iCnt>=0;iCnt--)
    {
        printf("\n%d :- Arr[%d]",Arr[iCnt],iCnt);
    }
    printf("\n top=%d",Arr[top]);
}
void push(int value)
{
    top++;
    Arr[top]=value; //value assigned to topmost position of stack
    return;
}
void pop()
{
   Arr[top]=-1;
   top=top-1;
   return;
}
void peek()
{
    int value= Arr[top];
    printf("current topmost value of stack is %d",Arr[top]);
}
int is_full()
{
    if (top=MAX-1)
    {
       return 1;
    }
    else
    {
        return 0;
    }
}
int is_empty()
{
    if(top==-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int menu_choice()
{
    int choice;
    printf("\n1.Push 2.Pop 3.Peek 4.Print stack\n 0.Exit");
    printf("\nEnter the choice ::");
    scanf("%d",&choice);
    return choice;
}
int main()
{
    int choice=0;
    int data;
    init_stack();
    print_stack();

    do
    {
        choice=menu_choice();
        switch(choice)
        {
        case 1://push data
        if(!is_full())
        {
            printf("\nEnter data\n");
            scanf("%d",&data);
            push(data);
        }
        break;

        case 2://pop from stack
        if(!is_empty())
        {
            peek();
            pop();
            printf("\n pop=%d",data);
        }
        else
        {
            printf("\nstack is empty");
        }
        break;
        case 3://peek from stack
        if(!is_empty())
        {
            peek();
            printf("\n peek =%d",data);
        }
        else
        {
            printf("\nstack is empty\n");
        }break;
        case 4:
        print_stack();
        break;

        default:
            printf("\nInvalid case");
            break;
        }  
    }while (choice!=0);
    return 0;
}


