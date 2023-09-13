#include<iostream>
using namespace std;

class person
{
    protected:
    string name;
    int age;
    public:
    person()
    {
        name="Ritesh";
        age=24;
    }
    void print_detsails()
    {
        cout<<"\nname"<<name<<"Age"<<age:
    }
};
class Employee: public person
{
    private:
    int emp_id;
    int sal;
    public:
    Employee()
    {
        emp_id=512;
        sal=67000;
    }
    void print_emp()
    {
        this->print
    }
    void Update_Date(string newName)
    {
        name=newName; 
    }
}
int main()
{
    Employee e1;
    e1.print_emp();

    e1.Update_Date("Ritz");

    cout<<"\n";
    return 0;
}