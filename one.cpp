#include <iostream>
using namespace std;

class student
{
public:
    string name = "ANSH";
    int num = 2;
    int age = 19;
    int rollNo = 12;

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Number: " << num << endl;
        cout << "Age: " << age << endl;
    }
};
int main()
{
    student s1;
    s1.display();
    return 0;
}