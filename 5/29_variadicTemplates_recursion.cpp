#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

// Base case for function template (single argument)
template <typename T>
void func(T t){
    // Function implementation
    cout << "One func " << t << endl;
}

// Variadic template for multiple arguments
template <typename T, typename... Args>
void func(T t, Args... args){
    // Function implementation

    // Process the first argument
    cout << "Two func " << t << endl;
    // Recursively process the remaining arguments
    func(args...);      // Recursive call with remaining arguments
}

int main(){

    string myName = "sarvesh";

    // Test with a single argument
    func(1);    // Calls the base case: prints "One func 1"

    // Test with multiple arguments
    func(1, 2, 3, 3.4, 4.5, myName);    // Calls the variadic template and recursion

    return 0;
}