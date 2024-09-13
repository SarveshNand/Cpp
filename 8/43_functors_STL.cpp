#include <iostream>
using std::cout;
using std::endl;

// Define a class that acts as a functor
class MyFloat {
    float ft; // Data member to store a float value
public:
    // Constructor to initialize 'ft' with a default value
    MyFloat() {
        ft = 0.1; // Initialize 'ft' to 0.1
    }

    // Method to print the current value of 'ft'
    void getValue() {
        cout << ft << endl;
    }

    // Overloaded operator() to make this class a functor
    void operator ()(float v) {
        ft += v; // Increment 'ft' by the value of 'v'
    }
};

int main() {
    MyFloat floaty; // Create an instance of MyFloat (functor)
    floaty.getValue(); // Output the initial value of 'ft'

    // Use the functor's operator() to add 0.1 to 'ft'
    floaty(0.1);
    floaty.getValue(); // Output the updated value of 'ft'
    
    // Use the functor's operator() to add 2.4 to 'ft'
    floaty(2.4);
    floaty.getValue(); // Output the updated value of 'ft'

    return 0;
}