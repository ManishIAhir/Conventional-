/*
declare reference 

#include<iostream>
using namespace std;

int main()
{   
    int iNum=5;
    int& ref=iNum;

    cout<<"value of Inum"<<iNum<<"Adress of iNum"<<&iNum;

    ref=10;
    cout<<"value of ref"<<ref<<"Adress of iNum"<<&ref;

    return 0;
}*/
/*
Swap by using call by reference

#include<iostream>
using namespace std;

void swap(int& refa,int& refb)
{
    int t = refa;
    refa=refb;
    refb=t;
}
int main()
{
    int a = 10;
    int b = 20;

    cout<<"Value of a before"<<a<<"Value of b before"<<b;
    cout<<"\n";
    swap(a,b);
    cout<<"Value of a After\n"<<a<<"Value of b After\n"<<b;

    return 0;
}*//*
complex class copy constructor implementation

#include<iostream>
using namespace std;

class complex_Num
{
   private:
   int iReal;
   int iImage;

   public:
   complex_Num(int r=0,int i=0)
   {
     cout<<"\nInside parametrised constructor\n"<<endl;
     iReal=r;
     iImage=i;
     cout<<"\nValue of iReal"<<iReal<<"\nValue of iImage"<<iImage;
   }
   //copy constructor
   complex_Num(const complex_Num& obj2)
   {
     
   }
   printComplex()
   {
     cout<<"Complex number:"<<iReal<<"+j"<<iImage;
   }
};
int main()
{
    complex_Num obj1(5,6);
    obj1.printComplex();
    
    complex_Num obj2(obj1);

    return 0;
}*/
//operator overloading

#include<iostream>
using namespace std;

class complex 
{   
  private:
    int iReal;
    int iImag;
  public:
    complex(int r=0;int i=0)
    {
      iReal=r;
      iImag=i;
    }
  //now defining + to overload operation 
  //+ is used with two complex objects

    complex operator+(Complex const& obj)
    {
      complex res;
      res.iReal= iReal+obj.iReal;
      res.iImage= iImage+obj.iImage;
      return res;
    }
    void print() 
    { 
      cout << real << " + i" << imag << '\n'; 
    }  
};
int main()
{   
  complex C1(10,5);
  complex C2(20,8);

  complex C3;
  C3=C1+C2;
  C3.print();

  return 0;
}