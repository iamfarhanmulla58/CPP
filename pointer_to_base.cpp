#include<iostream>
using namespace std;
class Student
{
    public:
    int roll_no;
    char name;
    void info()
    {
       cout<<"Enter roll noumber:";
       cin>>roll_no;
       cout<<"Enter name:";
       cin>>name;
       cout<<"Roll No:"<<roll_no<<endl;
       cout<<"Name:"<<name<<endl;
    }
};
class College:public Student
{
    void info()
    {
        cout<<"Student Information"<<endl;
    }
};
int main()
{
    Student *s;
    College c;
    s=&c;
    s->info();
    return 0;
}