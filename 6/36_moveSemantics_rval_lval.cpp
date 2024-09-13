#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::move;
using std::string;

// Function to swap two integers using move semantics
void swap(int &a, int &b) {
    // Move 'a' to 'tmp'. This is essentially an optimization to avoid copying.
    // Since 'a' is an lvalue, we use 'std::move' to cast it to an rvalue reference.
    // This allows us to avoid unnecessary copying when assigning to 'tmp'.
    int tmp = move(a);

    // Move 'b' to 'a'. We use 'std::move' to cast 'b' (an lvalue) to an rvalue reference.
    // The contents of 'b' are moved into 'a'.
    a = move(b);

    // Move 'tmp' (which holds the original value of 'a') to 'b'.
    // This completes the swap operation.
    b = move(tmp);
}

string printMe() {
    // Returns a string. This is an rvalue because it is a temporary object.
    return "I am print";
}

int main() {
    int a, b;

    // Prompt user to input the first integer
    cout << "Enter A: " << endl;
    cin >> a; // Read input into 'a'

    // Prompt user to input the second integer
    cout << "Enter B: " << endl;
    cin >> b; // Read input into 'b'

    // Call swap function to exchange values of 'a' and 'b'
    swap(a, b);

    // Output the swapped values
    cout << "A : " << a << endl;
    cout << "B : " << b << endl;

    // Call printMe() which returns a temporary string
    // 's' is an lvalue (a named variable), while 'printMe()' returns an rvalue (temporary object)
    // Assign the result of printMe() to 's'
    string s = printMe();

    // 'ss' is an rvalue reference (denoted by '&&') bound to the temporary result of printMe()
    // This demonstrates how an rvalue reference can directly bind to a temporary object
    string && ss = printMe();

    return 0;
}