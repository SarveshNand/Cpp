// STL --> Standard Template Library
// STL provides a set of generic classes and functions that can operate on various data types.

// Generic Programming --> Data Types are not specified at the time of implementation of code logic.
//                         This approach enables writing flexible and reusable code. 
//                         In C++, this is typically achieved using templates.
//                         Run-time Polymorphism: This refers to the ability to call methods on objects of different types
//                         using a common interface. Templates enable compile-time polymorphism.

#include <iostream>
using std::cout;
using std::endl;

// Function template to find the larger of two values
// T is a placeholder for any data type that supports the '>' operator.
template <typename T>
T getBigger(T a, T b){
    // Return the larger of the two values
    // (a > b) ? a : b is a ternary operator that returns 'a' if 'a' is greater than 'b', otherwise returns 'b'
    return (a > b) ? a : b;
}

int main(){
    // Calling getBigger with integers 3 and 4
    // The compiler will instantiate the template with 'T' as 'int'
    cout << getBigger(3, 4) << endl; // Output: 4

    return 0;
}