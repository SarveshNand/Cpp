// https://stackoverflow.com/questions/4172722/what-is-the-rule-of-three

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

// Definition of the Phone class
class Phone {
    // Private member variables to store phone details
    string _name = "";
    string _os = "";
    int _price = 0;

public:
    // Default constructor
    Phone();

    // Parameterized constructor to initialize with specific values
    Phone(const string & name, const string & os, const int & price);

    // Copy constructor for creating a copy of an existing Phone object
    Phone(const Phone &);

    // Method to get the name of the phone (note: should return _name instead of _os)
    string getName() const;  // Marked const as it does not modify any member variables

    // Destructor to clean up resources
    ~Phone();
};

// Default constructor definition
Phone::Phone() : _name(), _os("Andy"), _price() {
    puts("Default constructor");
}

// Parameterized constructor definition
Phone::Phone(const string & name, const string & os, const int & price) : _name(name), _os(os), _price(price) {
    puts("This is parameter constructor");
}

// Copy constructor definition
Phone::Phone(const Phone & values) {
    puts("COPY constructor");
    _name = "new-" + values._name;  // Modify the name to indicate it's a copy
    _os = "skinned-" + values._os;  // Modify the OS to indicate it's a copy
    _price = values._price;  // Copy the price directly
}

// Destructor definition
Phone::~Phone() {
    printf("Destructor called for %s\n", _name.c_str());
}

// getName method definition
// Returns the name of the phone (note: currently returning _os, which may be a mistake)
string Phone::getName() const {
    return _name;  // Should return _name instead of _os
}

int main() {
    // Create a Phone object using the default constructor
    Phone samsungA1;
    cout << samsungA1.getName() << endl;

    // Create a Phone object using the parameterized constructor
    Phone OnePlus8("OP8", "Android", 799);
    cout << OnePlus8.getName() << endl;

    // Create a Phone object using the copy constructor
    Phone OnePlus8S = OnePlus8;
    cout << OnePlus8S.getName() << endl;

    return 0;
}