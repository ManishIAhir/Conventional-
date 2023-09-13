/*#include<stdio.h>
class time
{   
  private:
  int hh;
  int min;
  int sec;

  public:
  void printTime()
  {
    printf("\n time=%d:%d:%d",this->hh,this->min,this->sec)
  } 
  void acceptTime()
  {
    printf("\n enter time");
    scanf("%d%d%d",&this->hr,&this->min,&this->sec);
  } 
};

int main()
{   
  time tObj;
  tObj.acceptTime();
  tObj.printTime();
   
  return 0;
}
Q1: create TDate class having data member day ,month , year
and following functions

TDate();
TDate(int day,int month,int year);
AcceptDate();
PrintDate_dd-mm-yyyy();    //Ex = 2-5-2022
PrintDate_dd-month-yyyy(); //Ex = 2-May-2022
bool ValidateDate();



Q2: Write a class complex.  
Data member - real and imaginary
add member function as Parameterless constructor , Parameterized constructor , accept complex number and print complex number.
*//*

#include<stdio.h>

class tDate
{
private:
  int DD;
  int MM;
  int YY;

public:
  tDate()
  {
    printf("Inside parametrised constructor\n");
    DD=0;
    MM=0;
    YY=0;
    printf("\nDate:-%d/%d/%d\n",this->DD,this->MM,this->YY);
    printf("---------------------------------\n");
  }
  tDate(int D,int M,int Y)
  {
    printf("Inside parametrised constructor\n");
    DD=D;
    MM=M;
    YY=Y;
    printf("\nDate:-%d/%d/%d\n",this->DD,this->MM,this->YY);
    printf("---------------------------------\n");
  }
  
  void AcceptDate()
  {
    printf("Enter date of birth\n");
    scanf("%d%*c,%d%*c,%d%*c",&DD,&MM,&YY);
    printf("\nDate:-%d/%d/%d\n",this->DD,this->MM,this->YY);
    printf("---------------------------------\n");
  }
  void PrintDate_dd_mm_yyyy()
  {
     printf("\nDate:-%d-%d-%d",DD,MM,YY);
     printf("---------------------------------\n");
  }
};
int main()
{ 
  tDate dObj;
  tDate dobj(1,6,2023);
  printf("---------------------------------\n");
  tDate d3Obj;
  d3Obj.AcceptDate();
  printf("---------------------------------\n");
  tDate d4Obj;
  d4Obj.PrintDate_dd_mm_yyyy();
  printf("---------------------------------\n");
  //int dObj.DD = 01;
  //int dObj.MM = 06;
  //int dObj.YY =2023;
   return 0;
}*/
//Design time class with 2 methods 2 consturctors and destructor;
/*
#include<iostream>
using namespace std;
class time
{
  private:
  int hh;
  int min;
  int sec;

  public:
  time()
  { cout<<"\nInside default constructor\n";
    hh=0;
    min=0;
    sec=0;
  }
  time(int h,int m,int s)
  {  cout<<"Inside default constructor\n";
     hh=h;
     min=m;
     sec=s;
  }
  ~time()
  {
    cout<<"Inside destructor\n";
  }
  void printTime()
  {
    cout<<"Inside printtime method\n";
    cout<<"hh"<<this->hh<<"\nmin"<<this->min<<"\nsec"<<this->sec;
  }
  void acceptTime(int h,int m,int s)
  {
    cout<<"\nInside Accept time method\n";
    this->hh=h;
    this->min=m;
    this->sec=s;
    cout<<"hh->"<<hh<<"min->"<<min<<"sec->"<<sec;
  }
};
int main()
{
  time obj1;
  time obj2(11,23,25);

  time obj3;
  obj3.printTime();

  time obj4;
  obj4.acceptTime(12,53,60);

  return 0;
}*/
