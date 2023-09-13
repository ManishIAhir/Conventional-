#include<stdio.h>
using namespace std;

class shape
{  
   public:
   virtual void input()=0;
   virtual void cal_Area()=0;
};
class rect:public shape
{
    int iLength;
    int iBredth;

    public:
    void input()
    {
        cout<<"\nEnter lenght and breadth";
        cin>>iLength>>iBredth;
    }
    void cal_Area()
    {
        int iArea=iLength*iBredth;
        cout<<"Area of rectangle:"<<iArea;
    }
};
class circle:public rect
{
    int iRad;

};
int main()
{   
    


    return 0;
}