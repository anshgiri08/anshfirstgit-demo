#include <iostream>
using namespace std;

class Student
{
public:
    int rollNo;
    string name;

    Student()
    {
        rollNo = 1;
        name = "Ansh";
    }
    void display()
    {
        cout << "Roll Number: " << rollNo << endl;
        cout << "Name: " << name << endl;
    }
};

int main()
{
    Student s1;
    s1.display();
    return 0;
}