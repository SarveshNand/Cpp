#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;

// Class representing a generic concept of having money
class Money {
public:
    // Method to simulate receiving money
    void gotMoney() {
        puts("Got 5k USD in my account");
    }
};

// Base class Man, representing a general human with a name and age
class Man {
    string _name; // Private member variable for storing the name of the man
    int _age;     // Private member variable for storing the age of the man

    // Private default constructor to prevent default instantiation
    Man() {}

protected:
    // Protected constructor allowing derived classes to initialize the base class with specific values
    Man(const string &name, const int &age)
    : _name(name), _age(age) {}

    // Protected method that derived classes can use to display running capability
    void run() {
        puts("I can run");
    }

public:
    // Public method to display the name and age of the man
    void sayName() const;
};

// Implementation of the sayName method to show the name and age
void Man::sayName() const {
    cout << "My name is: " << _name << " and age is: " << _age << endl;
}

// Derived class Superman, inherits from Man
class Superman : public Man {
    bool flight; // Indicates if Superman can fly (not used in this example)

public:
    // Constructor initializing the base class with a specific name and age (26)
    Superman(string name) : Man(name, 26) {}

    // Overridden method to display a specific running ability
    void run() {
        puts("I can run at light speed");
    }
};

// Derived class Spiderman, inherits from both Man and Money
class Spiderman : public Man, public Money {
    bool web_sling; // Indicates if Spiderman can sling webs (not used in this example)

public:
    // Constructor initializing the base class Man with a specific name and age (19)
    Spiderman(string name) : Man(name, 19) {}

    // Overridden method to display a specific running ability
    void run() {
        puts("I can run at fast speed");
    }
};

int main() {
    // Creating an instance of Superman with name "Kent"
    Superman clark("Kent");
    clark.sayName(); // Calls the base class method to display the name and age
    clark.run();     // Calls the overridden run method in Superman

    // Creating an instance of Spiderman with name "peter"
    Spiderman peter("peter");
    peter.sayName(); // Calls the base class method to display the name and age
    peter.run();     // Calls the overridden run method in Spiderman
    peter.gotMoney(); // Calls the Money class method to simulate receiving money

    return 0;
}