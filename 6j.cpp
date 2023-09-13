/*#include<iostream>
using namespace std;

class sun_Beam
{
    int iRoll;
    char cNAme[10];
    float iScore;
    
    public:
    sun_Beam()
    {  
        cout<<"Constructor\n";
    }
    fill_Details()
    {
        cout<<"Enter roll no =";
        cin>>iRoll;

        cout<<"Enter name of student:\n ";
        for(int i=0;'\0'!=cNAme[10];i++)
        {
            cin>>cNAme[i];
        }
        cout<<"Enter score of student \n";
        cin>>iScore;
    }
    give_details()
    {
        cout<<"Roll no:"<<iRoll;
        cout<<"Name:-"<<cNAme;
        cout<<"score:-"<<iScore;
    }
    ~sun_Beam()
    {   
         cout<<"Destructor\n";
    
    }
};
int main()
{
    sun_Beam obj1;
    obj1.fill_Details();
    obj1.give_details();

    return 0;
}*//*
Question 1: create TDate class having data members day ,month , year and following functions

	AcceptDate();
	PrintDate();

#include<iostream>
using namespace std;

class date
{
   private: 
     int dd;
     int mm;
     int yy;

   public:
    AcceptDate()
    {
        cout<<"Enter day\n";
        cin>>dd;
        cout<<"Enter month\n";
        cin>>mm;
        cout<<"Enter year\n";
        cin>>yy;
    }  
    PrintDate()
    {
        cout<<dd<<"-"<<mm<<"-"<<yy;
    } 

    ~date()
    {
        cout<<"\nde-allocated...Successfully\n";
    }
};
int main()
{ 
    date dObj1;
    dObj1.AcceptDate();
    dObj1.PrintDate();

    return 0;
}
/*
Create a class Person having  data member as name , age , date_of_birth and following functions.

	AcceptPersonData();
	PrintPersonData();
//*
#include<iostream>
using namespace std;

class date
{
   private: 
     int dd;
     int mm;
     int yy;

   public:
    AcceptDate()
    {
        cout<<"Enter day\n";
        cin>>dd;
        cout<<"Enter month\n";
        cin>>mm;
        cout<<"Enter year\n";
        cin>>yy;
    }  
    PrintDate()
    {
        cout<<"\n"<<dd<<"-"<<mm<<"-"<<yy;
    } 
};
class Person
{   
    private:
    char cName[12];
    int age;
    date d_o_b;

    public:
    AcceptPersonData()
    {
        cout<<"Enter name of person:\n";

        //for(int i=0;cName[i]!='\0';i++)
        //{
            cin>>cName;
        //}
        cout<<"Enter age\n";
        cin>>age;

        cout<<"Enter date of birth\n";
        d_o_b.AcceptDate();  
    }
	PrintPersonData()
    {
        cout<<"Name:"<<cName;
        cout<<"\nAge:"<<age;
        cout<<"\nD-O-B:";
        d_o_b.PrintDate();
    }
    ~Person()
    {
        cout<<"\nresorces de-Allocated\n";
    }
};
int main()
{   
    Person n_Obj1;
    n_Obj1.AcceptPersonData();
    n_Obj1.PrintPersonData();

    return 0;
}*/
