#include <iostream>
using namespace std;

class student
{
public:
    string name = "ANSH";
    int age = 19;

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};
int main()
{
    student s1;
    s1.display();
    return 0;
}