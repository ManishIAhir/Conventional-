/*#include<stdio.h>
int main()
{
    struct Emp
    {
        int iE_no;
        char Name[20];
        int iSal_ry;
    }
    struct Emp e1,e2;
   
    e1.iE_no=100;
    e1.Name="tejas";
    e1.iSal_ry=10000;
    
}*//*
#include<stdio.h>

struct time
{
   int hh;
   int min;
   int sec;
};
void acceptTime(struct time *T1)
{  
   printf("Enter time in hh-min-sec\n");
   scanf("%d%*c,%d%*c,%d%*c",&T1->hh,&T1->min,&T1->sec);
}
void Display_Time(struct time *T1)
{
    printf("Time:-%d,%d,%d",T1->hh,T1->min,T1->sec);
}
int main()
{
    struct time T1;
    acceptTime(&T1);
    Display_Time(&T1);
    return 0;
}*/
#include<stdio.h>
struct Student_info
{
    char M_name;
    int M_Roll_No;
};
void Accept(struct Student_info*p)
{  
    printf("Enter name and Roll no:-\n");
   scanf("%s,%d"&p->M_name,&p->M_Roll_No);
}
void Display(struct Student_info*p)
{
    printf("Name:-%sRoll_no:-%d\t",p->M_name,p->M_Roll_No);
}
int main()
{   
    struct Student_info Sr1;

    void Accept(&Sr1);
    void Display(&Sr1);

    return 0;
}

