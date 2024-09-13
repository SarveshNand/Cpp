#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int main() {

    // Lambda expression that prints "Hello Brother"
    // The lambda has no parameters and returns nothing
    []{ cout << "Hello Brother\n"; }();

    // Lambda expression that returns the integer 100
    // This lambda is not used anywhere in the code
    []() { return 100; };

    // Lambda expression to calculate the sum of two values
    // 'auto' keyword allows the lambda to accept parameters of any type
    // It uses type deduction to determine the parameter and return types
    auto sum = [](auto a, auto b) { return a + b; };

    // Call the lambda to sum integers
    cout << "Sum of 2 and 5 is: " << sum(2, 5) << endl;

    // Call the lambda to sum floating-point numbers
    cout << "Sum of 2.5 and 5.5 is: " << sum(2.5, 5.5) << endl;

    // Concatenate two strings using the lambda
    string a = "abc";
    string b = "def";
    cout << sum(a, b) << endl; // Outputs "abcdef"

    return 0;
}