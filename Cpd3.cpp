#include<iostream>
using namespace std;

class time
{
    private:
    int hh;
    int min;
    int sec;

    public:
    time_t()
    {  cout<<"Inside default constructor";
        hh=0;
        min=0;
        sec=0;
    }
    time(int h,int m,int s)
    {  
       cout<<"Inside parametrized constructor";
       hh=h;
       min=m;
       sec=s;
    }
    void Display_Time()
    {
        cout<<"Inside Display_Time";
    }
    void setSec()
    {
        cout<<"Inside set function";
        
    }
    void getSec()
    {
        cout<<"Inside set function";

    }
    ~time()
    {  
        cout<<"Inside destructor";
    }
};
int main()
{   
    time_t obj1;

    obj1.Display_Time();
    obj1.setSec();
    obj1.getSec();

    return 0;
}