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
// Inheritance example in C++
#include <iostream> 

class Base {
public:
    void display() {
        std::cout << "This is the base class." << std::endl;
    }
};

class Derived : public Base {
public:
    void show() {
        std::cout << "This is the derived class." << std::endl;
    }
};

int main() {
    Derived d;
    d.display(); // Calls Base class function
    d.show();    // Calls Derived class function
    return 0;
}
// in this example, we have a base class `Base` with a member function `display()`. The derived class `Derived` inherits from the base class and has its own member function `show()`. In the `main()` function, we create an object of the derived class and call both the base class and derived class functions.