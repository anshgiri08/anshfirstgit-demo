// C++ program for understand constructors 
// parameterized constructor
#include <iostream>
using namespace std;

class Student
{
public:
    int age;
    string name;

    Student(string n, int a)
    {
        name = n;
        age = a;
    }
    
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main()
{
    Student s1("Ansh", 20);
    Student s2("Utkarsh", 21);

    s1.display();
    s2.display();

    return 0;
}
