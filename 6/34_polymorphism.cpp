#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;

// Base class One with a virtual method
class One {
public:
    // Virtual method that can be overridden in derived classes
    virtual void intro() {
        cout << "I am One\n";
    }
};

// Derived class Two, inherits from One
class Two : public One {
public:
    // Override the intro method from the base class
    void intro() {
        cout << "I am Two\n";
    }
};

// Derived class Three, inherits from One
class Three : public One {
public:
    // Override the intro method from the base class
    void intro() {
        cout << "I am Three\n";
    }
};

int main() {
    One *a;  // Pointer to base class One, used to demonstrate polymorphism
    Two b;   // Object of class Two
    Three c; // Object of class Three

    // Point to object of class Two
    a = &b;  
    // Call the intro method on the object pointed to by 'a'
    // Due to polymorphism, this calls Two's intro method
    a->intro(); 

    // Point to object of class Three
    a = &c;  
    // Call the intro method on the object pointed to by 'a'
    // Due to polymorphism, this calls Three's intro method
    a->intro(); 

    return 0;
}