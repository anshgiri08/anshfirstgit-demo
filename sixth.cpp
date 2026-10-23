// Inheritance example in C++
// types of inheritance
// 1. Single Inheritance
// 2. Multiple Inheritance
// 3. Multilevel Inheritance
// 4. Hierarchical Inheritance
// 5. Hybrid Inheritance
#include <iostream> 

class Base {
public:
    void display() {
        std::cout << "myself Ansh and this is a base class" << std::endl;
    }
};

class Derived : public Base {
public:
    void show() {
        std::cout << "myself Ansh and this is a derived class" << std::endl;
    }
};

int main() {
    Derived d;
    d.display(); 
    d.show();   
    return 0;
}